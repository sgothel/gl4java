/**
 * @(#) CFuncVariable.java
 */

import java.lang.String;

/**
 * The variable-declaration holder !
 *
 * @see CFuncDeclaration
 * @version 	1.00, 12. Novemeber 1999
 * @author      Sven Goethel
 * 
 */
public class CFuncVariable 
	implements Cloneable
{

	public boolean complete;

	public boolean isVoid;
	public boolean isConst;
	public boolean usePointerHolderCast;

	public int     arrayNumber;

        public boolean isDirectBuffer; // JDK 1.4 only

	public boolean isGLUPtrObject;

	/**
	 * This Variable holds the base type
	 * of the original C type !
	 *
	 * E.g. "const int[][]" -> "int"
	 *      "const GLint *" -> "GLint"
	 * 
	 */
	public String typeC;

	/**
	 * This Variable holds the base type
	 * of the corresponding Java type !
	 *
	 * E.g. "const int[][]" -> "int"
	 *      "const GLint *" -> "int"
	 * 
	 */
	public String typeJava;

	/**
	 * This Variable holds the
	 * name of the variable !
	 *
	 * E.g. "const int[][] arg1;" -> "arg1"
	 * 
	 */
	public String identifier;

	public CFuncVariable(boolean _usePointerHolderCast)
	{
		complete=false;

		isVoid=false;
		isConst=false;
		isGLUPtrObject=false;

		usePointerHolderCast=_usePointerHolderCast;

		arrayNumber=0;

		typeC	= null;
		typeJava	= null;
		identifier 	= null;
	}

	protected Object clone()
	                throws CloneNotSupportedException
	{
		CFuncVariable nobj=new CFuncVariable(usePointerHolderCast);
		nobj.typeC=new String(typeC);
		nobj.typeJava=new String(typeJava);
		nobj.identifier=new String(identifier);
		nobj.complete=complete;
		nobj.isVoid=isVoid;
		nobj.isConst=isConst;
		nobj.arrayNumber=arrayNumber;
		nobj.isGLUPtrObject=isGLUPtrObject;
		return nobj;
	}

	public String toString()
	{
		int i;
		String res = new String();
		if(isConst)
			res += "const ";
	        res += "("+typeC+"|"+typeJava+") ";
		for(i=0; i<arrayNumber; i++)
			res += "*";
		if(isGLUPtrObject)
			res += "*";
		res += " "+identifier;
		if(isVoid)
			res += " /* Void typeC = <"+typeC+"> */";
		return res;
	}

	/**
	 * This Method extracts the 
	 * correct Type-Part for the JNI-Access Methods !
	 * This is needed for Array-Types !
	 * 
	 * E.g.: 
	 *      jintArray -> Int : (*env)->GetIntArrayElements(...)
	 */
	public String getJniCMethodBaseType()
	{
		if(typeJava!=null)
		{
		   return typeJava.substring(0, 1).toUpperCase() +
			  typeJava.substring(1, typeJava.length());   
	        }

		return null;
	}

	/**
	 * This Method returns the complete
	 * Java-Type-String for this variable.
	 * 
	 */
	public String getJavaTypeString()
	{
		int j;
		String res = new String();

                if (isDirectBuffer) {
                  res+="Buffer";
                } else {
                  res+=typeJava;
                }

		if(typeJava.equals("String"))
			j=1;
		else
			j=0;

		while(j<arrayNumber)
		{
			res+="[]";
			j++;
		}

		return res;
	}

	/**
	 * This Method returns the complete
	 * JNI-Type-String for this variable.
	 * 
	 */
	public String getJNITypeString()
	{
		int j;
		String res = new String();

		if(typeJava.equals("String") && arrayNumber==1)
		{
			res+="jstring";
			j=1;
		} else {
			if(isVoid)
				res+=typeJava;
			else
				res+="j"+typeJava;

			j=0;
		}

		if(arrayNumber>j)
			res+="Array";

		return res;
	}

	/**
	 * This Method returns the complete
	 * C-Type-String for this variable.
	 * 
	 */
	public String getCTypeString()
	{
		int j;
		String res = new String();

		if(isConst)
			res+="const ";

		res+=typeC;

		if(arrayNumber>0 || isDirectBuffer || isGLUPtrObject)
			res+=" ";
		for(j=0; j<arrayNumber; j++)
			res+="*";
                if (isDirectBuffer)
                {
                  res += "*";
                }
		if(isGLUPtrObject)
		{
			if(usePointerHolderCast)
				res+="*) (PointerHolder";
			else
				res+="*";
		}
		return res;
	}
}

