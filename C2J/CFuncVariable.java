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

	public int     arrayNumber;

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

	public CFuncVariable()
	{
		complete=false;

		isVoid=false;
		isConst=false;
		isGLUPtrObject=false;

		arrayNumber=0;

		typeC	= null;
		typeJava	= null;
		identifier 	= null;
	}

	protected Object clone()
	                throws CloneNotSupportedException
	{
		CFuncVariable nobj=new CFuncVariable();
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
			res += " /* Void */";
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

		res+=typeJava;

		for(j=0; j<arrayNumber; j++)
			res+="[]";

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

		if(isVoid)
			res+=typeJava;
		else
			res+="j"+typeJava;

		if(arrayNumber>0)
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

		if(arrayNumber>0 || isGLUPtrObject)
			res+=" ";
		for(j=0; j<arrayNumber; j++)
			res+="*";
		if(isGLUPtrObject)
			res+="*) (PointerHolder";
		return res;
	}
}

