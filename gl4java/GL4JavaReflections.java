
/**
 * @(#) GL4JavaReflections.java
 */

package gl4java;

import java.lang.System;
import java.lang.String;
import java.lang.reflect.*;

/**
 * The function-declaration holder !
 *
 * @see CFuncVariable
 * @version 	1.00, 12. Novemeber 1999
 * @author      Sven Goethel
 * 
 */
public class GL4JavaReflections 
	implements Cloneable
{
	public Object           methodClassInstance=null;
	public Class            type=null;
	public String           methodName=null;
	public Class[] 		argList=null;

	public GL4JavaReflections ( Object methodClassInstance, 
				    Class type, String methodName, 
				    Class[] argList )
	{
		this.methodClassInstance=methodClassInstance;
		this.type=type;
		this.methodName=methodName;
		this.argList=argList;
	}

	protected Object clone()
	                throws CloneNotSupportedException
	{
		int i;
		Class[] args = new Class[argList.length];

		for(i=0; i<argList.length; i++)
			args[i] = argList[i];

		GL4JavaReflections nobj = 
			new GL4JavaReflections(methodClassInstance, 
			                       type, methodName, args);


		return nobj;
	}

	public String getMethodSignature()
	{
		return getMethodSignature(argList, type);
	}

	public static String patchJvmSigType(String s)
	{
		if(s==null)
			return null;

		if(s.startsWith("["))
			return s;

		if(s.equals("boolean"))
			return "Z";
		if(s.equals("byte"))
			return "B";
		if(s.equals("char"))
			return "C";
		if(s.equals("short"))
			return "S";
		if(s.equals("int"))
			return "I";
		if(s.equals("long"))
			return "J";
		if(s.equals("float"))
			return "F";
		if(s.equals("double"))
			return "D";
		if(s.equals("void"))
			return "V";

		return s;
	}

	public static String getMethodSignature(Class[] args, Class type)
	{
		String res = new String();
		String helper = null;
		int i,j;

		res += "(";

		for (i=0; i<args.length; i++)
		{
			res += patchJvmSigType(args[i].getName());
		}
		res += ")"+patchJvmSigType(type.getName());
		return res;
	}

	public static GL4JavaReflections findMethod(Object methodClassInstance, 
						    String methodName, 
						    String signature)
	{
		Method[] methods = null;
		try {
			methods = 
			  methodClassInstance.getClass().getDeclaredMethods();
		} catch (Exception ex) {
			System.out.println("ERROR: GL4JavaReflections.findMethod");
			ex.printStackTrace();
			return null;
		}

	        GL4JavaReflections res=null;
		Method method = null;
		String name = null;
		Class[] args = null;
		Class t = null;

		for(int i=0; i<methods.length; i++)
		{
			method = methods[i];
			name = method.getName();
			if(name.equals(methodName))
			{
				args = method.getParameterTypes();
				t = method.getReturnType();
				if(signature==null ||
				   signature.equals(getMethodSignature(args, t))
				  )
				{
	        			res = new GL4JavaReflections(
					             methodClassInstance,
						     method.getReturnType(),
						     methodName,
						     args);
					return res;
				}
			}
		}
		System.out.println("GL4JavaReflections.findMethod: could not find method: "+methodName+" "+signature);

		return null;
	}

	public static String findMethodSignature (Object methodClassInstance, 
						  String methodName, 
						  String signature)
	{
		GL4JavaReflections ref = 
			findMethod(methodClassInstance, methodName, signature);
		if(ref==null) return null;
		return ref.getMethodSignature();
	}
}


