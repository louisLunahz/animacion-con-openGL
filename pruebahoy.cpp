#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
float rotacion_luna = 0.0;
float traslacion_luna = 0.0;

int modo_rotacion = 0;
int modo_traslacion = 0;

float luzx=0;
float luzy=0;
float luzz=0;
GLfloat wingAngle = 0;


GLfloat mat_diffuse [] = {0.0, 1.0, 0.0, 1.0};
GLfloat mat_specular [] = {0, 0, 0, 1.0};
GLfloat mat_shininess [] = {150};
GLfloat mat_emission [] = {0.0, 0.0, 0.0, 0.0};




void iluminacion ()
{
	GLfloat light_position[] = {luzx, luzy, luzz, 0.0};
	glLightfv(GL_LIGHT0,GL_POSITION, light_position);
	
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glEnable (GL_LIGHTING);
	glEnable (GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	
	
}


void cuerpoConejo(){
	glPushMatrix();
	glColor3f(0.84, 0.63, 0.45);//color del cuerpo
	glScalef(1.5, 0.95,0.95);
	glutSolidSphere(1, 30,30);
	
	glPopMatrix();
}

void cabezaConejo(){
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	
	glutSolidSphere(0.76, 10,10);
	
	glPopMatrix();
}

void orejaIzquierda(){
	glColor3f(0.84, 0.63, 0.45);
	glPushMatrix();
	glScaled(0.3, 0.8, 0.2);
	glutSolidSphere(0.9, 30,30);
	glPopMatrix();
}

void orejaDerecha(){
	glColor3f(0.84, 0.63, 0.45);
	glPushMatrix();
	glScaled(0.3, 0.8, 0.2);
	glutSolidSphere(0.9, 30,30);
	glPopMatrix();
}

void piernaIzquierda(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glScaled(1, 1, 0.3);
	glutSolidSphere(0.76, 30,30);
	glPopMatrix();
}

void piernaDerecha(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glScaled(1, 1, 0.3);
	glutSolidSphere(0.76, 30,30);
	glPopMatrix();
}

void pataIzquierda(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glScaled(1, 0.2, 0.25);
	glutSolidSphere(0.76, 30,30);
	glPopMatrix();
}

void pataDerecha(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glScaled(1, 0.2, 0.25);
	glutSolidSphere(0.76, 30,30);
	glPopMatrix();
}


void brazoIzquierdo(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glScaled(0.8, 1, 0.4);
	glutSolidSphere(0.56, 30,30);
	glPopMatrix();
}
void manoIzquierda(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glScaled(0.5, 1, 0.51);
	glutSolidSphere(0.36, 30,30);
	glPopMatrix();
}
void brazoDerecho(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glScaled(0.8, 1, 0.4);
	glutSolidSphere(0.56, 30,30);
	glPopMatrix();
}

void manoDerecha(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glScaled(0.5, 1, 0.51);
	glutSolidSphere(0.36, 30,30);
	glPopMatrix();
}


void cola(){
	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glutSolidSphere(0.25, 30,30);
	glPopMatrix();
}

void nariz(){
	glPushMatrix();
	glColor3f(0.0, 0.0, 0.0);
	
	glutSolidSphere(0.10, 10,3);
	
	glPopMatrix();
}

void ojoIzquierdo(){
	glPushMatrix();
	glColor3f(0.0, 0.0, 0.0);
	
	glutSolidSphere(0.15, 10,3);
	
	glPopMatrix();
}

void ojoDerecho(){
	glPushMatrix();
	glColor3f(0.0, 0.0, 0.0);
	
	glutSolidSphere(0.15, 10,3);
	
	glPopMatrix();
}


void conejo(){
	
	//aqui vamos a crear un conejo
	//primero vamos a hacer el circulo del cuerpo
	
	glPushMatrix();
	glRotated(30, 0,0,-1);
	cuerpoConejo();
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(-1,1,0);
	glScaled(1,1,0.8);
	cabezaConejo();
	glPopMatrix();
	
	
	glPushMatrix();
	glRotated(-45,0,0,1);
	glTranslatef(-1.55,0.95,-0.5);
	orejaIzquierda();
	glPopMatrix();
	
	
	glPushMatrix();
	glRotated(-45,0,0,1);
	glTranslatef(-1.55,0.95,0.5);
	orejaDerecha();
	glPopMatrix();
	
	
	glPushMatrix();

	glTranslatef(0.55,-0.4,-0.65);
	piernaIzquierda();
	glPopMatrix();
	
	
	glPushMatrix();
	
	glTranslatef(0.55,-0.4,0.65);
	piernaDerecha();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.27,-1,-0.65);
	pataIzquierda();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0.27,-1,0.65);
	pataDerecha();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.6,-0.1,-0.65);
	brazoIzquierdo();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.7,-0.6,-0.65);
	manoIzquierda();
		glPopMatrix();
	
		
	glPushMatrix();
	glTranslatef(-0.6,-0.1,0.65);
	brazoDerecho();
	glPopMatrix();
		
	glPushMatrix();
	glTranslatef(-0.7,-0.6,0.65);
	manoDerecha();
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(1.18,-0.85,0);
	cola();
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(-1.71,1,0);
	nariz();
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslatef(-1.11,1.1,-0.54);
	ojoIzquierdo();
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslatef(-1.11,1.1,0.54);
	ojoDerecho();
	glPopMatrix();
	
	
	
	
	
}
//hasta aqui termina mi conejo


void head() {
	glPushMatrix();
	glRotated(12, 1, 0, 0);
	glScaled(0.8, 0.8, 0.8);
	glTranslated(-3, 0.4, 0);
	glutSolidSphere(1, 100, 100);
	
	glPopMatrix();
}
void eyes() {
	glPushMatrix();
	glTranslated(-3, 0.5, 0.6);
	glutSolidSphere(0.15, 100, 100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(-3, 0.5, -0.6);
	glutSolidSphere(0.15, 100, 100);
	glPopMatrix();
}
void mouth() {
	glPushMatrix();
	glTranslated(-3, 0, 0);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}
void body() {
	glPushMatrix();
	glRotated(12, 0, 0, -1);
	glScaled(2, 1.2, 1.2);
	glutSolidSphere(1, 100, 100);
	
	glPopMatrix();
}
void wings() {
	glPushMatrix();
	glRotated(45, 1, 0, 0);
	glScaled(1, 2, 0.01);//main wing
	glTranslated(-0.3, 1, 60);
	glutSolidSphere(1, 100, 100);
	glPopMatrix();
	
	
	glPushMatrix();
	glRotated(45, 1, 0, 0);
	glScaled(0.8, 1, 0.01);//side wing
	glTranslated(1, 1.5, 60);
	glutSolidSphere(1, 100, 100);
	glPopMatrix();
	
}
void wings1() {
	
	glPushMatrix();
	glRotated(-45, 1, 0, 0);
	glScaled(1, 2, 0.01);//main wing
	glTranslated(-0.3, 1, -60);
	
	glutSolidSphere(1, 100, 100);
	glPopMatrix();
	
	
	
	glPushMatrix();
	glRotated(-45, 1, 0, 0);
	glScaled(0.8, 1, 0.01);
	glTranslated(1, 1.5, -60);
	glutSolidSphere(1, 100, 100);
	glPopMatrix();
}
void tail() {
	glPushMatrix();
	//glScaled(0.5, 0.5, 0.5);
	glTranslated(1.8, -0.5, 0);
	glRotated(90, 0.5, 1, 0);
	glutSolidCone(0.25, 1, 100, 100);
	
	//p = gluNewQuadric(); // initialisation
	//gluCylinder (p, 0.5, 0.01, 3.0, 32, 32); /* cylinder of radius 1.0 at its base; radius 1.0 at its top; height of 3.0; 32 slices (subdivisions around the z axis); 32 stacks (subdivisions along the z axis) */
	glPopMatrix();
}
void legs() {
	glPushMatrix();
	//front legs
	glRotated(-30, 1, 0, 0);
	glTranslated(-1, -1.2, 0.4);
	glScaled(0.1, 1, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glRotated(30, 1, 0, 0);
	glTranslated(-1, -1.2, -0.4);
	glScaled(0.1, 1, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	
	//middle legs
	glPushMatrix();
	glRotated(-30, 1, 0, 0);
	glTranslated(0, -1.2, 0.6);
	glScaled(0.1, 1, 0.1);//
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glRotated(30, 1, 0, 0);
	glTranslated(0, -1.2, -0.6);
	glScaled(0.1, 1, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	
	//end legs
	glPushMatrix();
	glRotated(-30, 1, 0, 0);
	glTranslated(1, -1.2, 0.6);
	glScaled(0.1, 1, 0.1);//
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glRotated(30, 1, 0, 0);
	glTranslated(1, -1.2, -0.6);
	glScaled(0.1, 1, 0.1);
	glutSolidCube(1);
	glPopMatrix();
	
}
void antenna() {
	glPushMatrix();
	glTranslated(-2.5, 0.64, 0.54);
	glRotated(-90, 1, 1, 0);
	
	GLUquadricObj *p; // pointer to quadric object
	p = gluNewQuadric(); // initialisation
	gluCylinder(p, 0.1, 0.1, 2.0, 32, 32);
	/* cylinder of radius 1.0 at its base;
	radius 1.0 at its top;
	height of 3.0;
	32 slices (subdivisions around the z axis);
	32 stacks (subdivisions along the z axis) */
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslated(-2.5, 0.64, -0.54);
	glRotated(-90, 1, 1, 0);
	// glScaled(1, -1, -1);
	p = gluNewQuadric(); // initialisation
	gluCylinder(p, 0.1, 0.1, 2.0, 32, 32);
	
	glPopMatrix();
}
void animal() //here is the animal
{
	glPushMatrix();
	//chooseMaterial(headMaterial);
	glColor3f(0.1, 0.71, 0.35);
	head();
	glPopMatrix();
	
	glPushMatrix();
	//chooseMaterial(bodyMaterial);
	glColor3f(0.8, 0.5, 0.6);
	body();
	glPopMatrix();
	
	glPushMatrix();
	//chooseMaterial(wingMaterial);
	glColor4d(0.9, 0.9, 0.9, 0.9);
	glRotated(wingAngle, 1, 0, 0);
	wings();
	glPopMatrix();
	
	glPushMatrix();
	//chooseMaterial(wingMaterial);
	glColor4d(0.9, 0.9, 0.9, 0.9);
	glRotated(-wingAngle, 1, 0, 0);
	wings1();
	glPopMatrix();
	
	glPushMatrix();
	//chooseMaterial(eyeMaterial);
	glColor3f(0, 0, 0);
	eyes();
	glPopMatrix();
	
	glPushMatrix();
	//chooseMaterial(tailMaterial);
	glColor3f(0.5, 0.4, 0.6);
	tail();
	legs();
	glColor3f(0.1, 0.1, 0.1);
	glPopMatrix();
	
	glPushMatrix();
	//chooseMaterial(tailMaterial);
	glColor3f(0.5, 0.4, 0.6);
	antenna();
	glPopMatrix();
	// mouth();
}


//aqui termina mi catarina
void tronco(){
	glPushMatrix();
	glColor3f(0.29, 0.21, 0.1);
	GLUquadricObj *p;
	p = gluNewQuadric();
	glRotated(90, 1,0,0);
	gluCylinder(p, 0.2, 0.2, 2.0, 32, 32);
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslated(0.2, -1, 0);
	glRotated(90, 0,1,0);
	gluCylinder(p, 0.1, 0.1, 1, 32, 32);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(1.1, -0.7, 0);
	glRotated(90, 1,0,0);
	gluCylinder(p, 0.1, 0.1, 0.4, 32, 32);
	glPopMatrix();
	
	
	
}

void follaje(){

	
	
	glPushMatrix();
	glColor3f(0.13, 0.69, 0.3);
	glTranslated(0,0.7, 0);
	glutSolidSphere(1, 30,30);
	glPopMatrix();
	
	
	glColor3f(0.09, 0.45, 0.04);
	glPushMatrix();
	glTranslated(1.08,-0.3, 0);
	glutSolidSphere(0.45, 30,30);
	glPopMatrix();
	
}

void arbol(){
	glPushMatrix();
	tronco();
	glPopMatrix();
	
	
	glPushMatrix();
	follaje();
	glPopMatrix();
}

//aqui termina mi arbol bien perron


//aqui vamos a hacer un volcan bien mamalon

void volcanPerron(){
	glPushMatrix();
	glColor3f(0.29, 0.21, 0.1);
	GLUquadricObj *p;
	p = gluNewQuadric();
	glRotated(90, 1,0,0);
	gluCylinder(p, 0.4, 2, 3.0, 32, 32);
	glPopMatrix();
}






void init(){
	
	glColor3f(0.55f, 0.81f, 0.95f);
	
	
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,10,0,0,0,1,1,1);
	
	glMatrixMode(GL_PROJECTION);
	gluPerspective(35,10,10,20);
	
	
	
	
	
	
	
}



void suelo(float largo, float ancho, float alto){
	//crear la parte de atras
	int origen=0;
	if((largo!=0 && alto!=0)&& alto!=0){
		//la cara de arriba primero
		
		glBegin(GL_POLYGON);
		glColor3f(0.27, 0.27, 0.27); glVertex3f(  origen, origen+alto ,origen  );    //vertice d
		glColor3f(0.24, 0.24, 0.24); glVertex3f(  origen,  origen+alto, origen+ancho );     //vertice a
		glColor3f(0.2, 0.2, 0.2); glVertex3f( origen+largo,  origen+alto, origen+ancho ); //vertice b
		glColor3f(0.35, 0.35, 0.35); glVertex3f( origen+largo, origen+alto , origen );      //vertice c
		glEnd();
		
		//cara de abajo
		glBegin(GL_POLYGON);
		glVertex3f(  origen, origen ,origen  );      //vertice e
		glVertex3f(  origen,  origen, origen+ancho );     //vertice f 
		glVertex3f( origen+largo,  origen, origen+ancho );  //vertice g
		glVertex3f( origen+largo, origen , origen );     //vertice h
		glEnd();
		
		
		
		//cara atras
		
		glBegin(GL_POLYGON);
		glVertex3f(  origen, origen ,origen  );  //vertice e
		glVertex3f( origen+largo, origen , origen );     //vertice h
		glVertex3f( origen+largo, origen+alto , origen );      //vertice c
		glVertex3f(  origen, origen+alto ,origen  );      //vertice d
		glEnd();
		
		
		//cara frontal
		glBegin(GL_POLYGON);
		glVertex3f(  origen,  origen, origen+ancho );     //vertice f 
		glVertex3f( origen+largo,  origen, origen+ancho );  //vertice g
		glVertex3f( origen+largo,  origen+alto, origen+ancho ); //vertice b
		glVertex3f(  origen,  origen+alto, origen+ancho );     //vertice a
		glEnd();
		
		
		//cara de la izquierda
		glBegin(GL_POLYGON);
		glVertex3f(  origen, origen+alto ,origen  );      //vertice d
		glVertex3f(  origen,  origen+alto, origen+ancho );     //vertice a
		glVertex3f(  origen,  origen, origen+ancho );     //vertice f 
		glVertex3f(  origen, origen ,origen  );  //vertice e
		glEnd();
		
		
		
		glBegin(GL_POLYGON);
		glVertex3f( origen+largo, origen+alto , origen );      //vertice c
		glVertex3f( origen+largo,  origen+alto, origen+ancho ); //vertice b
		glVertex3f( origen+largo,  origen, origen+ancho );  //vertice g
		glVertex3f( origen+largo, origen , origen );     //vertice h
		glEnd();
		
		
	}
	

	
	
	
	
}


void suelo2(float largo, float ancho, float alto){
	//crear la parte de atras
	int origen=0;
	if((largo!=0 && alto!=0)&& alto!=0){
		//la cara de arriba primero
		
		glBegin(GL_POLYGON);
		glColor3f(0.0, 1.0, 0.0); glVertex3f(  origen, origen+alto ,origen  );    //vertice d
		glColor3f(0.0, 0.29, 0.0); glVertex3f(  origen,  origen+alto, origen+ancho );     //vertice a
		glColor3f(0.0, 0.59, 0.0); glVertex3f( origen+largo,  origen+alto, origen+ancho ); //vertice b
		glColor3f(0.0, 0.31, 0.0); glVertex3f( origen+largo, origen+alto , origen );      //vertice c
		glEnd();
		
		//cara de abajo
		glBegin(GL_POLYGON);
		glVertex3f(  origen, origen ,origen  );      //vertice e
		glVertex3f(  origen,  origen, origen+ancho );     //vertice f 
		glVertex3f( origen+largo,  origen, origen+ancho );  //vertice g
		glVertex3f( origen+largo, origen , origen );     //vertice h
		glEnd();
		
		
		
		//cara atras
		
		glBegin(GL_POLYGON);
		glVertex3f(  origen, origen ,origen  );  //vertice e
		glVertex3f( origen+largo, origen , origen );     //vertice h
		glVertex3f( origen+largo, origen+alto , origen );      //vertice c
		glVertex3f(  origen, origen+alto ,origen  );      //vertice d
		glEnd();
		
		
		//cara frontal
		glBegin(GL_POLYGON);
		glVertex3f(  origen,  origen, origen+ancho );     //vertice f 
		glVertex3f( origen+largo,  origen, origen+ancho );  //vertice g
		glVertex3f( origen+largo,  origen+alto, origen+ancho ); //vertice b
		glVertex3f(  origen,  origen+alto, origen+ancho );     //vertice a
		glEnd();
		
		
		//cara de la izquierda
		glBegin(GL_POLYGON);
		glVertex3f(  origen, origen+alto ,origen  );      //vertice d
		glVertex3f(  origen,  origen+alto, origen+ancho );     //vertice a
		glVertex3f(  origen,  origen, origen+ancho );     //vertice f 
		glVertex3f(  origen, origen ,origen  );  //vertice e
		glEnd();
		
		
		
		glBegin(GL_POLYGON);
		glVertex3f( origen+largo, origen+alto , origen );      //vertice c
		glVertex3f( origen+largo,  origen+alto, origen+ancho ); //vertice b
		glVertex3f( origen+largo,  origen, origen+ancho );  //vertice g
		glVertex3f( origen+largo, origen , origen );     //vertice h
		glEnd();
		
		
	}
	
	
	
	
	
	
}

void luna(){
	
	
	const float dist_luna = 9;
	glColor3f(1.0, 1.0, 1.0);
	
	glPushMatrix();
	
	glTranslatef (dist_luna*cos(traslacion_luna*PI/180),dist_luna*sin(traslacion_luna*PI/180),0);
	luzx=dist_luna*cos(traslacion_luna*PI/180);
	luzy=dist_luna*sin(traslacion_luna*PI/180);
	luzz=0;
	glRotatef(rotacion_luna,0,0,1.0);
	glutSolidSphere(1,20,20);
	glPopMatrix();
}

void nube(){
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslated(0,5, 0);
	glScaled(1.3, 0.7, 1);
	glutSolidSphere(1,10,10);
	glPopMatrix();
	
	
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslated(0,4.6, 0);
	glScaled(2, 0.4, 1);
	glutSolidSphere(1,10,10);
	glPopMatrix();
	
	
	
	
	
	
	

}



  
static void resize(int width, int height){
	const float ar = (float) width / (float) height;
	
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho (-6.4,6.4,-4.8,4.8, 10.0, -10.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//glColor3f(1.0, 1.0, 1.0);
	//glColor3f(0.67, 1.0, 1.0);
	glClearColor(0.0, 0.0, 0.0, 0);
	
}




static void display(void){
	
	
	
	
	//glMatrixMode(GL_MODELVIEW);
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	
	
	glMatrixMode(GL_MODELVIEW);
	
	
	  
	
	
	iluminacion();
	glPushMatrix();

	glTranslated(-7, -5, -7);
	suelo(14,14,1);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(-7.05, -4.4, -7.05);
	suelo2(14.1,14.1,0.5);
	glPopMatrix();
	
	
	
	
	
	//---------------------------------------------------------------//
	glPushMatrix();
	glTranslated(-3.1,-3.3,-4);
	glScaled(0.6, 0.6, 0.6);
	conejo();
	glPopMatrix();
	//-------------------------------------------------------------//
	glPushMatrix();
	glTranslated(3.1,-3.5,-3.6);
	glRotated(180, 0,1,0);
	glScaled(0.4, 0.4, 0.4);
	conejo();
	glPopMatrix();
	//------------------------------------------------------------
	
	glPushMatrix();
	glTranslated(3.1,-3.5,-1.6);
	glRotated(180, 0,1,0);
	glScaled(0.4, 0.4, 0.4);
	conejo();
	glPopMatrix();
	//----------------------------------------------
	
	
	glPushMatrix();
	glScaled(0.2,0.2,0.2);
	
	animal();
	glPopMatrix();
	//--------------------------------------------------------------------
	glPushMatrix();
	luna();
	glPopMatrix();
	//--------------------------------------------------------------------
	glPushMatrix();
	glScaled(1.4,1.4,1.4);
	glTranslated(-3,-0.8, 5);
	glRotated(180, 0,1,0);
	arbol();
	
	glPopMatrix();
	//------------------------------------------------------------------
	
	glPushMatrix();
	glScaled(2,2,2);
	glRotated(10, 0,1,0);
	glTranslated(-3.3,0, 1);
	arbol();
	glPopMatrix();
	/////----------------------------------------------------------
	
	glPushMatrix();
	glScaled(1.5,1.6,1.6);
	glRotated(52, 0,1,0);
	glTranslated(-3.3,-0.6, 2);
	arbol();
	glPopMatrix();
	//-----------------------------------------------------------------
	glPushMatrix();
	glScaled(2,2,2);
	glRotated(180, 0,1,0);
	//glTranslated(1,-0.6, 1);
	arbol();
	glPopMatrix();
	
	//--------------------------------------------------------------
	
	glPushMatrix();
	glColor3f(0.27, 0.27, 0.27);
	glTranslated(2,-4,4);
	glScalef(1,0.4,1);
	glutSolidSphere(1,10,10);
	
	glPopMatrix();
	
	//-------------------------------------------------------------------
	glPushMatrix();
	glTranslated(0,0,-9);
	glScaled(0.2,0.2,0.2);
	
	animal();
	glPopMatrix();
	
	//------------------------------------------------------------------------
	
	
	glPushMatrix();
	glTranslated(5,1,-8);
	glScaled(0.2,0.2,0.2);
	
	animal();
	glPopMatrix();
	
	glPushMatrix();
	nube();
	glTranslatef(0.2, 1, 2);
	glScaled(0.7,0.6,0.9);
	nube();
	glPopMatrix();

	glutSwapBuffers();
}

static void idle(void)
{
	glutPostRedisplay();
}

static void timer(int x){
	if(modo_rotacion==1){
		
		rotacion_luna += 1;
		
	}
	if(modo_traslacion==1){
		traslacion_luna += 1.1;
		
	}
	glutTimerFunc(25, timer,0);
}



void ControlTeclado(unsigned char key, int x, int y){       // Necesario describir?
	switch (key)
	{
	case 'r':                                       // activa o desactiva el modo de rotacion
		if(modo_rotacion==0){
			modo_rotacion=1;
		}
		else{
			modo_rotacion=0;
		} 
		break;
	case 't':                                       // activa o desactiva el modo de traslacion
		if(modo_traslacion==0){
			modo_traslacion=1;
		}
		else{
			modo_traslacion=0;
		} 
		
		break;
	case 'n':                                       // activa o descativa el modo de ambas funciones
		if(modo_traslacion==0 || modo_rotacion==0){ // si esta uno de los dos modos descativados, o bien los dos
			modo_rotacion=1;                        // 'n' activa ambos modos
			modo_traslacion=1;
		}
		else{                                       // si ambos modos estan activados, 'n' desactiva ambos modos
			modo_rotacion=0;
			modo_traslacion=0;
		} 
		
		break;
	case 27:
		exit(0);
		break;
	}
	glutPostRedisplay();
}

void ControlFlechas(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP :                  // GLUT_KEY_UP y GLUT_KEY_DOWN para control de rotacion general vertical
		glRotatef(-1.0, 1.0, 0.0, 0.0); 
		break;
		
	case GLUT_KEY_DOWN :
		glRotatef(1.0, 1.0, 0.0, 0.0);
		break;
		
	case GLUT_KEY_LEFT :                // GLUT_KEY_LEFT y GLUT_KEY_RIGHT para control de rotacion general horizontal
		glRotatef(-1.0, 0.0, 1.0, 0.0);
		break;
		
	case GLUT_KEY_RIGHT :
		glRotatef(1.0, 0.0, 1.0, 0.0);
		break;
	}
	glutPostRedisplay();
}





int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(900,700);
	glutInitWindowPosition(10,10);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	init();
	glutCreateWindow("Rotacion & Traslacion");
	
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(ControlTeclado);
	glutSpecialFunc(ControlFlechas);
	glutIdleFunc(idle);
	glutTimerFunc(25, timer,0);
	
	glClearColor(0,0,0,0);
	glEnable(GL_DEPTH_TEST);
	//glutFullScreen();
	glutMainLoop();
	
	return
		EXIT_SUCCESS;
} 


