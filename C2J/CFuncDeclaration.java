/**
 * @(#) CFuncDeclaration.java
 */

import java.lang.System;
import java.lang.String;
import java.util.Vector;

/**
 * The function-declaration holder !
 *
 * @see CFuncVariable
 * @version 	1.00, 12. Novemeber 1999
 * @author      Sven Goethel
 * 
 */
public class CFuncDeclaration 
	implements Cloneable
{
	public boolean isValid;

	public CFuncVariable 	funcSpec;
	public Vector 		argList;


	public static final String jniFuncPrefixStd= "Java_" ;
	public static final String jniFuncArgPrefix="JNIEnv *env, jobject obj";

	public static final int FUNC_ERROR			= 0;
	public static final int FUNC_OK				= 1;
	public static final int FUNC_TYPE_MISSING		= 2;
	public static final int FUNC_NAME_MISSING		= 3;
	public static final int FUNC_LASTARG_INCOMPLETE		= 4;

	public CFuncDeclaration()
	{
		isValid 	= true;
		funcSpec 	= null;
		argList   	= new Vector();
	}

	protected Object clone()
	                throws CloneNotSupportedException
	{
		int i;
		CFuncDeclaration nobj = new CFuncDeclaration();

		nobj.isValid=isValid;

		try {
			nobj.funcSpec=(CFuncVariable)funcSpec.clone();
		} catch (Exception ex) {}

		for(i=0; i<argList.size(); i++)
		{
			CFuncVariable cfvar = (CFuncVariable)
							argList.elementAt(i);
			try {
				nobj.argList.addElement(cfvar.clone());
			} catch (Exception ex) {}
		}

		return nobj;
	}

	public int getBuildState()
	{
		if(funcSpec==null ||
		   (funcSpec.typeC==null && funcSpec.typeJava==null)
		  )
		{
			return FUNC_TYPE_MISSING;
		}

		if(funcSpec!=null && funcSpec.identifier==null)
			return FUNC_NAME_MISSING;

		if(funcSpec==null)
		{
		   System.err.println("ERROR: FunctionSpec is null !");
		   return FUNC_ERROR;
		}

		if(funcSpec!=null &&
		   (funcSpec.typeC==null || funcSpec.typeJava==null)
		  )
		{
		   System.err.println("ERROR: FunctionSpec: typeC or typeJava is null !");
		   return FUNC_ERROR;
		}

		int i;
		CFuncVariable cfvar = null;

		for(i=0; i<argList.size(); i++)
		{
			cfvar = (CFuncVariable)argList.elementAt(i);
			if(cfvar.complete==false && i<argList.size()-1)
			{
			   System.err.println("ERROR: FunctionSpec: argList["+i+"] != complete - even if it is not the last working element !");
			   return FUNC_ERROR;
			}
			else if(cfvar.complete==true &&
			        ( cfvar.typeC == null ||
			          cfvar.typeJava == null ||
			          cfvar.identifier == null
				)
			       )
			{
			   System.err.println("ERROR: FunctionSpec: argList["+i+"] is set to complete - even if its members are not set complete !");
			   return FUNC_ERROR;
			}
			else if(cfvar.complete==false)
				return FUNC_LASTARG_INCOMPLETE;
		}
		return FUNC_OK;
	}

	public boolean isValid()
	{
		return getBuildState()==FUNC_OK;
	}

	public CFuncVariable getWorkingVar()
	{
		int state = getBuildState();

		if(state==FUNC_ERROR) return null;

		if(funcSpec==null && state==FUNC_TYPE_MISSING)
		{
			funcSpec = new CFuncVariable();
			return funcSpec;
		}
		else if(state==FUNC_TYPE_MISSING || state==FUNC_NAME_MISSING)
		{
			return funcSpec;
		}
		else if(state==FUNC_LASTARG_INCOMPLETE)
		{
			return (CFuncVariable)
				argList.elementAt(argList.size()-1);
		}

		CFuncVariable cfvar = new CFuncVariable();
		argList.addElement(cfvar);
		return cfvar;
	}

	public void setWorkingVar(CFuncVariable cfvar)
	{
		int state = getBuildState();

		if(state==FUNC_ERROR) return ;

		if(funcSpec==null ||
		   state==FUNC_TYPE_MISSING || state==FUNC_NAME_MISSING
		  )
		{
			funcSpec=cfvar;
			return;
		}
		else if(state==FUNC_LASTARG_INCOMPLETE)
		{
			argList.setElementAt(cfvar, argList.size()-1);
			return;
		}

		argList.addElement(cfvar);
		return;
	}

	public CFuncVariable getLastIncompleteVar()
	{
		int state = getBuildState();

		if(state==FUNC_LASTARG_INCOMPLETE)
		{
			return (CFuncVariable) 
					argList.elementAt(argList.size()-1);
		}

		return null;
	}

	public String state2String()
	{
		int state = getBuildState();   

		return state2String(state);
	}

	public static String state2String(int state)
	{
		switch (state)
		{
			case FUNC_OK	: 
					return "OK";
			case FUNC_TYPE_MISSING: 
					return "TYPE MISSING";
			case FUNC_NAME_MISSING: 
					return "NAME MISSING";
			case FUNC_LASTARG_INCOMPLETE: 
					return "LAST ARG INCOMPLETE";
			case FUNC_ERROR: 
			default:
					return "ERROR";
		}
	}

	public String args2JavaStrList()
	{
		String res = new String();
		CFuncVariable cfvar;
		int i,j;

		for (i=0; i<argList.size(); i++)
		{
		  	cfvar = (CFuncVariable) argList.elementAt(i);
			res += "\t\t" + 
			        cfvar.getJavaTypeString() + " " + 
				cfvar.identifier ;

			if(i<argList.size()-1)
				res += ",\n";
			else
				res += "\n";
		}
		return res;
	}

	public String argsType2CStrList()
	{
		String res = new String();
		CFuncVariable cfvar;
		int i,j;

		for (i=0; i<argList.size(); i++)
		{
		  	cfvar = (CFuncVariable) argList.elementAt(i);
			res +=  cfvar.getCTypeString();

			if(i<argList.size()-1)
				res += ", ";
		}
		return res;
	}

	public String toString()
	{
		String tmp = new String();

		tmp += state2String() + ": " ;

		int i;
		CFuncVariable cfvar = null;

		if(funcSpec==null)
			tmp+="<type> <name> (";
		else
			tmp+=funcSpec.toString()+" (\n";

		for(i=0; i<argList.size(); i++)
		{
			cfvar = (CFuncVariable)argList.elementAt(i);
			tmp+="\t"+i+": "+cfvar.toString()+", \n";
		}
		tmp += ");\n" ;

		return tmp;
	}

	/**
	 * Generates a 'clone' of THIS instance AND
	 * changes the "typeJava" which must be a "void" Pointer
	 * in the arguments-vector,
	 * to another basic type, e.g. "typeJava":="int" !!
	 *
	 * @arg customType the new type
	 * @arg which      the Void-Pointer number within the arg-vector, 
	 *                 or "-1" for all Void-Pointer
	 *                 E.g.: "0" for ther first occurence of a Void-Pointer
	 * @return         The changed clone of THIS
	 */
	protected CFuncDeclaration getChangedVoidPtr2CustomPtrClone
					(String customType, int which)
	{
		CFuncDeclaration tmp = null;

		try {
			tmp = (CFuncDeclaration) this.clone();	
		} catch (Exception ex)
		{ System.err.println(ex);}

		if(tmp==null)
			return null;

		CFuncVariable cfvar;
		int i,n;
		boolean isNewTypeVoid = customType.equals("void");

		for (i=0,n=0 ; i<tmp.argList.size(); i++)
		{
		  	cfvar = (CFuncVariable) tmp.argList.elementAt(i);
			if(cfvar.isVoid && cfvar.arrayNumber>0)
			{
				if(which==n || which<0)
				{
					cfvar.typeJava=customType;
					cfvar.isVoid=isNewTypeVoid;
				}
				if(which==n)
					break; /* job done - leave loop */
				n++;
			}
		}
		return tmp;
	}

	protected String args2JNIStrList()
	{
		String res = new String();
		CFuncVariable cfvar;
		int i,j;

		for (i=0; i<argList.size(); i++)
		{
		  	cfvar = (CFuncVariable) argList.elementAt(i);
			res += ",\n\t\t" + 
			        cfvar.getJNITypeString() + " " + 
				cfvar.identifier ;
		}
		return res;
	}

	protected int getNumberOfVoidPointerArgs()
	{
		CFuncVariable cfvar;
		int i;
		int n;

		for (i=0, n=0; i<argList.size(); i++)
		{
		  	cfvar = (CFuncVariable) argList.elementAt(i);
			if(cfvar.isVoid && cfvar.arrayNumber>0)
				n++;
		}
		return n;
	}

	protected String getFuncArgsSignature()
	{
		String res = new String();
		CFuncVariable cfvar;
		int i,j;

		res += "__";

		for (i=0; i<argList.size(); i++)
		{
		  	cfvar = (CFuncVariable) argList.elementAt(i);
			for (j=0; j<cfvar.arrayNumber; j++)
				res+="_3"; /* "[" -> type[] */
			if(cfvar.typeJava.equals("boolean"))
				res+="Z";
			else if(cfvar.typeJava.equals("byte"))
				res+="B";
			else if(cfvar.typeJava.equals("char"))
				res+="C";
			else if(cfvar.typeJava.equals("short"))
				res+="S";
			else if(cfvar.typeJava.equals("int"))
				res+="I";
			else if(cfvar.typeJava.equals("long"))
				res+="J";
			else if(cfvar.typeJava.equals("float"))
				res+="F";
			else if(cfvar.typeJava.equals("double"))
				res+="D";
			else if(cfvar.typeJava.equals("String"))
				res+="Ljava_lang_String_2";
		}
		return res;
	}

	protected String __toJniJavaCode(boolean isFinal)
	{
		String res = new String();

		if(funcSpec.arrayNumber>0)
		{
			System.err.println("ERROR: Pointer As Function-ReturnType is not supported yet !");
			System.err.println("Function: "+funcSpec);
			return "";
		}

		if(isFinal)
		       res += "\tpublic final native ";
		else
		       res += "\tpublic native ";

		res += funcSpec.getJavaTypeString() + " " + 
		       funcSpec.identifier + " (\n";

	        res += args2JavaStrList();
		res += "\t) ;\n";

		return res;
	}

	public String toJniJavaCode(boolean isFinal)
	{
		int numberOfVoidPointerArgs = getNumberOfVoidPointerArgs();

		if(numberOfVoidPointerArgs==0)
		{
			return  __toJniJavaCode(isFinal);
		}

		CFuncDeclaration tmp = null;
		String res = new String();

		tmp=getChangedVoidPtr2CustomPtrClone("byte", -1);
		if(tmp!=null) res+=tmp.__toJniJavaCode(isFinal);

		tmp=getChangedVoidPtr2CustomPtrClone("short", -1);
		if(tmp!=null) res+=tmp.__toJniJavaCode(isFinal);

		tmp=getChangedVoidPtr2CustomPtrClone("int", -1);
		if(tmp!=null) res+=tmp.__toJniJavaCode(isFinal);

		tmp=getChangedVoidPtr2CustomPtrClone("float", -1);
		if(tmp!=null) res+=tmp.__toJniJavaCode(isFinal);

		tmp=getChangedVoidPtr2CustomPtrClone("double", -1);
		if(tmp!=null) res+=tmp.__toJniJavaCode(isFinal);

		tmp=getChangedVoidPtr2CustomPtrClone("boolean", -1);
		if(tmp!=null) res+=tmp.__toJniJavaCode(isFinal);

		tmp=getChangedVoidPtr2CustomPtrClone("long", -1);
		if(tmp!=null) res+=tmp.__toJniJavaCode(isFinal);

		return res;
	}

	protected String __toJniCCode(String clazzName, int exportMode, 
			              int modifier, boolean overloaded)
	{
		String res = new String();
		CFuncVariable cfvar;
		int i;

		if(funcSpec.arrayNumber>0)
		{
			System.err.println("ERROR: Pointer As Function-ReturnType is not supported yet !");
			System.err.println("Function: "+funcSpec);
			return "";
		}

	        res += "\tJNIEXPORT " + funcSpec.getJNITypeString() + 
		        " JNICALL\n" ;

		res += "\t" + 
		       jniFuncPrefixStd+clazzName+"_"+funcSpec.identifier;
		       
		if(overloaded)
			res += getFuncArgsSignature();
		res += " (\n";

		res += "\t\t"+jniFuncArgPrefix;
	        res += args2JNIStrList();
		res += ")\n";

		res += "\t{\n";

		if(exportMode==C2J.EXPORT_JNI_C_DYN)
		{
			//
			// Add the global static OpenGL function pointer
			//
			res += "\t\tstatic "+funcSpec.getJNITypeString()+
			       " (CALLBACK *__func_ptr__)("+argsType2CStrList()+") = NULL;\n";
		}

		//
		// Add the return variable 
		//
		if(funcSpec.typeJava.equals("void")==false)
		{
		    res += "\t\t"+funcSpec.getJNITypeString()+" ret;\n\n";
		}

		String jniCMethodBaseType;

		//
		// Adding the JNI access Methods 
		// for Arrays ...
		// THE VARABLE DEFINITIONS
		//
		for (i=0;  i<argList.size() ; i++ )
		{
		  cfvar = (CFuncVariable) argList.elementAt(i);

	          if( cfvar.arrayNumber>0 )
		  {

		    jniCMethodBaseType = cfvar.getJniCMethodBaseType();

		    if( !cfvar.isConst || 
		        (modifier&C2J.MODIFIER_JNI_COPY_CHECK)>0 )
		      res += "\t\tjboolean isCopiedArray" +i+ " = JNI_FALSE;\n";

		    res += "\t\t" + 
				"j" + cfvar.typeJava +
				" *ptr" + i + 
				" = NULL;\n";

		    if( (modifier&C2J.MODIFIER_JNI_COPY_CHECK )>0 )
		    {
			    //
			    // JAU COPY Warning, if copy is used !!!
			    //
			    res += "\t\tstatic int isWarned"+i+" = 0;\n";
		    }
		  }
		}

	        res += "\n" ;

		if(exportMode==C2J.EXPORT_JNI_C_DYN)
		{
			//
			// Add the global static OpenGL function pointer assignment
			//
			res += "\t\tif(__func_ptr__==NULL) {\n";
			res += "\t\t\t__func_ptr__ = ("+
			  funcSpec.getJNITypeString()+" (CALLBACK *)("+
			  argsType2CStrList()+"))\n"+
			  "\t\t\t\tgetGLProcAddressHelper(\""
				    +funcSpec.identifier+"\", NULL, 1, 0);\n";
			res += "\t\t\tif(__func_ptr__==NULL)\n";
			if(funcSpec.typeC.equals("void")==false)
				res += "\t\t\t\treturn 0;\n";
			else
				res += "\t\t\t\treturn;\n";
			res += "\t\t}\n";
		}

		//
		// Adding the JNI access Methods 
		// for Arrays ...
		// THE ARGUMENT ACCESS
		//
		for (i=0;  i<argList.size() ; i++ )
		{
		  cfvar = (CFuncVariable) argList.elementAt(i);

	          if( cfvar.arrayNumber>0 )
		  {
		    jniCMethodBaseType = cfvar.getJniCMethodBaseType();

		    res += "\t\tif("+cfvar.identifier+"!=NULL)\n";
		    res += "\t\t{\n";

		    if ( (modifier&C2J.MODIFIER_JNI_CRITICAL_ARRAY)>0 ) 
		    {
			    if( !cfvar.isConst || 
				(modifier&C2J.MODIFIER_JNI_COPY_CHECK)>0 )
			    {
				 res += "\t\t\t" + 
					"ptr" + i + " = " +
					"(j" + cfvar.typeJava + " *) " +
					"(*env)->GetPrimitiveArrayCritical" +
					"(env, " + cfvar.identifier + ", " + 
					"&isCopiedArray"+i+");\n";
			     } else {
				 res += "\t\t\t" + 
					"ptr" + i + " = " +
					"(j" + cfvar.typeJava + " *) " +
					"(*env)->GetPrimitiveArrayCritical" +
					"(env, " + cfvar.identifier + ", 0);\n";
			     }
		    } else {
			    if( !cfvar.isConst || 
				(modifier&C2J.MODIFIER_JNI_COPY_CHECK)>0 )
			    {
				 res += "\t\t\t" + 
					"ptr" + i + " = " +
					"(*env)->Get" + jniCMethodBaseType + 
					"ArrayElements(env, " +
					cfvar.identifier + ", " + 
					"&isCopiedArray"+i+");\n";
			     } else {
				 res += "\t\t\t" + 
					"ptr" + i + " = " +
					"(*env)->Get" + jniCMethodBaseType + 
					"ArrayElements(env, " +
					cfvar.identifier + ", 0);\n";
			     }
		    }
		    if( (modifier&C2J.MODIFIER_JNI_COPY_CHECK)>0 )
		    {
			//
			// JAU COPY Warning, if copy is used !!!
			//
		        res += "\t\t\tif( isCopiedArray"+i+" == JNI_TRUE && isWarned"+i+"==0 ) {\n";
		        res += "\t\t\t\tisWarned"+i+"=1;\n";
		        res += "\t\t\t\tprintf(\"COPY by "+funcSpec.identifier+" arg: "+cfvar.identifier+"\");\n";
		        res += "\t\t\t}\n";
		    }
		    res += "\t\t}\n";

		  }
		}

		//
		// Add the return variable assignment, incl. casting !
		//
		if(funcSpec.typeC.equals("void")==false)
		{
		    res += "\t\tret = ("+funcSpec.getJNITypeString()+") ";
		}
		else res += "\t\t";

		//
		// Add the native function call !
		//
		if(exportMode==C2J.EXPORT_JNI_C)
			res += funcSpec.identifier + " (\n";
		else
			res += "__func_ptr__ (\n";

		for (i=0;  i<argList.size() ; i++ )
		{
		    cfvar = (CFuncVariable) argList.elementAt(i);

		    // 
		    // add a casting to the found 
		    // original type, e.g.: OpenGL-Types
		    //
		    res += "\t\t\t(" + cfvar.getCTypeString() +") ";

		    if( cfvar.arrayNumber>0 )
			res += "ptr"+i;
		    else 
			res += cfvar.identifier;

		    if(i<argList.size()-1)
			res += ",\n"; 
		    else
			res += "\n"; 
		}
		res += "\t\t);\n\n";

		//
		// Adding the JNI release Methods 
		// for Arrays ... depending of const-Array and pinning
		//
		for (i=0;  i<argList.size() ; i++ )
		{
		  cfvar = (CFuncVariable) argList.elementAt(i);

		  if( cfvar.arrayNumber>0 )
		  {
		    jniCMethodBaseType = cfvar.getJniCMethodBaseType();

		    res += "\t\tif("+cfvar.identifier+"!=NULL)\n";
		    res += "\t\t{\n";
		    if ( (modifier&C2J.MODIFIER_JNI_CRITICAL_ARRAY)>0 ) 
		    {
			    if( !cfvar.isConst )
			    {
				// 
				// Free the memory, or the pinning lock.
				// A copy is needed, 
				// if the Get*Array method used
				// the copy method !
				//
				res += "\t\t\t(*env)->ReleasePrimitiveArrayCritical" + 
					"(env,  "+ cfvar.identifier +
					", ptr" + i + ", "
					+"(isCopiedArray"+i+" == JNI_TRUE)?0:JNI_ABORT"
					+");\n";
			    } else {
				// 
				// Just free the memory, or the pinning lock.
				// No copy needed, 
				// because of the const data type !
				//
				res += "\t\t\t(*env)->ReleasePrimitiveArrayCritical" + 
					"(env,  "+ cfvar.identifier +
					", ptr" + i + ", JNI_ABORT);\n";
			    }
		    } else {
			    if( !cfvar.isConst )
			    {
				// 
				// Free the memory, or the pinning lock.
				// A copy is needed, 
				// if the Get*Array method used
				// the copy method !
				//
				res += "\t\t\t(*env)->Release" + 
					jniCMethodBaseType+
					"ArrayElements(env,  "+ 
					cfvar.identifier +
					", ptr" + i + ", "
					+"(isCopiedArray"+i+" == JNI_TRUE)?0:JNI_ABORT"
					+");\n";
			    } else {
				// 
				// Just free the memory, or the pinning lock.
				// No copy needed, 
				// because of the const data type !
				//
				res += "\t\t\t(*env)->Release" + 
				        jniCMethodBaseType+
					"ArrayElements(env,  "+ 
					cfvar.identifier +
					", ptr" + i + ", JNI_ABORT);\n";
			    }
		    }
		    res += "\t\t}\n";
		  }
		}

		//
		// Let's give the baby to the caller  ...
		//
		if(funcSpec.typeJava.equals("void")==false)
			res += "\t\treturn ret;\n";
		res += "\t}\n";

		return res;
	}

	public String toJniCCode(String clazzName, int exportMode, int modifier)
	{
		int numberOfVoidPointerArgs = getNumberOfVoidPointerArgs();

		if(numberOfVoidPointerArgs==0)
		{
			return  __toJniCCode(clazzName, exportMode, modifier, false);
		}

		CFuncDeclaration tmp = null;
		String res = new String();

		tmp=getChangedVoidPtr2CustomPtrClone("byte", -1);
		if(tmp!=null) res+=tmp.__toJniCCode(clazzName, exportMode, modifier, true);

		tmp=getChangedVoidPtr2CustomPtrClone("short", -1);
		if(tmp!=null) res+=tmp.__toJniCCode(clazzName, exportMode, modifier, true);

		tmp=getChangedVoidPtr2CustomPtrClone("int", -1);
		if(tmp!=null) res+=tmp.__toJniCCode(clazzName, exportMode, modifier, true);

		tmp=getChangedVoidPtr2CustomPtrClone("float", -1);
		if(tmp!=null) res+=tmp.__toJniCCode(clazzName, exportMode, modifier, true);

		tmp=getChangedVoidPtr2CustomPtrClone("double", -1);
		if(tmp!=null) res+=tmp.__toJniCCode(clazzName, exportMode, modifier, true);

		tmp=getChangedVoidPtr2CustomPtrClone("boolean", -1);
		if(tmp!=null) res+=tmp.__toJniCCode(clazzName, exportMode, modifier, true);

		tmp=getChangedVoidPtr2CustomPtrClone("long", -1);
		if(tmp!=null) res+=tmp.__toJniCCode(clazzName, exportMode, modifier, true);

		return res;
	}

	protected String __toMsJDirectCode(String dllname)
	{
		String res = new String();
		CFuncVariable cfvar;
		int i;

		if(funcSpec.arrayNumber>0)
		{
			System.err.println("ERROR: Pointer As Function-ReturnType is not supported yet !");
			System.err.println("Function: "+funcSpec);
			return "";
		}

		//
		// Use The JDirect security tag to make security calls easy !
		// This one grants access to all MSJVM's >=
		//       "Microsoft (R) VM for Java, 5.0 Release 5.0.0.3186"
		// without signing the applet !!!
		//
		// Making the mapping from the "static native" wrapper function
		// to the corresponding native function
		//
		res += "\t/**\n";
		res += "\t * @dll.import(\""+dllname+"\",entrypoint=\""+
		       funcSpec.identifier+"\")\n";
		res += "\t */\n";

		// 
		// adding the "static native" wrapper function
		//
	        res += "\tprivate static native ";
		res += funcSpec.getJavaTypeString() + 
		       " __" + funcSpec.identifier + " (\n";
	        res += args2JavaStrList();
		res += "\t) ;\n";

		// 
		// adding our GL4Java glue to the 
		// "static native" wrapper function
		//
	        res += "\tpublic final ";
		res += funcSpec.getJavaTypeString() + 
		       " " + funcSpec.identifier + " (\n";
	        res += args2JavaStrList();
		res += "\t)\n";
		res += "\t{\n";
		res += "\t\t";
		if(funcSpec.typeJava.equals("void")==false)
			res += "return ";
		res += "__"+funcSpec.identifier+"(\n";
		for (i=0; i<argList.size(); i++)
		{
		  	cfvar = (CFuncVariable) argList.elementAt(i);
			res += "\t\t\t" + cfvar.identifier ;
			if(i<argList.size()-1)
				res += ",\n";
			else
				res += "\n";
		}
		res += "\t\t) ;\n";
		res += "\t}\n";

		return res;
	}

	public String toMsJDirectCode(String dllname)
	{
		int numberOfVoidPointerArgs = getNumberOfVoidPointerArgs();

		if(numberOfVoidPointerArgs==0)
		{
			return  __toMsJDirectCode(dllname);
		}

		CFuncDeclaration tmp = null;
		String res = new String();

		tmp=getChangedVoidPtr2CustomPtrClone("byte", -1);
		if(tmp!=null) res+=tmp.__toMsJDirectCode(dllname);

		tmp=getChangedVoidPtr2CustomPtrClone("short", -1);
		if(tmp!=null) res+=tmp.__toMsJDirectCode(dllname);

		tmp=getChangedVoidPtr2CustomPtrClone("int", -1);
		if(tmp!=null) res+=tmp.__toMsJDirectCode(dllname);

		tmp=getChangedVoidPtr2CustomPtrClone("float", -1);
		if(tmp!=null) res+=tmp.__toMsJDirectCode(dllname);

		tmp=getChangedVoidPtr2CustomPtrClone("double", -1);
		if(tmp!=null) res+=tmp.__toMsJDirectCode(dllname);

		tmp=getChangedVoidPtr2CustomPtrClone("boolean", -1);
		if(tmp!=null) res+=tmp.__toMsJDirectCode(dllname);

		tmp=getChangedVoidPtr2CustomPtrClone("long", -1);
		if(tmp!=null) res+=tmp.__toMsJDirectCode(dllname);

		return res;
	}

        /**
	*
	* For testing and documentation purposes !
        *
        * @param args  The default cmd-line arguments,
	*              not used here !
        *
        * @return      Nothing !
        *
        * @see	CFuncDeclaration
        * @see	CFuncVariable
        */
	public static void main(String args[])
	{
		CFuncDeclaration cfunc;
		CFuncVariable cfvar;
		int i;
		boolean doubleArray;

		//
		// Simulation fuer die Konvertierung nach Java (JNI+MS)
		// und C (JNI Glue Functions)
		//
		System.out.println("\n\nTEST with getWorkingVar !!!!!!");
		cfunc = new CFuncDeclaration();
		System.out.println("creation: "+cfunc);
		cfvar = cfunc.getWorkingVar();
		System.out.println("after fetching 1st working var: "+cfunc);
		cfvar.typeC = "int";
		cfvar.typeJava  = "int";
		System.out.println("after setting funcSpec.type: "+cfunc);
		cfvar.identifier  = "testFunction";
		cfvar.complete  = true;
		System.out.println("after setting funcSpec.name: "+cfunc);

		for(i=0, doubleArray=false; i<4; i++)
		{
			cfvar = cfunc.getWorkingVar();
			if(i%2==0)
			{
				cfvar.arrayNumber=doubleArray?1:2;
				doubleArray=!doubleArray;
			}
			if(i%3==0)
				cfvar.isConst=true;
			cfvar.typeC = "int";
			cfvar.typeJava  = "int";
			cfvar.identifier  = "arg"+i;
			cfvar.complete  = true;
		}
		cfvar = cfunc.getWorkingVar();
		cfvar.arrayNumber=1;
		cfvar.typeC = "GLvoid";
		cfvar.typeJava  = "void";
		cfvar.identifier  = "anyptr1";
		cfvar.isVoid    = true;
		cfvar.complete  = true;

		System.out.println("after all:"+cfunc);
		System.out.println("\n\nTEST JNI JAVA (!final && final):");
		System.out.println(cfunc.toJniJavaCode(false));
		System.out.println(cfunc.toJniJavaCode(true));
		System.out.println("\n\nTEST MS-JDirect Java:");
		System.out.println(cfunc.toMsJDirectCode("OPENGL32"));
		System.out.println("\n\nTEST JNI C:");
		System.out.println(cfunc.toJniCCode("jau_Demo",
				   C2J.EXPORT_JNI_C_DYN, 0));

		cfvar.arrayNumber=2;
		cfvar.isConst=true;

		System.out.println("\n\nTEST JNI JAVA (!final && final):");
		System.out.println(cfunc.toJniJavaCode(false));
		System.out.println(cfunc.toJniJavaCode(true));
		System.out.println("\n\nTEST MS-JDirect Java:");
		System.out.println(cfunc.toMsJDirectCode("GLU32"));
		System.out.println("\n\nTEST JNI C:");
		System.out.println(cfunc.toJniCCode("jau_Demo",
				   C2J.EXPORT_JNI_C_DYN, 0));

		return;
	}
}


