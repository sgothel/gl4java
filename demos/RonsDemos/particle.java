/**
 * @(#) particle.java
 * @(#) author: Nate Robins (converted to Java by Ron Cemer)
 */

/* 
    particle
    Nate Robins, 1997

    An example of a simple particle system.
 */

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.util.*;
import gl4java.GLContext;
import gl4java.awt.GLAnimCanvas;
import gl4java.applet.SimpleGLAnimApplet1;

public class particle extends SimpleGLAnimApplet1
{
    private static final int PS_WATERFALL = 0, PS_FOUNTAIN = 1;
    private static Random random = null;

        /* Initialize the applet */


	public void init()
	{
	super.init();
        Dimension d = getSize();
        canvas = new particleCanvas(d.width, d.height);
        add("Center", canvas);
	canvas.requestFocus();
        random = new Random(System.currentTimeMillis());
	}


    private class PSsphere
    {
        protected float x, y, z;
        protected float radius, radiussquared;

        public PSsphere(float x, float y, float z, float radius)
        {
            this.x = x;
            this.y = y;
            this.z = z;
            this.radius = radius;
            radiussquared = radius*radius;
        }
    }

    private class PSparticle
    {
        private final float PS_GRAVITY = -9.8f;

        protected float position[] = new float[3];  /* current position */
        protected float previous[] = new float[3];  /* previous position */
        protected float velocity[] = new float[3];  /* velocity (magnitude & direction) */
        protected float dampening = 0.0f;           /* % of energy lost on collision */
        protected boolean alive = false;            /* is this particle alive? */

        public PSparticle()
        {
            velocity[0] = previous[0] = position[0] = 0.0f;
            velocity[1] = previous[1] = position[1] = 0.0f;
            velocity[2] = previous[2] = position[2] = 0.0f;
            dampening = 0.0f;
            alive = false;
        }

        public PSparticle(float dt, int type)
        {
            if (type == PS_WATERFALL)
            {
                velocity[0] = (random.nextFloat()-0.5f);
                velocity[1] = 0.0f;
                velocity[2] = 0.5f*random.nextFloat();
                position[0] = 0.0f;
                position[1] = 2.0f;
                position[2] = 0.0f;
                dampening = 0.45f*random.nextFloat();
            }
            else if (type == PS_FOUNTAIN)
            {
                velocity[0] = 2.0f*(random.nextFloat()-0.5f);
                velocity[1] = 6.0f;
                velocity[2] = 2.0f*(random.nextFloat()-0.5f);
                position[0] = 0.0f;
                position[1] = 0.0f;
                position[2] = 0.0f;
                dampening = 0.35f*random.nextFloat();
            }
            previous[0] = position[0];
            previous[1] = position[1];
            previous[2] = position[2];
            alive = true;
            psTimeStep(2.0f*dt*random.nextFloat());
        }

        public void psTimeStep(float dt)
        {
            if (!alive) return;

            velocity[1] += PS_GRAVITY*dt;
            
            previous[0] = position[0];
            previous[1] = position[1];
            previous[2] = position[2];
            
            position[0] += velocity[0]*dt;
            position[1] += velocity[1]*dt;
            position[2] += velocity[2]*dt;
        }

            /* psBounce: the particle has gone past (or exactly hit) the
               ground plane, so calculate the time at which the particle
               actually intersected the ground plane (s).  essentially, this
               just rolls back time to when the particle hit the ground plane,
               then starts time again from then.
            
               -  -   o A  (previous position)
               |  |    \
               |  s     \   o  (position it _should_ be at) -
               t  |      \ /                                | t - s 
               |  - ------X--------                         -
               |           \
               -            o B  (new position)
                           
               A + V*s = 0 or s = -A/V
            
               to calculate where the particle should be:
            
               A + V*t + V*(t-s)*d
            
               where d is a damping factor which accounts for the loss
               of energy due to the bounce. */
        public void psBounce(float dt)
        {
            if (!alive) return;

                /* since we know it is the ground plane, we only need to
                   calculate s for a single dimension. */
            float s = -previous[1]/velocity[1];

            position[0] =
                (previous[0] + velocity[0]*s + velocity[0]*(dt-s)*dampening);
            position[1] =
                -velocity[1] * (dt-s) * dampening; /* reflect */
            position[2] =
                (previous[2] + velocity[2]*s + velocity[2]*(dt-s)*dampening);

                /* damp the reflected velocity (since the particle hit
                   something, it lost some energy) */
            velocity[0] *=  dampening;
            velocity[1] *= -dampening;        /* reflect */
            velocity[2] *=  dampening;
        }

        public void psCollide(PSsphere sphere)
        {
            if (!alive) return;

            float vx = position[0] - sphere.x;
            float vy = position[1] - sphere.y;
            float vz = position[2] - sphere.z;
            float distance, distancesquared;

                // Use distancesquared and radiussquared for comparison,
                // eliminating the sqrt() call unless it is absolutely
                // necessary, since it is time-consuming.
            distancesquared = (vx*vx + vy*vy + vz*vz);
            if (distancesquared < sphere.radiussquared)
            {
                distance = (float)Math.sqrt(distancesquared);
                position[0] = sphere.x+(vx/distance)*sphere.radius;
                position[1] = sphere.y+(vy/distance)*sphere.radius;
                position[2] = sphere.z+(vz/distance)*sphere.radius;
                previous[0] = position[0];
                previous[1] = position[1];
                previous[2] = position[2];
                velocity[0] = vx/distance;
                velocity[1] = vy/distance;
                velocity[2] = vz/distance;
            }
        }
    }


        /* Local GLAnimCanvas extension class */


    private class particleCanvas extends GLAnimCanvas
        implements MouseListener, MouseMotionListener, KeyListener
    {
        private static final float M_PI = 3.14159265359f;

        private MatrixFuncs mtxfuncs = null;
        private int prevMouseX, prevMouseY;
        private boolean mouseRButtonDown = false;
        private float rot_matrix[] =
        {
            1.0f, 0.0f, 0.0f, 0.0f,
            0.0f, 1.0f, 0.0f, 0.0f,
            0.0f, 0.0f, 1.0f, 0.0f,
            0.0f, 0.0f, 0.0f, 1.0f
        };

        private PSparticle[] particles = null;
        private PSsphere sphere = new PSsphere(0.0f,1.0f,0.0f,0.25f);
        private int num_particles = 5000;
        private int living = 0;      /* index to end of live particles */
        private int type = PS_WATERFALL;
        private boolean use_lines = false;
        private boolean do_sphere = false;
        private float flow = 500.0f;
        private float slow_down = 1.0f;
        private int point_size = 3;
        private int sphere_list = 0;

        public particleCanvas(int w, int h)
        {
            super(w, h);
            GLContext.gljNativeDebug = false;
            GLContext.gljClassDebug = false;
            setAnimateFps(30.0);

            mtxfuncs = new MatrixFuncs();
        }
    
        public void preInit()
        {
            doubleBuffer = true;
            stereoView = false;
        }
    
        public void init()
        {
            System.out.println("init(): " + this);
            reshape(getSize().width, getSize().height);

            setInitialRotation();

            particles = new PSparticle[num_particles];
            for (int i = 0; i < num_particles; i++)
                particles[i] = new PSparticle();

            sphere_list = gl.glGenLists(1);
            gl.glNewList(sphere_list,GL_COMPILE);
            gl.glColor3ub((byte)0, (byte)255, (byte)128);
            long qobj = glu.gluNewQuadric();
            glu.gluQuadricOrientation(qobj,GLU_OUTSIDE);
            glu.gluQuadricNormals(qobj,GLU_SMOOTH);
            glu.gluQuadricTexture(qobj,false);
            glu.gluSphere(qobj,sphere.radius, 16, 16);
            glu.gluDeleteQuadric(qobj);
            gl.glEndList();

            glj.gljCheckGL();

            addMouseListener(this);
            addMouseMotionListener(this);
            addKeyListener(this);
        }
    
        public void doCleanup()
        {
            System.out.println("destroy(): " + this);
            removeMouseListener(this);
            removeMouseMotionListener(this);
            removeKeyListener(this);
        }
    
        public void reshape(int width, int height)
        {
            gl.glViewport(0,0,width,height);

            float black[] = { 0, 0, 0, 0 };
            
            gl.glMatrixMode(GL_PROJECTION);
            gl.glLoadIdentity();
            glu.gluPerspective(60, 1, 0.1, 1000);
            gl.glMatrixMode(GL_MODELVIEW);
            gl.glLoadIdentity();
            glu.gluLookAt(0, 1, 3, 0, 1, 0, 0, 1, 0);
            gl.glFogfv(GL_FOG_COLOR, black);
            gl.glFogf(GL_FOG_START, 2.5f);
            gl.glFogf(GL_FOG_END, 4f);
            gl.glEnable(GL_FOG);
            gl.glFogi(GL_FOG_MODE, GL_LINEAR);
            gl.glPointSize(point_size);
            gl.glEnable(GL_POINT_SMOOTH);
            gl.glEnable(GL_BLEND);
            gl.glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            gl.glEnable(GL_COLOR_MATERIAL);
            gl.glEnable(GL_DEPTH_TEST);
            gl.glEnable(GL_LIGHT0);
            
            timedelta();
        }

        public void display()
        {
            if (glj.gljMakeCurrent() == false) return;

            gl.glPushMatrix();
            gl.glMultMatrixf(rot_matrix);

                // Update particles.

            float dt = timedelta();
            float truedt = dt;

                /* slow the simulation if we can't keep the frame rate up
                   around 10 fps */
            if (dt > 0.1f)
                slow_down = 0.75f;
            else if (dt < 0.1f)
                slow_down = 1.0f;
            dt *= slow_down;

                /* resurrect a few particles */
            for (int i = 0; i < flow*dt; i++)
            {
                particles[living] = new PSparticle(dt,type);
                living++;
                if (living >= num_particles) living = 0;
            }

            for (int i = 0; i < num_particles; i++)
            {
                particles[i].psTimeStep(dt);
                    /* collision with sphere? */
                if (do_sphere) particles[i].psCollide(sphere);
                    /* collision with ground? */
                if (particles[i].position[1] <= 0.0f)
                    particles[i].psBounce(dt);
                    /* dead particle? */
                if (   (particles[i].position[1] < 0.1f)
                    && (Math.abs(particles[i].velocity[1]) < 0.2f)   )
                    particles[i].alive = false;
            }

                // Draw the scene.

            gl.glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
            
            gl.glEnable(GL_LIGHTING);
            if (do_sphere)
            {
                gl.glPushMatrix();
                gl.glTranslatef(sphere.x, sphere.y, sphere.z);
                gl.glCallList(sphere_list);
                gl.glPopMatrix();
            }
            gl.glDisable(GL_LIGHTING);
            
            gl.glColor3ub((byte)0, (byte)128, (byte)255);
            gl.glBegin(GL_QUADS);
            gl.glVertex3f(-2f, 0f, -2f);
            gl.glVertex3f(-2f, 0f, 2f);
            gl.glVertex3f(2f, 0f, 2f);
            gl.glVertex3f(2f, 0f, -2f);
            gl.glEnd();

            float r, g;
            if (!use_lines)
            {
                gl.glBegin(GL_POINTS);
                for (int i = 0; i < num_particles; i++)
                {
                    if (!particles[i].alive) continue;
                    r = particles[i].position[1]/2.1f*255f;
                    g = 128.0f+(r*0.5f);
                    gl.glColor3ub((byte)r, (byte)g, (byte)255);
                    gl.glVertex3fv(particles[i].position);
                }
                gl.glEnd();
            }
            else
            {
                gl.glBegin(GL_LINES);
                for (int i = 0; i < num_particles; i++)
                {
                    if (!particles[i].alive) continue;
                    r = particles[i].previous[1]/2.1f*255f;
                    g = 128.0f+(r*0.5f);
                    gl.glColor3ub((byte)r, (byte)g, (byte)255);
                    gl.glVertex3fv(particles[i].previous);
                    r = particles[i].position[1]/2.1f*255f;
                    g = 128.0f+(r*0.5f);
                    gl.glColor3ub((byte)r, (byte)g, (byte)255);
                    gl.glVertex3fv(particles[i].position);
                }
                gl.glEnd();
            }
            
            gl.glPopMatrix();

            glj.gljSwap();
            glj.gljCheckGL();
            glj.gljFree();
    
            //if (!isSuspended()) repaint();  // Animate at full speed.
        }

            /* timedelta: returns the number of seconds that have elapsed
               since the previous call to the function. */
        private long timedelta_prev = 0L;
        private float timedelta()
        {
            long current = System.currentTimeMillis();
            if (timedelta_prev == 0L) timedelta_prev = current;
            long delta = current-timedelta_prev;
            timedelta_prev = current;
            return ((float)delta) * 0.001f;
        }

            // Reset the rotation matrix to the default view.
        private void setInitialRotation()
        {
            for (int i = 0; i < 16; i++)
                rot_matrix[i] = ((i % 5) == 0) ? 1.0f : 0.0f;
        }

        private void fixRotationMatrix()
        {
                // Fix any problems with the rotation matrix.
            rot_matrix[3] =
                rot_matrix[7] =
                rot_matrix[11] =
                rot_matrix[12] =
                rot_matrix[13] =
                rot_matrix[14] = 0.0f;
            rot_matrix[15] = 1.0f;
            float fac;
            if ((fac = (float)Math.sqrt
                ((rot_matrix[0]*rot_matrix[0]) +
                 (rot_matrix[4]*rot_matrix[4]) +
                 (rot_matrix[8]*rot_matrix[8]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[0] *= fac;
                    rot_matrix[4] *= fac;
                    rot_matrix[8] *= fac;
                }
            }
            if ((fac = (float)Math.sqrt
                ((rot_matrix[1]*rot_matrix[1]) +
                 (rot_matrix[5]*rot_matrix[5]) +
                 (rot_matrix[9]*rot_matrix[9]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[1] *= fac;
                    rot_matrix[5] *= fac;
                    rot_matrix[9] *= fac;
                }
            }
            if ((fac = (float)Math.sqrt
                ((rot_matrix[2]*rot_matrix[2]) +
                 (rot_matrix[6]*rot_matrix[6]) +
                 (rot_matrix[10]*rot_matrix[10]))) != 1.0f)
            {
                if (fac != 0.0f)
                {
                    fac = 1.0f/fac;
                    rot_matrix[2] *= fac;
                    rot_matrix[6] *= fac;
                    rot_matrix[10] *= fac;
                }
            }
        }

        // Methods required for the implementation of MouseListener
        public void mouseEntered( MouseEvent evt )
        {
            Component comp = evt.getComponent();
	    if( comp.equals(this ) )
	    {
		requestFocus();
	    }
        }

        public void mouseClicked( MouseEvent evt )
        { 
            Component comp = evt.getComponent();
	    if( comp.equals(this ) )
	    {
		requestFocus();
	    }
	}
    
        public void mouseExited( MouseEvent evt )
        {
        }
    
        public void mousePressed( MouseEvent evt )
        {
            prevMouseX = evt.getX();
            prevMouseY = evt.getY();
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
            {
                mouseRButtonDown = true;
                evt.consume();
            }
        }
    
        public void mouseReleased( MouseEvent evt )
        {
            if ((evt.getModifiers() & evt.BUTTON3_MASK) != 0)
            {
                mouseRButtonDown = false;
                evt.consume();
            }
        }
    
        // Methods required for the implementation of MouseMotionListener
        public void mouseDragged( MouseEvent evt )
        {
            int x = evt.getX();
            int y = evt.getY();
            float thetaX = (float)(x-prevMouseX)*(360.0f/(float)getSize().width);
            float thetaY = (float)(prevMouseY-y)*(360.0f/(float)getSize().height);
            float mtxbuf[] = new float[16];
            float mtxbuf2[] = new float[16];
    
            prevMouseX = x;
            prevMouseY = y;
            if ( (thetaX != 0.0f) || (thetaY != 0.0f) )
            {
                mtxfuncs.rotateAroundY(((float)thetaX),mtxbuf);
                if (mouseRButtonDown)
                    mtxfuncs.rotateAroundZ(thetaY,mtxbuf2);
                else
                    mtxfuncs.rotateAroundX(-thetaY,mtxbuf2);
                mtxfuncs.multiplyMatrices(mtxbuf2,mtxbuf,mtxbuf);
                mtxfuncs.multiplyMatrices(rot_matrix,mtxbuf,rot_matrix);
                fixRotationMatrix();
            }
            evt.consume();
        }
    
        public void mouseMoved( MouseEvent evt )
        {
        }

        // Methods required for the implementation of KeyListener
        public void keyPressed(KeyEvent e)
        {
        }

        public void keyReleased(KeyEvent e)
        {
        }

        public void keyTyped(KeyEvent e)
        {
            if (glj.gljMakeCurrent() == false) return;
            switch ((char)e.getKeyChar())
            {
            case 'W':
            case 'w':
                type = PS_WATERFALL;
                break;
            case 'F':
            case 'f':
                type = PS_FOUNTAIN;
                break;
            case 'S':
            case 's':
                do_sphere = !do_sphere;
                break;
            case 'L':
            case 'l':
                use_lines = !use_lines;
                break;
            case 'P':
                point_size++;
                gl.glPointSize(point_size);
                break;
            case 'p':
                point_size--;
                if (point_size < 1) point_size = 1;
                gl.glPointSize(point_size);
                break;
            case '+':
                flow += 100;
                if (flow > num_particles) flow = num_particles;
                System.out.println(flow + " particles/second");
                break;
            case '-':
                flow -= 100;
                if (flow < 0) flow = 0;
                System.out.println(flow + " particles/second");
                break;
            case 'R':
            case 'r':
                setInitialRotation();
                break;
            }
            glj.gljFree();
        }
    }
}
