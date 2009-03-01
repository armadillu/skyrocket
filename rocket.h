#ifndef ROCKET_H
#define ROCKET_H



#define ROCKETTEXSIZE 32


unsigned int rocketlist;
extern int dAmbient;

unsigned char rocketmap[ROCKETTEXSIZE][ROCKETTEXSIZE][3] = {
226,50,2,223,52,6,224,52,6,222,52,7,227,49,3,224,54,5,222,51,7,203,44,4,216,48,6,227,49,6,225,49,6,227,52,6,226,55,5,226,54,1,227,53,4,225,54,3,
223,51,6,226,51,9,225,49,3,221,52,6,226,53,3,227,49,3,225,55,5,228,54,8,228,52,6,227,52,8,228,54,5,226,50,6,222,55,7,222,50,5,224,52,4,224,52,4,
226,51,6,223,53,4,224,51,4,222,53,4,223,51,7,222,49,4,225,51,5,205,47,3,213,46,3,229,52,3,223,52,4,226,51,4,224,56,7,225,52,6,228,53,3,224,54,3,
225,55,4,228,51,7,224,53,5,224,50,6,223,50,6,222,50,6,224,51,5,224,55,8,189,46,5,213,50,5,227,53,4,227,50,3,222,53,8,222,53,6,225,51,6,228,50,4,
225,49,3,224,51,4,226,51,4,227,52,6,225,48,10,226,51,3,221,50,4,207,48,6,212,52,4,225,55,4,223,55,2,226,51,4,223,52,5,222,49,5,223,49,2,227,50,4,
228,52,4,225,52,5,226,54,5,224,54,5,227,51,8,225,50,5,229,50,6,194,42,5,142,33,4,209,48,4,227,48,6,224,54,4,224,54,3,222,54,7,226,54,9,226,54,5,
222,51,6,222,50,7,224,50,7,227,50,6,224,53,6,225,52,3,220,52,8,204,46,5,212,51,7,224,55,3,221,51,4,227,52,7,223,50,4,223,50,5,224,50,5,224,52,6,
224,50,4,224,54,5,223,53,7,223,50,7,226,50,4,225,53,5,224,54,6,216,49,3,145,33,3,192,47,7,229,53,7,223,52,4,221,53,4,221,50,6,228,48,7,224,54,5,
224,51,3,224,49,4,225,50,5,228,50,5,227,54,6,223,52,7,222,49,5,205,45,5,210,51,6,228,53,5,224,52,5,224,52,7,226,49,5,222,52,9,224,52,2,224,51,3,
224,53,5,228,54,6,223,53,7,223,49,8,225,48,2,224,52,5,230,54,6,197,45,2,142,33,3,191,42,4,229,54,2,221,51,3,225,50,4,225,50,4,226,49,3,222,52,5,
225,50,3,225,52,3,224,53,2,223,50,4,225,54,3,225,53,7,217,49,5,207,45,6,208,45,3,225,51,6,225,55,5,222,52,5,223,50,6,226,53,7,222,54,3,223,52,6,
225,48,5,224,51,4,226,52,6,225,49,2,224,50,4,226,50,5,226,51,7,217,49,6,115,27,3,179,42,3,231,56,4,223,53,6,225,50,3,224,51,2,223,53,5,221,54,4,
226,51,5,226,51,6,222,50,6,225,51,6,226,49,5,224,50,4,221,48,5,205,50,5,209,46,6,228,53,6,224,50,4,224,49,5,226,55,6,224,52,5,223,49,7,224,52,8,
224,51,3,223,52,4,222,53,2,222,51,5,224,51,5,223,50,5,229,53,6,199,45,5,159,39,2,214,52,5,226,52,5,224,53,7,223,51,7,227,54,5,224,52,5,222,53,3,
224,56,3,223,54,5,226,50,5,226,51,4,225,51,6,223,51,5,220,50,3,209,47,4,208,50,6,227,53,6,227,51,4,223,52,6,225,53,5,226,51,5,224,51,4,223,52,6,
225,52,3,222,53,5,224,51,4,224,50,6,222,55,5,223,50,3,232,54,3,181,42,3,99,23,2,203,47,5,229,54,4,224,51,6,227,49,3,224,55,5,223,50,6,221,54,4,
226,51,5,228,48,6,225,49,5,225,51,5,226,51,5,224,52,5,219,47,6,208,50,3,207,50,4,227,55,6,226,50,3,224,51,4,222,50,4,223,49,5,223,52,4,224,52,6,
225,48,3,225,52,4,223,50,4,222,51,3,223,52,7,228,52,6,228,54,6,193,45,4,170,38,3,218,52,9,225,52,6,223,54,6,226,54,4,222,54,9,225,55,5,224,53,1,
224,52,7,223,52,4,225,51,4,223,53,6,225,54,6,226,53,5,223,50,5,210,48,2,207,45,4,226,50,4,224,51,3,223,50,5,226,49,4,226,56,5,224,52,5,225,52,7,
224,52,8,223,52,6,227,55,6,227,53,5,225,52,5,225,51,2,226,53,4,215,51,4,173,41,3,199,43,7,227,50,3,226,54,3,226,48,4,226,50,4,226,53,5,224,50,2,
224,52,5,225,56,3,224,52,5,224,50,3,225,54,5,227,50,6,222,51,5,209,49,4,208,49,3,223,51,3,222,49,5,225,50,4,224,51,7,227,49,3,227,49,6,224,50,4,
221,50,4,225,48,6,227,51,5,224,55,7,223,52,5,224,50,5,227,52,7,217,51,5,154,36,3,202,46,5,227,48,6,225,51,5,225,52,3,223,50,4,225,52,5,225,50,3,
225,53,8,224,53,7,223,51,4,225,52,1,223,53,4,225,48,5,221,51,9,210,51,6,207,49,5,225,50,8,224,54,6,225,50,5,224,51,5,225,50,3,225,50,8,223,52,6,
225,50,3,224,53,8,226,50,3,225,54,4,225,49,6,226,51,8,225,54,6,212,50,5,133,30,4,206,47,3,230,53,3,223,51,3,225,54,7,226,53,6,225,52,4,227,52,5,
223,50,6,223,53,6,225,53,4,225,52,6,223,52,5,224,51,5,220,53,7,209,48,7,208,49,4,228,53,9,227,52,6,224,53,6,225,53,7,225,52,3,222,52,6,227,53,3,
227,53,4,223,54,6,223,53,5,224,52,5,226,50,7,226,51,6,228,52,5,220,52,2,148,35,4,193,44,5,230,52,7,220,52,6,225,53,5,226,52,6,224,52,7,224,52,5,
222,51,5,224,51,4,223,55,5,225,53,8,226,52,4,227,51,4,221,53,4,207,48,5,213,50,4,227,55,6,222,50,5,222,49,4,225,49,5,226,53,5,224,52,9,226,52,6,
225,52,3,224,54,5,223,53,4,224,50,3,222,50,5,223,53,2,229,54,6,202,48,4,136,32,2,198,44,4,232,53,9,223,51,7,226,51,8,228,54,7,226,55,6,225,50,7,
226,52,7,224,50,6,222,49,7,224,52,6,226,54,4,229,54,6,223,53,6,207,49,7,214,50,4,225,54,6,224,51,5,223,48,7,225,49,5,229,54,5,226,52,8,221,54,9,
221,51,2,224,51,3,224,53,4,224,52,4,225,49,6,226,53,5,231,52,7,164,37,7,176,40,3,216,48,4,226,51,7,223,54,3,223,53,6,227,50,5,225,53,6,225,49,7,
225,51,7,226,55,5,226,51,10,225,50,5,223,54,3,224,50,6,219,48,5,204,44,5,212,50,7,228,51,8,224,48,5,222,49,6,225,53,5,227,54,6,222,54,6,226,53,4,
224,48,5,222,47,4,226,53,7,224,54,8,222,52,6,226,50,6,229,52,5,222,49,6,213,48,4,221,51,5,222,50,5,223,51,5,227,49,4,223,52,5,227,51,5,223,49,6,
225,50,6,223,53,5,224,51,4,224,50,5,222,52,7,222,54,4,217,53,7,199,50,4,208,48,3,228,51,8,223,53,4,224,53,4,227,52,8,223,52,10,224,49,6,228,49,6,
223,52,5,225,52,5,226,52,9,225,55,5,223,53,6,223,52,3,227,53,3,221,50,5,135,31,4,185,41,3,226,50,4,227,51,3,224,48,4,224,53,5,224,52,3,222,50,4,
224,51,8,222,52,7,222,51,4,222,49,4,223,47,6,224,47,7,223,49,6,200,49,6,208,50,4,227,54,6,225,52,3,225,53,3,224,52,4,224,51,8,224,51,6,220,53,3,
226,56,3,226,55,7,225,56,6,225,52,4,220,52,4,224,55,6,227,57,5,210,50,5,141,32,3,193,45,6,228,51,5,227,50,4,225,53,7,228,51,4,224,53,4,224,51,3,
224,52,5,223,53,8,224,53,4,222,49,4,224,50,4,226,53,4,217,49,6,197,47,6,210,47,8,226,51,4,225,50,4,225,55,4,227,53,6,225,51,7,224,52,6,225,51,4,
224,52,7,224,55,6,227,52,7,228,48,4,223,50,3,221,55,4,228,53,6,200,46,2,176,43,5,209,47,5,227,53,8,222,52,8,225,55,4,225,54,5,227,54,6,226,52,5,
227,53,7,225,49,4,225,52,4,223,53,4,225,52,3,222,53,2,216,52,5,197,48,4,206,48,7,227,52,3,224,50,5,223,53,4,227,53,7,226,51,4,229,52,6,226,53,4,
224,50,6,226,46,6,227,49,5,228,50,6,222,54,5,219,53,6,228,50,6,195,44,6,157,37,4,205,43,2,230,51,4,226,53,3,225,56,5,226,53,6,229,52,5,224,49,8,
223,53,7,224,50,5,222,49,4,227,50,9,226,50,4,225,51,7,222,51,5,196,45,5,200,47,4,228,54,4,225,50,4,224,51,5,226,54,6,227,51,5,225,55,5,226,57,5,
228,50,3,225,48,6,224,51,4,224,53,4,225,49,4,224,50,5,227,53,5,213,48,7,131,28,2,184,42,4,234,54,5,225,52,6,223,49,6,224,50,5,224,48,4,225,48,4,
224,49,5,224,50,5,226,52,2,226,51,6,225,51,4,224,53,6,221,50,6,201,45,5,203,44,5,227,54,4,225,55,6,222,52,8,226,52,3,224,52,4,224,54,1,224,55,4,
223,52,3,226,51,6,224,54,5,225,52,2,226,52,4,227,56,4,230,55,5,215,51,4,123,31,3,196,45,5,231,52,5,226,53,4,223,53,5,222,50,4,225,49,9,224,51,5,
228,48,7,224,52,5,224,52,6,222,52,8,225,50,6,224,51,4,221,50,3,200,44,4,203,48,5,225,51,5,225,52,7,227,49,8,225,50,3,222,52,6,224,51,5,222,52,3,
223,51,5,227,51,3,223,51,6,221,48,8,224,54,4,228,49,4,229,51,6,195,46,4,134,33,3,195,45,1,225,52,5,227,53,4,224,53,5,221,51,5,224,51,6,224,48,7,
226,51,7,223,49,3,224,54,3,221,53,5,225,50,4,225,50,6,218,49,5,196,44,6,204,45,5,226,52,5,223,50,4,227,52,4,223,51,5,223,51,6,222,52,6,226,52,4,
224,55,6,225,51,7,225,51,8,223,50,6,224,55,6,223,51,7,225,51,4,219,50,5,159,39,3,200,44,3,225,50,5,223,52,4,224,52,5,226,53,6,226,54,7,224,50,8,
226,53,4,224,46,3,222,51,9,224,54,6,225,52,5,223,53,8,212,51,4,199,46,5,207,46,6,226,52,4,224,55,4,225,54,4,222,54,7,222,53,3,222,49,5,226,54,4,
226,53,5,223,51,4,224,50,3,224,51,4,225,49,5,223,51,7,221,53,5,218,49,5,130,30,3,198,44,3,229,49,4,223,51,4,225,53,4,224,50,5,225,52,4,226,51,9,
225,53,5,224,52,5,225,51,8,224,54,5,222,55,4,223,49,5,218,48,6,202,47,5,207,47,7,223,56,5,225,53,4,226,51,3,225,54,4,225,50,2,225,50,4,227,54,4,
225,52,6,225,50,5,225,53,3,226,49,4,225,52,4,223,52,3,226,51,3,219,47,4,152,36,3,211,48,5,225,52,3,226,54,4,222,54,3,226,53,5,224,50,4,224,52,5,
227,50,6,224,52,6,226,51,5,227,55,3,221,53,8,222,50,5,221,49,5,207,49,5,210,49,5,224,49,4,220,51,3,224,52,3,225,52,4,226,52,4,225,54,5,223,51,5,
225,53,5,227,49,5,226,50,5,225,51,5,224,53,8,222,52,5,228,52,6,222,52,4,139,33,5,181,39,5,226,52,4,225,55,5,225,50,4,223,52,5,225,52,5,226,50,3,
225,51,6,225,49,4,228,50,5,226,52,5,225,53,5,226,50,5,218,49,4,207,47,5,213,49,6,228,49,6,222,49,7,226,48,6,224,48,4,225,50,4,224,51,4,224,49,5,
224,53,2,228,55,2,226,51,5,225,53,6,225,54,4,222,54,8,227,52,10,216,52,5,151,36,3,199,45,5,227,53,3,224,53,4,225,50,5,223,50,6,223,55,4,224,52,6,
223,50,7,223,53,3,224,50,5,222,49,4,223,52,5,224,51,7,217,48,5,207,46,3,212,47,7,229,52,5,227,48,7,225,50,3,225,52,3,225,51,7,221,54,4,224,51,4,
228,53,2,226,52,2,224,52,6,224,52,7,225,51,7,224,53,4,230,55,3,187,42,3,125,28,2,195,44,4,229,53,4,225,51,2,225,52,3,225,52,4,224,53,6,222,50,6,
223,51,6,223,53,6,224,53,5,228,50,4,224,53,5,220,52,6,220,48,7,204,44,4,212,47,6,230,52,6,226,52,4,221,51,2,225,50,4,227,48,7,225,50,4,222,52,6,
227,54,4,224,54,2,224,52,5,225,50,5,224,50,4,223,53,4,231,56,3,172,37,2,149,36,4,198,46,3,227,51,5,223,49,6,227,52,4,226,55,4,222,52,4,224,53,4,
228,54,3,228,48,5,225,49,5,227,52,5,224,50,2,224,53,5,220,51,7,202,45,4,216,46,8,228,49,7,225,51,4,222,52,6,226,52,4,226,50,8,227,52,3,227,53,3,
224,53,4,225,53,3,223,50,8,222,52,5,227,50,4,225,51,5,224,54,5,218,49,3,217,47,4,221,51,3,223,51,4,227,53,6,226,50,5,226,52,6,226,52,4,224,55,5,
222,50,4,225,54,5,223,53,6,224,50,5,224,51,3,222,56,5,221,49,4,206,47,5,219,51,4,226,53,6,223,51,2,226,52,4,227,52,7,225,50,5,224,53,2,226,54,6,
228,53,7,227,51,4,225,52,5,224,52,6,224,48,6,224,49,6,226,50,5,224,54,3,227,50,3,224,48,5,225,48,3,227,52,3,226,50,3,224,52,8,224,51,8,227,52,2
};


void initRockets(){
	unsigned int rockettex;

	glGenTextures(1, &rockettex);
	glBindTexture(GL_TEXTURE_2D, rockettex);
	//glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexImage2D(GL_TEXTURE_2D, 0, 3, ROCKETTEXSIZE, ROCKETTEXSIZE, 0, GL_RGB,
		GL_UNSIGNED_BYTE, rocketmap);

	rocketlist = glGenLists(1);
	glNewList(rocketlist, GL_COMPILE);
		// Draw dowel (rectangular solid)
		glDisable(GL_TEXTURE_2D);
		glColor3f(float(dAmbient) * 0.01f, float(dAmbient) * 0.0065f, 0.0f);
		glBegin(GL_TRIANGLE_STRIP);
			glVertex3f(-0.01f, -3.0f, -0.071329f);
			glVertex3f(-0.01f, 0.75f, -0.071329f);
			glVertex3f(0.01f, -3.0f, -0.071329f);
			glVertex3f(0.01f, 0.75f, -0.071329f);
			glVertex3f(0.01f, -3.0f, -0.091329f);
			glVertex3f(0.01f, 0.75f, -0.091329f);
			glVertex3f(-0.01f, -3.0f, -0.091329f);
			glVertex3f(-0.01f, 0.75f, -0.091329f);
			glVertex3f(-0.01f, -3.0f, -0.071329f);
			glVertex3f(-0.01f, 0.75f, -0.071329f);
		glEnd();
		// Draw rocket (textured 10-sided cylinder)
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, rockettex);
		glColor3f(float(dAmbient) * 0.01f, float(dAmbient) * 0.01f, float(dAmbient) * 0.01f);
		glBegin(GL_TRIANGLE_STRIP);
			glTexCoord2f(0.2f, 0.0f);
			glVertex3f(0.075f, 0.0f, 0.0f);
			glTexCoord2f(0.2f, 2.0f);
			glVertex3f(0.075f, 1.0f, 0.0f);
			glTexCoord2f(0.3f, 0.0f);
			glVertex3f(0.060676f, 0.0f, 0.033504f);
			glTexCoord2f(0.3f, 2.0f);
			glVertex3f(0.060676f, 1.0f, 0.033504f);
			glTexCoord2f(0.4f, 0.0f);
			glVertex3f(0.023176f, 0.0f, 0.071329f);
			glTexCoord2f(0.4f, 2.0f);
			glVertex3f(0.023176f, 1.0f, 0.071329f);
			glTexCoord2f(0.5f, 0.0f);
			glVertex3f(-0.023176f, 0.0f, 0.071329f);
			glTexCoord2f(0.5f, 2.0f);
			glVertex3f(-0.023176f, 1.0f, 0.071329f);
			glTexCoord2f(0.6f, 0.0f);
			glVertex3f(-0.060676f, 0.0f, 0.033504f);
			glTexCoord2f(0.6f, 2.0f);
			glVertex3f(-0.060676f, 1.0f, 0.033504f);
			glTexCoord2f(0.7f, 0.0f);
			glVertex3f(-0.075f, 0.0f, 0.0f);
			glTexCoord2f(0.7f, 2.0f);
			glVertex3f(-0.075f, 1.0f, 0.0f);
			glTexCoord2f(0.8f, 0.0f);
			glVertex3f(-0.060676f, 0.0f, -0.033504f);
			glTexCoord2f(0.8f, 2.0f);
			glVertex3f(-0.060676f, 1.0f, -0.033504f);
			glTexCoord2f(0.9f, 0.0f);
			glVertex3f(-0.023176f, 0.0f, -0.071329f);
			glTexCoord2f(0.9f, 2.0f);
			glVertex3f(-0.023176f, 1.0f, -0.071329f);
			glTexCoord2f(1.0f, 0.0f);
			glVertex3f(0.023176f, 0.0f, -0.071329f);
			glTexCoord2f(1.0f, 2.0f);
			glVertex3f(0.023176f, 1.0f, -0.071329f);
			glTexCoord2f(1.1f, 0.0f);
			glVertex3f(0.060676f, 0.0f, -0.033504f);
			glTexCoord2f(1.1f, 2.0f);
			glVertex3f(0.060676f, 1.0f, -0.033504f);
			glTexCoord2f(1.2f, 0.0f);
			glVertex3f(0.075f, 0.0f, 0.0f);
			glTexCoord2f(1.2f, 2.0f);
			glVertex3f(0.075f, 1.0f, 0.0f);
		glEnd();
		// bottom of rocket
		glBegin(GL_TRIANGLE_STRIP);
			glTexCoord2f(0.7f, 0.5f);
			glVertex3f(0.075f, 0.0f, 0.0f);
			glTexCoord2f(0.6618f, 0.3824f);
			glVertex3f(0.060676f, 0.0f, 0.033504f);
			glTexCoord2f(0.6618f, 0.6176f);
			glVertex3f(0.060676f, 0.0f, -0.033504f);
			glTexCoord2f(0.5618f, 0.3098f);
			glVertex3f(0.023176f, 0.0f, 0.071329f);
			glTexCoord2f(0.5618f, 0.6902f);
			glVertex3f(0.023176f, 0.0f, -0.071329f);
			glTexCoord2f(0.4382f, 0.3098f);
			glVertex3f(-0.023176f, 0.0f, 0.071329f);
			glTexCoord2f(0.4382f, 0.6902f);
			glVertex3f(-0.023176f, 0.0f, -0.071329f);
			glTexCoord2f(0.3382f, 0.3824f);
			glVertex3f(-0.060676f, 0.0f, 0.033504f);
			glTexCoord2f(0.3382f, 0.6176f);
			glVertex3f(-0.060676f, 0.0f, -0.033504f);
			glTexCoord2f(0.3f, 0.5f);
			glVertex3f(-0.075f, 0.0f, 0.0f);
		glEnd();
		// top of rocket
		glBegin(GL_TRIANGLE_STRIP);
			glTexCoord2f(0.7f, 0.5f);
			glVertex3f(0.075f, 1.0f, 0.0f);
			glTexCoord2f(0.6618f, 0.6176f);
			glVertex3f(0.060676f, 1.0f, -0.033504f);
			glTexCoord2f(0.6618f, 0.3824f);
			glVertex3f(0.060676f, 1.0f, 0.033504f);
			glTexCoord2f(0.5618f, 0.6902f);
			glVertex3f(0.023176f, 1.0f, -0.071329f);
			glTexCoord2f(0.5618f, 0.3098f);
			glVertex3f(0.023176f, 1.0f, 0.071329f);
			glTexCoord2f(0.4382f, 0.6902f);
			glVertex3f(-0.023176f, 1.0f, -0.071329f);
			glTexCoord2f(0.4382f, 0.3098f);
			glVertex3f(-0.023176f, 1.0f, 0.071329f);
			glTexCoord2f(0.3382f, 0.6176f);
			glVertex3f(-0.060676f, 1.0f, -0.033504f);
			glTexCoord2f(0.3382f, 0.3824f);
			glVertex3f(-0.060676f, 1.0f, 0.033504f);
			glTexCoord2f(0.3f, 0.5f);
			glVertex3f(-0.075f, 1.0f, 0.0f);
		glEnd();
	glEndList();
}



#endif
