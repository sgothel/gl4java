import java.awt.*;
import gl4java.*;
import gl4java.awt.*;
import gl4java.drawable.*;

/** Tests the GLComponentFactory/GLEventListener mechanism via a port
    of the OpenGL logo applet. */

public class TestListener implements GLEventListener, GLEnum {

    GLFunc gl;
    GLUFunc glu;

    static final int RAND_MAX = 100;

        /* some math.h's don't define M_PI */
    static final float M_PI = 3.14159265359f;

    static final int ACC = 8;
    static final int ACC2 = 16;
    static final int ACC3 = 48;
    static final int ACC4 = 24;
    static final float THLD = 0.6f;
    static final float THLD2 = 0.8f;

    int angle, rotating;

    float TRANS[][];
    float ROTAXIS[][];
    float ROT[];

    float char_El[][][];
    float normal_El[][][];

    float char_O[][][];
    float normal_O[][][];

    float char_P[][][];
    float normal_P[][][];

    float char_G[][][];
    float normal_G[][][];

    float accSIN[], accCOS[];

    float difmat4[] = { 0.425f, 0.570f, 0.664f, 1.0f };
    float difamb4[] = { 0.425f, 0.570f, 0.664f, 1.0f };
    float matspec4[] = { 0.174f, 0.174f, 0.174f, 1.0f };

    float lightpos[] = { 1.0f, 1.0f, 1.0f, 0.0f };
    float lightamb[] = { 0.3f, 0.3f, 0.3f, 1.0f };
    float lightdif[] = { 0.8f, 0.8f, 0.8f, 1.0f };
    float speed=0f, progress = 1f;

    public void init(GLDrawable drawable) {
        gl = drawable.getGL();
        glu = drawable.getGLU();

        /* here we should add and initialize our JAVA components */
        TRANS = new float[7][3];
        ROTAXIS = new float[7][3];
        ROT = new float[7];

        char_El=new float[ACC3+1][ACC+1][3];
        normal_El=new float[ACC3+1][ACC+1][3];

        char_O=new float[ACC4][ACC+1][3];
        normal_O=new float[ACC4][ACC+1][3];

        char_P=new float[ACC2][ACC+1][3];
        normal_P=new float[ACC2][ACC+1][3];

        char_G=new float[ACC4][ACC+1][3];
        normal_G=new float[ACC4][ACC+1][3];

        accSIN=new float[ACC+1];
        accCOS=new float[ACC+1];

        randomize();

        gl.glShadeModel (GL_SMOOTH);
        gl.glEnable(GL_DEPTH_TEST);
        gl.glLightfv(GL_LIGHT0, GL_POSITION, lightpos);
        gl.glLightfv(GL_LIGHT0, GL_AMBIENT, lightamb);
        gl.glLightfv(GL_LIGHT0, GL_DIFFUSE, lightdif);
        gl.glEnable(GL_LIGHTING);
        gl.glEnable(GL_LIGHT0);
        gl.glColor3f(1.0f, 1.0f, 1.0f);
        gl.glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        gl.glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        gl.glEnable(GL_NORMALIZE);
        def_logo();
        gl.glCullFace(GL_BACK);
        gl.glEnable(GL_CULL_FACE);
    }

    public void preDisplay(GLDrawable drawable)
    { }

    public void display(GLDrawable drawable) {
        int i;

        // just render it
        gl.glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        setCamera();
        draw_logo();
    }

    public void postDisplay(GLDrawable drawable)
    {
        //
        // computation for an animation sequence ...
        //
        speed = -0.95f*speed + progress*0.05f;
        if (progress > 0.0f && speed < 0.0003f)
            speed = 0.0003f;
        if (speed > 0.01f)
            speed = 0.01f;
        progress = progress - speed;
    }

    public void reshape(GLDrawable drawable, int width, int height) {
        gl.glMatrixMode (GL_MODELVIEW);
        gl.glViewport (0, 0, width, height);
        gl.glLoadIdentity();
        setCamera();
    }

    public void cleanup(GLDrawable drawable)
    { }

    void setCamera() {
        gl.glMatrixMode (GL_PROJECTION);
        gl.glLoadIdentity ();
        gl.glFrustum (-0.1333f, 0.1333f, -0.1f, 0.1f, 0.2f, 150.0f);
        gl.glMatrixMode(GL_MODELVIEW);
        gl.glLoadIdentity();
        glu.gluLookAt(0,1.5f,2, 0,1.5f,0, 0,1,0);
        gl.glTranslatef(0.0f, -8.0f, -45.0f);
        gl.glRotatef(-progress*720f, 0.0f, 1.0f, 0.0f);
    }

    int rnd(int i) {
        return ( (int)((float)Math.random()*RAND_MAX) )%i;
    }

    void groen_texture() {
        gl.glMaterialfv(GL_FRONT, GL_DIFFUSE, difmat4);
        gl.glMaterialfv(GL_FRONT, GL_AMBIENT, difamb4);
        gl.glMaterialfv(GL_FRONT, GL_SPECULAR, matspec4);
        gl.glMaterialf(GL_FRONT, GL_SHININESS, 35.0f);
    }

    void def_O() {
        float a, s, c, ln;
        int i,j,k,l,m,n;
        float dx, dy;
        float dx1, dx2, dy1, dy2, dz1, dz2;
        float center_O[][];
        float width_O[];

        center_O=new float[ACC4+4][3];
        width_O=new float[ACC4+4];

        for (i=0;i<ACC4;i++)
            {
                a = 2.0f*((float) i)*M_PI/ACC4;
                s = 1+(float)Math.sin(a);
                c = (float)Math.cos(a);
                center_O[i][0] = c*3.8f;
                center_O[i][1] = s*3.8f+(s<-1.01f?-0.8f:(s>1.01f?0.8f:0)) + 0.8f;
                center_O[i][2] = 0.0f;
                width_O[i] = 0.6f;
            }

        /* I should be able to generalise this. oh well */
        for (i=0;i<ACC4;i++)
            {
                j = (i+1)%ACC4;
                k = (i+ACC4-1)%ACC4;
                for (a=0;a<ACC;a++)
                    {
                        c = (float)Math.cos(a*M_PI*2.0f/ACC);
                        s = (float)Math.sin(a*M_PI*2.0f/ACC);
                        dx = center_O[j][0] - center_O[k][0];
                        dy = center_O[j][1] - center_O[k][1];
                        ln = (float)Math.sqrt(dx*dx+dy*dy);
                        dx = dx/ln;
                        dy = dy/ln;
                        char_O[i][(int) a][0] = center_O[i][0] + width_O[i] * dy * c;
                        char_O[i][(int) a][1] = center_O[i][1] - width_O[i] * dx * c;
                        char_O[i][(int) a][2] = (s<-THLD?-THLD:(s>THLD?THLD:s));
                    }
            }
        for (i=0;i<ACC;i++)
            {
                j = (i+1)%ACC;
                k = (i-1+ACC)%ACC;
                for (l=0;l<ACC4;l++)
                    {
                        m = (l+1)%ACC4;
                        n = (l+ACC4-1)%ACC4;
                        dx1 = char_O[m][i][0] - char_O[n][i][0];
                        dy1 = char_O[m][i][1] - char_O[n][i][1];
                        dz1 = char_O[m][i][2] - char_O[n][i][2];
                        dx2 = char_O[l][k][0] - char_O[l][j][0];
                        dy2 = char_O[l][k][1] - char_O[l][j][1];
                        dz2 = char_O[l][k][2] - char_O[l][j][2];
                        normal_O[l][i][0] = dy2*dz1 - dy1*dz2;
                        normal_O[l][i][1] = dz2*dx1 - dz1*dx2;
                        normal_O[l][i][2] = dx2*dy1 - dx1*dy2;
                    }
            }
    }

    void def_P() {
        float a, s, c, ln;
        int i,j,k,l,m,n;
        float dx, dy;
        float dx1, dx2, dy1, dy2, dz1, dz2;
        float center_P[][];
        float width_P[];

        center_P=new float[ACC2][3];
        width_P=new float[ACC2];


        for (i=0;i<ACC2;i++)
            {
                a = 2.0f*((float) i)*M_PI/ACC2;
                s = 1+(float)Math.sin(a);
                c = (float)Math.cos(a);
                center_P[i][0] = c*2.15f;
                center_P[i][1] = s*2.1f + (s<-1.01f?-0.7f:(s>1.01f?0.7f:0)) + 0.7f;
                center_P[i][2] = 0.0f;
                width_P[i] = 0.5f;
            }

        for (i=0;i<ACC2;i++)
            {
                j = (i+1)%ACC2;
                k = (i+ACC2-1)%ACC2;
                for (a=0;a<ACC;a++)
                    {
                        accCOS[(int) a] = c = (float)Math.cos(a*M_PI*2.0f/ACC);
                        accSIN[(int) a] = s = (float)Math.sin(a*M_PI*2.0f/ACC);
                        dx = center_P[j][0] - center_P[k][0];
                        dy = center_P[j][1] - center_P[k][1];
                        ln = (float)Math.sqrt(dx*dx+dy*dy);
                        dx = dx/ln;
                        dy = dy/ln;
                        char_P[i][(int) a][0] = center_P[i][0] + width_P[i] * dy * c;
                        char_P[i][(int) a][1] = center_P[i][1] - width_P[i] * dx * c;
                        char_P[i][(int) a][2] = (s<-THLD?-THLD:(s>THLD?THLD:s));
                    }
            }
        for (i=0;i<ACC;i++)
            {
                j = (i+1)%ACC;
                k = (i-1+ACC)%ACC;
                for (l=0;l<ACC2;l++)
                    {
                        m = (l+1)%ACC2;
                        n = (l+ACC2-1)%ACC2;
                        dx1 = char_P[m][i][0] - char_P[n][i][0];
                        dy1 = char_P[m][i][1] - char_P[n][i][1];
                        dz1 = char_P[m][i][2] - char_P[n][i][2];
                        dx2 = char_P[l][k][0] - char_P[l][j][0];
                        dy2 = char_P[l][k][1] - char_P[l][j][1];
                        dz2 = char_P[l][k][2] - char_P[l][j][2];
                        normal_P[l][i][0] = dy2*dz1 - dy1*dz2;
                        normal_P[l][i][1] = dz2*dx1 - dz1*dx2;
                        normal_P[l][i][2] = dx2*dy1 - dx1*dy2;
                    }
            }
    }

    void def_El() {
        float a, s, c, ln;
        int i,j,k,l,m,n;
        float dx, dy;
        float dx1, dx2, dy1, dy2, dz1, dz2;
        float center_El[][];
        float width_El[];

        center_El=new float[ACC3+3][3];
        width_El=new float[ACC3+3];

        for (i=0;i<ACC3+1;i++)
            {
                /* a = (ACC3/24 + i*11/12)*M_PI*2.0f/ACC3; */
                a = (ACC3/8 + ((float) i)*3/4)*M_PI*2.0f/ACC3;
                s = 1+(float)Math.sin(a);
                c = (float)Math.cos(a);
                center_El[i][0] = c*18.0f;
                center_El[i][1] = s*9.3f;
                center_El[i][2] = 0.0f;
                width_El[i] = (float)Math.pow(3.5, Math.sin(i*M_PI/ACC3))-0.6f;
            }

        for (i=0;i<ACC3+1;i++)
            {
                j = (i+1)%ACC3;
                k = (i+ACC3-1)%ACC3;
                for (a=0;a<ACC;a++)
                    {
                        c = (float)Math.cos(a*M_PI*2.0f/ACC);
                        s = (float)Math.sin(a*M_PI*2.0f/ACC);
                        dx = center_El[j][0] - center_El[k][0];
                        dy = center_El[j][1] - center_El[k][1];
                        ln = (float)Math.sqrt(dx*dx+dy*dy);
                        dx = dx/ln;
                        dy = dy/ln;
                        char_El[i][(int) a][0] = center_El[i][0] + width_El[i] * dy * c;
                        char_El[i][(int) a][1] = center_El[i][1] - width_El[i] * dx * c;
                        char_El[i][(int) a][2] = (s<-THLD2?-THLD2:(s>THLD2?THLD2:s));
                    }
            }
        for (i=0;i<ACC+1;i++)
            {
                j = (i+1)%ACC;
                k = (i-1+ACC)%ACC;
                for (l=0;l<ACC3;l++)
                    {
                        m = (l+1)%ACC3;
                        n = (l+ACC3-1)%ACC3;
                        dx1 = char_El[m][i][0] - char_El[n][i][0];
                        dy1 = char_El[m][i][1] - char_El[n][i][1];
                        dz1 = char_El[m][i][2] - char_El[n][i][2];
                        dx2 = char_El[l][k][0] - char_El[l][j][0];
                        dy2 = char_El[l][k][1] - char_El[l][j][1];
                        dz2 = char_El[l][k][2] - char_El[l][j][2];
                        normal_El[l][i][0] = dy2*dz1 - dy1*dz2;
                        normal_El[l][i][1] = dz2*dx1 - dz1*dx2;
                        normal_El[l][i][2] = dx2*dy1 - dx1*dy2;
                    }
            }
    }

    void def_G() {
        float a, s, c, ln;
        int i,j,k,l,m,n;
        float dx, dy;
        float dx1, dx2, dy1, dy2, dz1, dz2;
        float center_G[][];
        float width_G[];

        center_G=new float[ACC4][3];
        width_G=new float[ACC4];

        for (i=0;i<ACC4;i++)
            {
                a = 2.0f*((float) i)*M_PI/ACC4;
                s = 1+(float)Math.sin(a);
                c = (float)Math.cos(a);
                center_G[i][0] = c*3.8f;
                center_G[i][1] = s*3.8f+(s<-1.01f?-0.8f:(s>1.01f?0.8f:0)) + 0.8f;
                center_G[i][2] = 0.0f;
                width_G[i] = 0.9f;
                if (i>ACC4*3/4)
                    width_G[i] = 0.9f - ((i-ACC4*3/4)*0.9f)/ACC;
            }
        for (i=0;i<ACC4;i++)
            {
                j = (i+1)%ACC4;
                k = (i+ACC4-1)%ACC4;
                for (a=0;a<ACC;a++)
                    {
                        c = (float)Math.cos(a*M_PI*2.0f/ACC);
                        s = (float)Math.sin(a*M_PI*2.0f/ACC);
                        dx = center_G[j][0] - center_G[k][0];
                        dy = center_G[j][1] - center_G[k][1];
                        ln = (float)Math.sqrt(dx*dx+dy*dy);
                        dx = dx/ln;
                        dy = dy/ln;
                        char_G[i][(int) a][0] = center_G[i][0] + width_G[i] * dy * c;
                        char_G[i][(int) a][1] = center_G[i][1] - width_G[i] * dx * c;
                        char_G[i][(int) a][2] = (s<-THLD?-THLD:(s>THLD?THLD:s));
                    }
            }
        for (i=0;i<ACC;i++)
            {
                j = (i+1)%ACC;
                k = (i-1+ACC)%ACC;
                for (l=0;l<ACC4;l++)
                    {
                        m = (l+1)%ACC4;
                        n = (l+ACC4-1)%ACC4;
                        dx1 = char_G[m][i][0] - char_G[n][i][0];
                        dy1 = char_G[m][i][1] - char_G[n][i][1];
                        dz1 = char_G[m][i][2] - char_G[n][i][2];
                        dx2 = char_G[l][k][0] - char_G[l][j][0];
                        dy2 = char_G[l][k][1] - char_G[l][j][1];
                        dz2 = char_G[l][k][2] - char_G[l][j][2];
                        normal_G[l][i][0] = dy2*dz1 - dy1*dz2;
                        normal_G[l][i][1] = dz2*dx1 - dz1*dx2;
                        normal_G[l][i][2] = dx2*dy1 - dx1*dy2;
                    }
            }
    }

    void randomize() {
        int i;
        for (i=0;i<7;i++)
            {
                TRANS[i][0] = rnd(100)-rnd(100);
                TRANS[i][1] = rnd(100)-rnd(100);
                TRANS[i][1] = rnd(100)-rnd(100);
                ROTAXIS[i][0] = rnd(100)-rnd(100);
                ROTAXIS[i][1] = rnd(100)-rnd(100);
                ROTAXIS[i][1] = rnd(100)-rnd(100);
                ROT[i]=rnd(3600)-rnd(3600);
            }
    }

    void def_logo() {
        def_O();
        def_P();
        def_El();
        def_G();
    }

    void draw_O() {
        int i,j,k;
        for (i=0;i<ACC;i++)
            {
                k = i+1;
                if (k>=ACC)
                    k = 0;
                gl.glBegin(GL_QUAD_STRIP);
                for (j=0;j<ACC4;j++)
                    {
                        gl.glNormal3f(normal_O[j][k][0], normal_O[j][k][1], normal_O[j][k][2]);
                        gl.glVertex3f(char_O[j][k][0], char_O[j][k][1], char_O[j][k][2]);
                        gl.glNormal3f(normal_O[j][i][0], normal_O[j][i][1], normal_O[j][i][2]);
                        gl.glVertex3f(char_O[j][i][0], char_O[j][i][1], char_O[j][i][2]);
                    }
                gl.glNormal3f(normal_O[0][k][0], normal_O[0][k][1], normal_O[0][k][2]);
                gl.glVertex3f(char_O[0][k][0], char_O[0][k][1], char_O[0][k][2]);
                gl.glNormal3f(normal_O[0][i][0], normal_O[0][i][1], normal_O[0][i][2]);
                gl.glVertex3f(char_O[0][i][0], char_O[0][i][1], char_O[0][i][2]);
                gl.glEnd();
            }
    }

    void draw_P() {
        int i,j,k;
        for (i=0;i<ACC;i++)
            {
                k = i+1;
                if (k>=ACC)
                    k = 0;
                gl.glBegin(GL_QUAD_STRIP);
                for (j=0;j<ACC2;j++)
                    {
                        gl.glNormal3f(normal_P[j][k][0], normal_P[j][k][1], normal_P[j][k][2]);
                        gl.glVertex3f(char_P[j][k][0], char_P[j][k][1], char_P[j][k][2]);
                        gl.glNormal3f(normal_P[j][i][0], normal_P[j][i][1], normal_P[j][i][2]);
                        gl.glVertex3f(char_P[j][i][0], char_P[j][i][1], char_P[j][i][2]);
                    }
                gl.glNormal3f(normal_P[0][k][0], normal_P[0][k][1], normal_P[0][k][2]);
                gl.glVertex3f(char_P[0][k][0], char_P[0][k][1], char_P[0][k][2]);
                gl.glNormal3f(normal_P[0][i][0], normal_P[0][i][1], normal_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0], char_P[0][i][1], char_P[0][i][2]);
                gl.glEnd();
            }
        j = 0;
        gl.glBegin(GL_QUAD_STRIP);
        for (i=0;i<ACC;i++)
            {
                gl.glNormal3f(normal_P[0][i][0], normal_P[0][i][1], normal_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0]-4.3f, -1.6f, 1.0f*char_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0]-4.3f, 6.0f, 1.0f*char_P[0][i][2]);
            }
        gl.glNormal3f(normal_P[0][0][0], normal_P[0][0][1], normal_P[0][0][2]);
        gl.glVertex3f(char_P[0][0][0]-4.3f, -1.6f, 1.0f*char_P[0][0][2]);
        gl.glVertex3f(char_P[0][0][0]-4.3f, 6.0f, 1.0f*char_P[0][0][2]);
        gl.glEnd();
    }

    void draw_E() {
        int i,j,k;
        for (i=0;i<ACC;i++)
            {
                k = i+1;
                if (k>=ACC)
                    k = 0;
                gl.glBegin(GL_QUAD_STRIP);
                gl.glNormal3f(normal_P[0][k][0], normal_P[0][k][1], normal_P[0][k][2]);
                gl.glVertex3f(char_P[0][k][0], char_P[0][k][1]+0.0f, char_P[0][k][2]);
                gl.glNormal3f(normal_P[0][i][0], normal_P[0][i][1], normal_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0], char_P[0][i][1]+0.0f, char_P[0][i][2]);
                for (j=1;j<ACC2;j++)
                    {
                        gl.glNormal3f(normal_P[j][k][0], normal_P[j][k][1], normal_P[j][k][2]);
                        gl.glVertex3f(char_P[j][k][0], char_P[j][k][1], char_P[j][k][2]);
                        gl.glNormal3f(normal_P[j][i][0], normal_P[j][i][1], normal_P[j][i][2]);
                        gl.glVertex3f(char_P[j][i][0], char_P[j][i][1], char_P[j][i][2]);
                    }
                gl.glNormal3f(normal_P[0][k][0], normal_P[0][k][1], normal_P[0][k][2]);
                gl.glVertex3f(char_P[0][k][0], char_P[0][k][1]-0.4f, char_P[0][k][2]);
                gl.glNormal3f(normal_P[0][i][0], normal_P[0][i][1], normal_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0], char_P[0][i][1]-0.4f, char_P[0][i][2]);
                gl.glEnd();
            }

        gl.glBegin(GL_QUAD_STRIP);
        j = ACC2*3/4;
        for (i=0;i<ACC;i++)
            {
                gl.glNormal3f(normal_P[j][i][0], normal_P[j][i][1], normal_P[j][i][2]);
                gl.glVertex3f(-2.0f, char_P[j][i][1]+2.55f, 1.0f*char_P[j][i][2]);
                gl.glVertex3f(2.0f,  char_P[j][i][1]+2.55f, 1.0f*char_P[j][i][2]);
            }
        gl.glNormal3f(normal_P[j][0][0], normal_P[j][0][1], normal_P[j][0][2]);
        gl.glVertex3f(-2.0f, char_P[j][0][1]+2.55f, 1.0f*char_P[j][0][2]);
        gl.glVertex3f(2.0f,  char_P[j][0][1]+2.55f, 1.0f*char_P[j][0][2]);
        gl.glEnd();
    }

    void draw_El() {
        int i,j,k;
        for (i=0;i<ACC;i++)
            {
                k = i+1;
                if (k>=ACC)
                    k = 0;
                gl.glBegin(GL_QUAD_STRIP);
                for (j=0;j<=ACC3;j++)
                    {
                        gl.glNormal3f(normal_El[j][k][0], normal_El[j][k][1], normal_El[j][k][2]);
                        gl.glVertex3f(char_El[j][k][0], char_El[j][k][1], char_El[j][k][2]);
                        gl.glNormal3f(normal_El[j][i][0], normal_El[j][i][1], normal_El[j][i][2]);
                        gl.glVertex3f(char_El[j][i][0], char_El[j][i][1], char_El[j][i][2]);
                    }
                gl.glEnd();
            }
    }

    void draw_N() {
        int i,j,k;
        for (i=0;i<ACC;i++)
            {
                k = i+1;
                if (k>=ACC)
                    k = 0;
                gl.glBegin(GL_QUAD_STRIP);
                for (j=0;j<=ACC2/2;j++)
                    {
                        gl.glNormal3f(normal_P[j][k][0], normal_P[j][k][1], normal_P[j][k][2]);
                        gl.glVertex3f(char_P[j][k][0], char_P[j][k][1], char_P[j][k][2]);
                        gl.glNormal3f(normal_P[j][i][0], normal_P[j][i][1], normal_P[j][i][2]);
                        gl.glVertex3f(char_P[j][i][0], char_P[j][i][1], char_P[j][i][2]);
                    }
                gl.glEnd();
            }

        j = 0;
        gl.glBegin(GL_QUAD_STRIP);
        for (i=0;i<ACC;i++)
            {
                gl.glNormal3f(normal_P[0][i][0], normal_P[0][i][1], normal_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0]-4.3f, 0.2f, 1.0f*char_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0]-4.3f, 6.0f, 1.0f*char_P[0][i][2]);
            }
        gl.glNormal3f(normal_P[0][0][0], normal_P[0][0][1], normal_P[0][0][2]);
        gl.glVertex3f(char_P[0][0][0]-4.3f, 0.2f, 1.0f*char_P[0][0][2]);
        gl.glVertex3f(char_P[0][0][0]-4.3f, 6.0f, 1.0f*char_P[0][0][2]);
        gl.glEnd();
        j = 0;

        gl.glBegin(GL_QUAD_STRIP);
        for (i=0;i<ACC;i++)
            {
                gl.glNormal3f(normal_P[0][i][0], normal_P[0][i][1], normal_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0], 0.2f, 1.0f*char_P[0][i][2]);
                gl.glVertex3f(char_P[0][i][0], 3.4f, 1.0f*char_P[0][i][2]);
            }
        gl.glNormal3f(normal_P[0][0][0], normal_P[0][0][1], normal_P[0][0][2]);
        gl.glVertex3f(char_P[0][0][0], 0.2f, 1.0f*char_P[0][0][2]);
        gl.glVertex3f(char_P[0][0][0], 3.4f, 1.0f*char_P[0][0][2]);
        gl.glEnd();
    }

    void draw_G() {
        int i,j,k;
        for (i=0;i<ACC;i++)
            {
                k = i+1;
                if (k>=ACC)
                    k = 0;
                gl.glBegin(GL_QUAD_STRIP);
                gl.glNormal3f(normal_G[0][k][0], normal_G[0][k][1], normal_G[0][k][2]);
                gl.glVertex3f(char_G[0][k][0], char_G[0][k][1]+1.2f, char_G[0][k][2]);
                gl.glNormal3f(normal_G[0][i][0], normal_G[0][i][1], normal_G[0][i][2]);
                gl.glVertex3f(char_G[0][i][0], char_G[0][i][1]+1.2f, char_G[0][i][2]);
                for (j=1;j<ACC4;j++)
                    {
                        gl.glNormal3f(normal_G[j][k][0], normal_G[j][k][1], normal_G[j][k][2]);
                        gl.glVertex3f(char_G[j][k][0], char_G[j][k][1], char_G[j][k][2]);
                        gl.glNormal3f(normal_G[j][i][0], normal_G[j][i][1], normal_G[j][i][2]);
                        gl.glVertex3f(char_G[j][i][0], char_G[j][i][1], char_G[j][i][2]);
                    }
                gl.glEnd();
            }

        gl.glBegin(GL_QUAD_STRIP);
        j = ACC4*3/4;
        for (i=0;i<ACC;i++)
            {
                gl.glNormal3f(accSIN[i], 0.0f, accCOS[i] );
                gl.glVertex3f(4.0f+0.9f*accSIN[i], 4.0f+0.9f*accSIN[i], 0.9f*accCOS[i] );
                gl.glVertex3f(4.0f+0.9f*accSIN[i], 0.0f, 0.9f*accCOS[i]);
            }
        gl.glNormal3f(accSIN[0], 0.0f, accCOS[0] );
        gl.glVertex3f(4.0f+0.9f*accSIN[0], 4.0f+0.9f*accSIN[0], 0.9f*accCOS[0] );
        gl.glVertex3f(4.0f+0.9f*accSIN[0], 0.0f, 0.9f*accCOS[0]);
        gl.glEnd();

        gl.glBegin(GL_QUAD_STRIP);
        j = ACC4*3/4;
        for (i=0;i<ACC;i++)
            {
                gl.glNormal3f(0.0f, accSIN[i], accCOS[i] );
                gl.glVertex3f(4.0f-0.9f*accSIN[i], 4.0f-0.9f*accSIN[i], 0.9f*accCOS[i] );
                gl.glVertex3f(0.0f, 4.0f-0.9f*accSIN[i], 0.9f*accCOS[i]);
            }
        gl.glNormal3f(0.0f, accSIN[0], accCOS[0] );
        gl.glVertex3f(4.0f-0.9f*accSIN[0], 4.0f-0.9f*accSIN[0], 0.9f*accCOS[0] );
        gl.glVertex3f(0.0f, 4.0f-0.9f*accSIN[0], 0.9f*accCOS[0]);
        gl.glEnd();

        j = ACC4*3/4;
        gl.glBegin(GL_TRIANGLE_FAN);
        gl.glNormal3f(-1.0f, 0.0f, 0.0f);
        gl.glVertex3f(0.0f, 4.0f, 0.0f);
        for (i=0;i<ACC;i++)
            gl.glVertex3f(0.0f, 4.0f+0.9f*accSIN[i], 0.9f*accCOS[i]);
        gl.glVertex3f(0.0f, 4.0f+0.9f*accSIN[0], 0.9f*accCOS[0]);
        gl.glEnd();
    }

    void draw_L() {
        int i;

        gl.glBegin(GL_QUAD_STRIP);
        for (i=0;i<ACC;i++)
            {
                gl.glNormal3f(accSIN[i], 0.0f, accCOS[i] );
                gl.glVertex3f(0.9f*accSIN[i], 9.6f, 0.9f*accCOS[i]);
                gl.glVertex3f(0.9f*accSIN[i], 0.9f+0.9f*accSIN[i], 0.9f*accCOS[i] );
            }
        gl.glNormal3f(accSIN[0], 0.0f, accCOS[0] );
        gl.glVertex3f(0.9f*accSIN[0], 9.6f, 0.9f*accCOS[0]);
        gl.glVertex3f(0.9f*accSIN[0], 0.9f+0.9f*accSIN[0], 0.9f*accCOS[0] );
        gl.glEnd();

        gl.glBegin(GL_QUAD_STRIP);
        for (i=0;i<ACC;i++)
            {
                gl.glNormal3f(0.0f, accSIN[i], accCOS[i] );
                gl.glVertex3f(0.9f*accSIN[i], 0.9f+0.9f*accSIN[i], 0.9f*accCOS[i] );
                gl.glVertex3f(5.6f, 0.9f+0.9f*accSIN[i], 0.9f*accCOS[i]);
            }
        gl.glNormal3f(0.0f, accSIN[0], accCOS[0] );
        gl.glVertex3f(0.9f*accSIN[0], 0.9f+0.9f*accSIN[0], 0.9f*accCOS[0] );
        gl.glVertex3f(5.6f, 0.9f+0.9f*accSIN[0], 0.9f*accCOS[0]);
        gl.glEnd();

        gl.glBegin(GL_TRIANGLE_FAN);
        gl.glNormal3f(1.0f, 0.0f, 0.0f);
        gl.glVertex3f(5.6f, 0.9f, 0.0f);
        for (i=ACC-1;i>=0;i--)
            gl.glVertex3f(5.6f, 0.9f+0.9f*accSIN[i], 0.9f*accCOS[i]);
        gl.glVertex3f(5.6f, 0.9f+0.9f*accSIN[ACC-1], 0.9f*accCOS[ACC-1]);
        gl.glEnd();
    }

    void draw_part(int i) {
        gl.glPushMatrix();
        gl.glTranslatef(TRANS[i][0]*progress, TRANS[i][1]*progress, TRANS[i][2]*progress);
        gl.glRotatef(ROT[i]*progress, ROTAXIS[i][0], ROTAXIS[i][1], ROTAXIS[i][2]);
        switch(i)
            {
            case 0: draw_El(); break;
            case 1: draw_O(); break;
            case 2: draw_P(); break;
            case 3: draw_E(); break;
            case 4: draw_N(); break;
            case 5: draw_G(); break;
            case 6: draw_L(); break;
            }
        gl.glPopMatrix();
    }

    void draw_logo() {
        groen_texture();
        gl.glEnable(GL_CULL_FACE);
        gl.glTranslatef(-2.8f, 0.0f, 0.0f);

        draw_part(0);
        gl.glTranslatef(-12.0f, 4.3f, 0.0f);
        draw_part(1);
        gl.glTranslatef(7.3f, 0.0f, 0.0f);
        draw_part(2);
        gl.glTranslatef(5.4f, 0.0f, 0.0f);
        draw_part(3);
        gl.glTranslatef(5.4f, 0.0f, 0.0f);
        draw_part(4);
        gl.glTranslatef(7.4f, 0.0f, 0.0f);
        draw_part(5);
        gl.glTranslatef(6.8f, 0.0f, 0.0f);
        draw_part(6);
    }

    void go() {
        GLCapabilities caps = new GLCapabilities();
	/*
        caps.setDoubleBuffered(true);
        caps.setTrueColor(true);
        caps.setStereo(false);
        caps.setDepthBits(32);
        caps.setRedBits(5);
        caps.setGreenBits(5);
        caps.setBlueBits(5);
	*/
        GLAnimCanvas canvas =
            GLDrawableFactory.getFactory().createGLAnimCanvas(caps, 400, 400);
        if (canvas == null) {
            throw new RuntimeException("Unable to match required GLCapabilities");
        }
        canvas.addGLEventListener(this);
        canvas.start();
        Frame frame = new Frame();
        frame.add(canvas);
        frame.setSize(400, 400);
        frame.pack();
        frame.show();
    }

    public static void main(String[] args) {
		GLContext.gljNativeDebug = true;
		GLContext.gljThreadDebug = false;
		GLContext.gljClassDebug = true;

        new TestListener().go();
    }
}
