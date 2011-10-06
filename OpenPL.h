#ifndef _OPEN_PL_H_
#define _OPEN_PL_H_

/*
 
 My bullshitty physics library interface. Write to the library to create rigid body
 physics objects by simply passing in commands, much like the Open GL library.
 
 This will evolve a lot, but the idea stems from OpenGL-ish code to create physics
 objects easily from co-ordinate sets. The idea was to have code like this:
 
	PLuint BodyHandle;
	plBegin(PL_POLYGON, &BodyHandle);
	plVertex2f(0.0f, 1.0f);
	...
	etc
	...
	plEnd();
 
 This code would bind the vertices to the body handle. To get updated vertices, the
 programmer queries the physics library using the handle.
 
 
 plBindBody(PL_BODY_2D, &BodyHandle);
 plFloat[3] angle = plGetAngle(PL_BODY_2D, BodyHandle);
 plFloat[3] position = plGetPosition(PL_BODY_2D, BodyHandle);
 plFloat* vertices = plGetVertices(PL_BODY_2D, BodyHandle); // Not sure about this line.
 plStep(PLTimeInterval duration);
 
 definitions:
 PL_POINTS: physics body is made up of a point
 PL_TRIANGLES:
 PL_TRIANLGE_STRIP: physics body made up of a bunch of vertices
 PL_POLYGON: 
 PL_CIRCLE:
 
 // Enable when binding a texture
 plEnable(PL_STATIC_BODY);
 
 plDisable(PL_STATIC_BODY);
 
 Tricky stuff: contact points, joints, connections, motors, pulleys etc.
 
 */



#define PL_POINTS                      0x0000
#define PL_TRIANGLES                   0x0001
#define PL_TRIANGLE_STRIP              0x0002
#define PL_POLYGON                     0x0003
#define PL_CIRCLE                      0x0004


#endif