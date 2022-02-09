#include <GL/glut.h>

using namespace std;
class PowerGlass
{

public: void createGlassBarrierZ(int x, int y, int z, int height, int width) {

		height /= 2;
		width /= 2;

		glBlendFunc(GL_SRC_ALPHA ,GL_ONE_MINUS_SRC_ALPHA); //the blend function
		glEnable(GL_BLEND);
		glColor4f(0.0f,0.5f,1.0f,0.6f);
		glBegin(GL_QUADS);
			glNormal3f(0.0f, 0.0f, 1.0f);
			glVertex3f(x, y-1*height, z-1*width);
			glVertex3f(x, y-1*height, z+width);
			glVertex3f(x, y+height, z+width );
			glVertex3f(x, y+height, z-1*width);
		glEnd();
		glColor3f(1.0f,1.0f,1.0f);
		glDisable(GL_BLEND);
	}

public: void createGlassBarrierX(int x, int y, int z, int height, int width) {

		height /= 2;
		width /= 2;

		glBlendFunc(GL_SRC_ALPHA ,GL_ONE_MINUS_SRC_ALPHA); //the blend function
		glEnable(GL_BLEND);
		glColor4f(0.0f,0.5f,1.0f,0.6f);
		glBegin(GL_QUADS);
			glNormal3f(0.0f, 0.0f, 1.0f);
			glVertex3f(x-1*width, y-1*height, z);
			glVertex3f(x+width, y-1*height, z);
			glVertex3f(x+width, y+height, z);
			glVertex3f(x-1*width, y+height, z);
		glEnd();
		glColor3f(1.0f,1.0f,1.0f);
		glDisable(GL_BLEND);
	}

};

