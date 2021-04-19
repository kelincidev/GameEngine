#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void renderScene(void) {
	//clear color and depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();//load identity matrix
    glTranslatef(0.5f,0.0f,0.2f);//move forward 4 units
    glColor3f(0.0f,0.0f,1.0f); //blue color
    glRotatef(10.0, 0.0, 50.0, 50.0);

    glBegin(GL_LINE_LOOP);//start drawing a line loop
      glVertex3f(-1.0f,0.0f,0.0f);//left of window
      glVertex3f(0.0f,-1.0f,0.0f);//bottom of window
      glVertex3f(1.0f,0.0f,0.0f);//right of window
      glVertex3f(0.0f,1.0f,0.0f);//top of window
    glEnd();//end drawing of line loop
	glutSwapBuffers();
}

int main(int argc, char **argv) {
	// init GLUT and create Window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(510,510);
	glutCreateWindow("Kelinci Dev");
	// register callbacks
	glutDisplayFunc(renderScene);
	// enter GLUT event processing cycle
	glutMainLoop();
	return 1;
}
