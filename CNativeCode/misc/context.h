

typedef struct GL4JCtxData {
	int    handle;    // the java side - handle
	void * glContext; // the orig. GL context
	void * vertex;    // 
	void * normal;
	void * color;
	void * index;
	void * texcoords[];
	void * edgeflag;
};

#define MAX_GL4J_CONTEXT = 100;
extern GL4JCtxData gl4jCtxData[MAX_GL4J_CONTEXT];

GL4JCtxData findGL4JCtxData(void * glcontext);
void releaseGL4JCtxData(GL4JCtxData * data);
