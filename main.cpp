                                                    ///SHOURAV, TANVIR TANJUM
                                                        ///17-35860-3
                                                    ///COMPUTER GRAPHICS [A]
                                                        ///ASSIGNMENT-1

#include <windows.h>
#include <GL/glut.h>

void rainbowflag()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ///RED
    glBegin(GL_QUADS);
    glColor3ub(230, 0, 0);
    glVertex2f(-0.5f, 0.45f); // top left
    glVertex2f(0.5f, 0.45f); // top right
    glVertex2f(0.5f, 0.30f); // bottom right
    glVertex2f(-0.5f, 0.30f); // bottom left
    glEnd();

    ///ORENGE
    glBegin(GL_QUADS);
    glColor3ub(255, 128, 0);
    glVertex2f(-0.5f, 0.30f); // top left
    glVertex2f(0.5f, 0.30f); // top right
    glVertex2f(0.5f, 0.15f); // bottom right
    glVertex2f(-0.5f, 0.15f); // bottom left
    glEnd();

    ///YELLOW
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.5f, 0.15f); // top left
    glVertex2f(0.5f, 0.15f); // top right
    glVertex2f(0.5f, 0.0f); // bottom right
    glVertex2f(-0.5f, 0.0f); // bottom left
    glEnd();

    ///GREEN
    glBegin(GL_QUADS);
    glColor3ub(0, 128, 0);
    glVertex2f(-0.5f, -0.15f); // top left
    glVertex2f(0.5f, -0.15f); // top right
    glVertex2f(0.5f, 0.0f); // bottom right
    glVertex2f(-0.5f, 0.0f); // bottom left
    glEnd();

    ///BLUE
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);
    glVertex2f(-0.5f, -0.30f); // top left
    glVertex2f(0.5f, -0.30f); // top right
    glVertex2f(0.5f, -0.15f); // bottom right
    glVertex2f(-0.5f, -0.15f); // bottom left
    glEnd();

    ///MAZENDA
    glBegin(GL_QUADS);
    glColor3ub(96, 0, 128);
    glVertex2f(-0.5f, -0.45f); // top left
    glVertex2f(0.5f, -0.45f); // top right
    glVertex2f(0.5f, -0.30f); // bottom right
    glVertex2f(-0.5f, -0.30f); // bottom left
    glEnd();

    ///STAND
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.5f, 0.50f); // top left
    glVertex2f(-0.55f, 0.50f); // top right
    glVertex2f(-0.55f, -0.90f); // bottom right
    glVertex2f(-0.5f, -0.90f); // bottom left
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.525f,-0.85f);
    glVertex2f(-0.60,-0.99f);
    glVertex2f(-0.45,-0.99f);
    glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(550, 320);
	glutCreateWindow("RAINBOW FLAG (ASSIGNMENT-1__17-35860-3)");
	glutDisplayFunc(rainbowflag);
	glutMainLoop();
	return 0;
}
