

public native byte gluErrorString[] ( int errorCode ) ;


public native void gluNurbsCallback ( long nobj , int which , void ( fn[] ) ( ) ) ;


public native void gluTessCallback ( long tobj , int which , void ( fn[] ) ( ) ) ;


public native byte gluGetString[] ( int name ) ;

public final native void gluTessBeginContour (long tess);

public final native void gluTessBeginPolygon (long tess, byte[] data);
public final native void gluTessBeginPolygon (long tess, short[] data);
public final native void gluTessBeginPolygon (long tess, int[] data);
public final native void gluTessBeginPolygon (long tess, float[] data);
public final native void gluTessBeginPolygon (long tess, double[] data);
public final native void gluTessBeginPolygon (long tess, boolean[] data);
public final native void gluTessBeginPolygon (long tess, long[] data);

public final native void gluTessEndContour (long tess);

public final native void gluTessEndPolygon (long tess);

public final native void gluTessNormal (long tess, double valueX, double valueY, double valueZ);

public final native void gluTessProperty (long tess, int which, double data);

public final native void gluTessVertex ( long tess, double[] location, byte[] data ) ;
public final native void gluTessVertex ( long tess, double[] location, short[] data	) ;
public final native void gluTessVertex ( long tess, double[] location, int[] data ) ;
public final native void gluTessVertex ( long tess, double[] location, float[] data	) ;
public final native void gluTessVertex ( long tess, double[] location, double[] data ) ;
public final native void gluTessVertex ( long tess, double[] location, boolean[] data ) ;
public final native void gluTessVertex ( long tess, double[] location, long[] data ) ;
