/*
*   VirtualSphere -- A class that implements the Virtual Sphere algorithm for 3D rotation.
*   
*   Copyright (C) 2001 by Joseph A. Huwaldt <jhuwaldt@gte.net>.
*   All rights reserved.
*   
*   This library is free software; you can redistribute it and/or
*   modify it under the terms of the GNU Library General Public
*   License as published by the Free Software Foundation; either
*   version 2 of the License, or (at your option) any later version.
*   
*   This library is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*   Library General Public License for more details.
**/

package jahuwaldt.gl;


import java.awt.*;


/**
*  Implements the Virtual Sphere algorithm for 3D rotation using a 2D input device.
*  See paper "A Study in Interactive 3-D Rotation Using 2-D Control Devices" by
*  Michael Chen, S. Joy Mountford and Abigail Sellen published in the ACM Siggraph '88
*  proceedings (Volume 22, Number 4, August 1988) for more detail.  The code here
*  provides a much simpler implementation than that described in the paper.
*  This is also known by as the "virtual track ball" or "cue ball" interface.
*
*  <p>  Ported from C to Java by Joseph A. Huwaldt, February 19, 2001  </p>
*  <p>  Original C version had the following comments:
*           Author: Michael Chen, Human Interface Group / ATG,
*           Copyright � 1991-1993 Apple Computer, Inc.  All rights reserved.
*           Part of Virtual Sphere Sample Code Release v1.1.
*  </p>
*
*  <p>  Modified by:  Joseph A.Huwaldt  </p>
*
*  @author:  Joseph A. Huwaldt   Date:  Feburary 19, 2001
*  @version  February 20, 2001
**/
public class VirtualSphere {

	// Some constants for convenience.
	private static final int X = 0;
	private static final int Y = 1;
	private static final int Z = 2;
	
	/**
	*  Storage for 3D point information passed between methods.
	**/
	private final float[] op = new float[3], oq = new float[3], a = new float[3];
	
	/**
	*  Calculate a rotation matrix based on the axis and angle of rotation
	*  from the last 2 locations of the mouse relative to the Virtual
	*  Sphere cue circle.
	*
	*  @param  pnt1       The 1st mouse location in the window.
	*  @param  pnt2       The 2nd mouse location in the window.
	*  @param  cueCenter  The center of the virtual sphere in the window.
	*  @param  cueRadius  The radius of the virtual sphere.
	*  @param  rotMatrix  Preallocated rotation matrix to be filled in
	*                     by this method.  Must have 16 floating point
	*                     elements.  This matrix will be overwritten by
	*                     this method.
	*  @return A reference to the input rotMatrix is returned with the elements filled in.
	**/
	public float[] makeRotationMtx(Point pnt1, Point pnt2, Point cueCenter, int cueRadius,
									float[] rotMatrix) {
	
		// Vectors op and oq are defined as class variables to avoid wastefull memory allocations.
		
		// Project mouse points to 3-D points on the +z hemisphere of a unit sphere.
		pointOnUnitSphere (pnt1, cueCenter, cueRadius, op);
		pointOnUnitSphere (pnt2, cueCenter, cueRadius, oq);
		
		/* Consider the two projected points as vectors from the center of the 
		*  unit sphere. Compute the rotation matrix that will transform vector
		*  op to oq.  */
		setRotationMatrix(rotMatrix, op, oq);
		
		return rotMatrix;
	}
	
	
	/**
	*  Draw a 2D representation of the virtual sphere to the specified graphics context.
	*  The representation includes a circle for the perimiter of the virtual sphere
	*  and a cross-hair indicating where the mouse pointer is over the virtual sphere.
	*
	*  @param gc         The graphics context to be drawn into.
	*  @param mousePnt   The location in window of the mouse.
	*  @param cueCenter  The location in the window of the center of the virtual sphere.
	*  @param cueRadius  The radius (in pixels) of the virtual sphere in the window.
	**/
	public void draw(Graphics gc, Point mousePnt, Point cueCenter, int cueRadius) {
		
    	// Draw the outline of the virtual sphere.
    	int x = cueCenter.x - cueRadius;
    	int y = cueCenter.y - cueRadius;
    	int diameter = 2*cueRadius;
    	gc.drawOval(x, y, diameter, diameter);
    		
		int mouseX = mousePnt.x - cueCenter.x;
		int mouseY = cueCenter.y - mousePnt.y;
		int mouseX2 = mouseX*mouseX;
		int mouseY2 = mouseY*mouseY;
		int cueRadius2 = cueRadius*cueRadius;
			
		// Draw the mouse cue if we are over the sphere.
		if (mouseX2 + mouseY2 < cueRadius2) {

			// Draw the vertical cue line.
			if (Math.abs(mouseX) > 4) {
				//	Draw a vertical elliptical arc through the mouse point.
				double a = Math.sqrt(mouseX2/(1 - mouseY2/(float)cueRadius2));
				double newMouseX = mouseX*cueRadius/a;
				int angle = (int)(Math.atan2(mouseY, newMouseX)*180/Math.PI);
				int width = (int)(2*a);
				int nx = cueCenter.x - (int)a;
				gc.drawArc(nx, y, width, diameter, angle - 10, 20);
			
			} else {
				//	Mouse X near zero is a special case, just draw a vertical line.
				float vy = mouseY/(float)cueRadius;
				float vy2 = vy*vy;
				double vz = Math.sqrt(1 - vy2);
				double angle = Math.atan2(vy, vz) - 10*Math.PI/180;
				double length = Math.sqrt(vy2 + vz*vz)*cueRadius;
				int yl = cueCenter.y - (int)(length*Math.sin(angle));
				int yh = cueCenter.y - (int)(length*Math.sin(angle + 20*Math.PI/180));
				gc.drawLine(mousePnt.x, yl, mousePnt.x, yh);
			}
			
			//	Draw the horizontal cue line.
			if (Math.abs(mouseY) > 4) {
				//	Draw a horizontal elliptical arc through the mouse point.
				double a = Math.sqrt(mouseY2/(1 - mouseX2/(float)cueRadius2));
				double newMouseY = mouseY*cueRadius/a;
				int angle = (int)(Math.atan2(newMouseY, mouseX)*180/Math.PI);
				int width = (int)(2*a);
				y = cueCenter.y - (int)a;
				gc.drawArc(x, y, diameter, width, angle - 10, 20);
				
			} else {
				//	Mouse Y near zero is a special case, just draw a horizontal line.
				float vx = mouseX/(float)cueRadius;
				float vx2 = vx*vx;
				double vz = Math.sqrt(1 - vx2);
				double angle = Math.atan2(vx, vz) - 10*Math.PI/180;
				double length = Math.sqrt(vx2 + vz*vz)*cueRadius;
				int xl = cueCenter.x + (int)(length*Math.sin(angle));
				int xh = cueCenter.x + (int)(length*Math.sin(angle + 20*Math.PI/180));
				gc.drawLine(xl, mousePnt.y, xh, mousePnt.y);
			}
		}
	}
	
	/**
	*  Project a 2D point on a circle to a 3D point on the +z hemisphere of a unit sphere.
	*  If the 2D point is outside the circle, it is first mapped to the nearest point on
	*  the circle before projection.
	*  Orthographic projection is used, though technically the field of view of the camera
	*  should be taken into account.  However, the discrepancy is neglegible.
	*
	*  @param  p         Window point to be projected onto the sphere.
	*  @param  cueCenter Location of center of virtual sphere in window.
	*  @param  cueRadius The radius of the virtual sphere.
	*  @param  v         Storage for the 3D projected point created by this method.
	**/
	private static void pointOnUnitSphere(Point p, Point cueCenter, int cueRadius, float[] v) {
		
		/* Turn the mouse points into vectors relative to the center of the circle
	 	*  and normalize them.  Note we need to flip the y value since the 3D coordinate
	 	*  has positive y going up.  */
		float vx = (p.x - cueCenter.x)/(float)cueRadius;
		float vy = (cueCenter.y - p.y)/(float)cueRadius;
		float lengthSqared = vx*vx + vy*vy;
		
		/* Project the point onto the sphere, assuming orthographic projection.
	 	*  Points beyond the virtual sphere are normalized onto 
	 	*  edge of the sphere (where z = 0).  */
	 	float vz = 0;
		if (lengthSqared < 1)
			vz = (float)Math.sqrt(1.0 - lengthSqared);
			
		else {
			float length = (float)Math.sqrt(lengthSqared);
			vx /= length;
			vy /= length;
		}
		
		v[X] = vx;
		v[Y] = vy;
		v[Z] = vz;
	}
	
	/**
	*  Computes a rotation matrix that would map (rotate) vectors op onto oq.
	*  The rotation is about an axis perpendicular to op and oq.
	*  Note this routine won't work if op or oq are zero vectors, or if they
	*  are parallel or antiparallel to each other.
	*
	*  <p>  Modification of Michael Pique's formula in 
	*       Graphics Gems Vol. 1.  Andrew Glassner, Ed.  Addison-Wesley.  </p>
	*
	*  @param  rotationMatrix  The 16 element rotation matrix to be filled in.
	*  @param  op              The 1st 3D vector.
	*  @param  oq              The 2nd 3D vector.
	**/
	private void setRotationMatrix(float[] rotationMatrix, float[] op, float[] oq) {
		
		// Vector a is defined as a class variable to avoid wastefull memory allocations.

		GLTools.crossProduct3D(op, oq, a);
		float s = GLTools.length3D(a);
		float c = GLTools.dotProduct3D(op, oq);
		float t = 1 - c;

		float ax = a[X];
		float ay = a[Y];
		float az = a[Z];
		if (s > 0) {
			ax /= s;
			ay /= s;
			az /= s;
		}

		float tax = t*ax;
		float taxay = tax*ay, taxaz = tax*az;
		float saz = s*az, say = s*ay;
		rotationMatrix[0] = tax*ax + c;
		rotationMatrix[1] = taxay + saz;
		rotationMatrix[2] = taxaz - say;

		float tay = t*ay;
		float tayaz = tay*az;
		float sax = s*ax;
		rotationMatrix[4] = taxay - saz;
		rotationMatrix[5] = tay*ay + c;
		rotationMatrix[6] = tayaz + sax;

		rotationMatrix[8] = taxaz + say;
		rotationMatrix[9] = tayaz - sax;
		rotationMatrix[10] = t*az*az + c;

		rotationMatrix[3] = rotationMatrix[7] = rotationMatrix[11] = 
			rotationMatrix[12] = rotationMatrix[13] = rotationMatrix[14] = 0;
		rotationMatrix[15] = 1;
	}
}

