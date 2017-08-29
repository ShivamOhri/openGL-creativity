#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#define PI 3.1415926535898

#define drawOneLine(x1,y1,x2,y2) glBegin(GL_LINES); \
glVertex2f((x1),(y1)); glVertex2f((x2),(y2)); glEnd();


void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-200.0, 200.0, -200.0, 350.0, -1.0, 1.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}



void display(){

glClearColor(0.35, 0.5, 0.7, 0.0); //sky
glPointSize(5);
glLineWidth(10);
glClear(GL_COLOR_BUFFER_BIT);
GLint circle_points = 360;
GLint circle_Points = 40;
glEnable(GL_LINE_STIPPLE);


glBegin(GL_QUADS);  // designer pillar

  glColor3f(1.0,0.5,0.0);

  glVertex2f(100.0,-20.0);
  glVertex2f(130.0,-20.0);
  glVertex2f(130.0,-17.0);
  glVertex2f(100.0,-17.0);

  glVertex2f(100.0,-16.5);
  glVertex2f(130.0,-16.5);
  glVertex2f(130.0,-15.0);
  glVertex2f(100.0,-15.0);

  glVertex2f(100.0,-14.5);
  glVertex2f(130.0,-14.5);
  glVertex2f(130.0,-13.0);
  glVertex2f(100.0,-13.0);

   glVertex2f(100.0,-12.5);
  glVertex2f(130.0,-12.5);
  glVertex2f(130.0,-11.0);
  glVertex2f(100.0,-11.0);
//
glColor3f(255.0,215.0,0.0);

  glVertex2f(105.0,-11.0);
  glVertex2f(125.0,-11.0);
  glVertex2f(125.0,-8.0);
  glVertex2f(105.0,-8.0);
//
glColor3f(1.0,0.5,0.0);

  glVertex2f(100.0,-7.5);
  glVertex2f(130.0,-7.5);
  glVertex2f(130.0,-6.0);
  glVertex2f(100.0,-6.0);

  glVertex2f(100.0,-5.5);
  glVertex2f(130.0,-5.5);
  glVertex2f(130.0,-4.0);
  glVertex2f(100.0,-4.0);

   glVertex2f(100.0,-3.5);
  glVertex2f(130.0,-3.5);
  glVertex2f(130.0,-2.0);
  glVertex2f(100.0,-2.0);
//
glColor3f(255.0,215.0,0.0);

  glVertex2f(105.0,-2.0);
  glVertex2f(125.0,-2.0);
  glVertex2f(125.0,1.0);
  glVertex2f(105.0,1.0);
//
glColor3f(1.0,0.5,0.0);

  glVertex2f(100.0,1.5);
  glVertex2f(130.0,1.5);
  glVertex2f(130.0,3.0);
  glVertex2f(100.0,3.0);

  glVertex2f(100.0,3.5);
  glVertex2f(130.0,3.5);
  glVertex2f(130.0,5.0);
  glVertex2f(100.0,5.0);

   glVertex2f(100.0,5.5);
  glVertex2f(130.0,5.5);
  glVertex2f(130.0,7.0);
  glVertex2f(100.0,7.0);
//
glColor3f(255.0,215.0,0.0);

  glVertex2f(105.0,7.0);
  glVertex2f(125.0,7.0);
  glVertex2f(125.0,40.0);
  glVertex2f(105.0,40.0);
//
glColor3f(1.0,0.5,0.0);

  glVertex2f(100.0,40.5);
  glVertex2f(130.0,40.5);
  glVertex2f(130.0,42.0);
  glVertex2f(100.0,42.0);

  glVertex2f(100.0,42.5);
  glVertex2f(130.0,42.5);
  glVertex2f(130.0,44.0);
  glVertex2f(100.0,44.0);

  glVertex2f(100.0,44.5);
  glVertex2f(130.0,44.5);
  glVertex2f(130.0,46.0);
  glVertex2f(100.0,46.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(105.0,46.0);
  glVertex2f(125.0,46.0);
  glVertex2f(125.0,49.0);
  glVertex2f(105.0,49.0);

  //
  glColor3f(1.0,0.5,0.0);

     glVertex2f(100.0,49.5);
  glVertex2f(130.0,49.5);
  glVertex2f(130.0,51.0);
  glVertex2f(100.0,51.0);

  glVertex2f(100.0,51.5);
  glVertex2f(130.0,51.5);
  glVertex2f(130.0,53.0);
  glVertex2f(100.0,53.0);

  glVertex2f(100.0,53.5);
  glVertex2f(130.0,53.5);
  glVertex2f(130.0,55.0);
  glVertex2f(100.0,55.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(105.0,55.0);
  glVertex2f(125.0,55.0);
  glVertex2f(125.0,88.0);
  glVertex2f(105.0,88.0);
//
  glColor3f(1.0,0.5,0.0);

 glVertex2f(100.0,88.5);
  glVertex2f(130.0,88.5);
  glVertex2f(130.0,90.0);
  glVertex2f(100.0,90.0);

   glVertex2f(100.0,90.5);
  glVertex2f(130.0,90.5);
  glVertex2f(130.0,92.0);
  glVertex2f(100.0,92.0);

   glVertex2f(100.0,92.5);
  glVertex2f(130.0,92.5);
  glVertex2f(130.0,94.0);
  glVertex2f(100.0,94.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(105.0,94.0);
  glVertex2f(125.0,94.0);
  glVertex2f(125.0,97.0);
  glVertex2f(105.0,97.0);
//
glColor3f(1.0,0.5,0.0);

  glVertex2f(100.0,97.5);
  glVertex2f(130.0,97.5);
  glVertex2f(130.0,99.0);
  glVertex2f(100.0,99.0);

   glVertex2f(100.0,99.5);
  glVertex2f(130.0,99.5);
  glVertex2f(130.0,101.0);
  glVertex2f(100.0,101.0);

   glVertex2f(100.0,101.5);
  glVertex2f(130.0,101.5);
  glVertex2f(130.0,103.0);
  glVertex2f(100.0,103.0);
 //
  glColor3f(255.0,215.0,0.0);

    glVertex2f(105.0,103.0);
  glVertex2f(125.0,103.0);
  glVertex2f(125.0,106.0);
  glVertex2f(105.0,106.0);
//
  glColor3f(1.0,0.5,0.0);

  glVertex2f(100.0,106.5);
  glVertex2f(130.0,106.5);
  glVertex2f(130.0,108.0);
  glVertex2f(100.0,108.0);

   glVertex2f(100.0,108.5);
  glVertex2f(130.0,108.5);
  glVertex2f(130.0,110.0);
  glVertex2f(100.0,110.0);

   glVertex2f(100.0,110.5);
  glVertex2f(130.0,110.5);
  glVertex2f(130.0,112.0);
  glVertex2f(100.0,112.0);
//
 glColor3f(255.0,215.0,0.0);

  glVertex2f(105.0,112.0);
  glVertex2f(125.0,112.0);
  glVertex2f(125.0,145.0);
  glVertex2f(105.0,145.0);
//
  glColor3f(1.0,0.5,0.0);

 glVertex2f(100.0,145.5);
  glVertex2f(130.0,145.5);
  glVertex2f(130.0,147.0);
  glVertex2f(100.0,147.0);

   glVertex2f(100.0,147.5);
  glVertex2f(130.0,147.5);
  glVertex2f(130.0,149.0);
  glVertex2f(100.0,149.0);

   glVertex2f(100.0,149.5);
  glVertex2f(130.0,149.5);
  glVertex2f(130.0,151.0);
  glVertex2f(100.0,151.0);
 //
  glColor3f(255.0,215.0,0.0);

    glVertex2f(105.0,151.0);
  glVertex2f(125.0,151.0);
  glVertex2f(125.0,154.0);
  glVertex2f(105.0,154.0);

  //
  glColor3f(1.0,0.5,0.0);

glVertex2f(100.0,154.5);
  glVertex2f(130.0,154.5);
  glVertex2f(130.0,156.0);
  glVertex2f(100.0,156.0);

   glVertex2f(100.0,156.5);
  glVertex2f(130.0,156.5);
  glVertex2f(130.0,158.0);
  glVertex2f(100.0,158.0);

   glVertex2f(100.0,158.5);
  glVertex2f(130.0,158.5);
  glVertex2f(130.0,160.0);
  glVertex2f(100.0,160.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(105.0,160.0);
  glVertex2f(125.0,160.0);
  glVertex2f(125.0,163.0);
  glVertex2f(105.0,163.0);
//
  glColor3f(1.0,0.5,0.0);

  glVertex2f(100.0,163.5);
  glVertex2f(130.0,163.5);
  glVertex2f(130.0,165.0);
  glVertex2f(100.0,165.0);

   glVertex2f(100.0,165.5);
  glVertex2f(130.0,165.5);
  glVertex2f(130.0,167.0);
  glVertex2f(100.0,167.0);

   glVertex2f(100.0,167.5);
  glVertex2f(130.0,167.5);
  glVertex2f(130.0,169.0);
  glVertex2f(100.0,169.0);
 //
 glColor3f(255.0,215.0,0.0);

  glVertex2f(107.0,169.0);
  glVertex2f(123.0,169.0);
  glVertex2f(123.0,172.0);
  glVertex2f(107.0,172.0);

  glVertex2f(108.0,172.0);
  glVertex2f(122.0,172.0);
  glVertex2f(122.0,190.0);
  glVertex2f(108.0,190.0);
/////////////////////////////////////////////////
glColor3f(1.0,0.5,0.0);

  glVertex2f(-100.0,-20.0);
  glVertex2f(-130.0,-20.0);
  glVertex2f(-130.0,-17.0);
  glVertex2f(-100.0,-17.0);

  glVertex2f(-100.0,-16.5);
  glVertex2f(-130.0,-16.5);
  glVertex2f(-130.0,-15.0);
  glVertex2f(-100.0,-15.0);

  glVertex2f(-100.0,-14.5);
  glVertex2f(-130.0,-14.5);
  glVertex2f(-130.0,-13.0);
  glVertex2f(-100.0,-13.0);

   glVertex2f(-100.0,-12.5);
  glVertex2f(-130.0,-12.5);
  glVertex2f(-130.0,-11.0);
  glVertex2f(-100.0,-11.0);
//
  glColor3f(255.0,215.0,0.0);

  glVertex2f(-105.0,-11.0);
  glVertex2f(-125.0,-11.0);
  glVertex2f(-125.0,-8.0);
  glVertex2f(-105.0,-8.0);
//
glColor3f(1.0,0.5,0.0);

  glVertex2f(-100.0,-7.5);
  glVertex2f(-130.0,-7.5);
  glVertex2f(-130.0,-6.0);
  glVertex2f(-100.0,-6.0);

  glVertex2f(-100.0,-5.5);
  glVertex2f(-130.0,-5.5);
  glVertex2f(-130.0,-4.0);
  glVertex2f(-100.0,-4.0);

   glVertex2f(-100.0,-3.5);
  glVertex2f(-130.0,-3.5);
  glVertex2f(-130.0,-2.0);
  glVertex2f(-100.0,-2.0);
//
glColor3f(255.0,215.0,0.0);

  glVertex2f(-105.0,-2.0);
  glVertex2f(-125.0,-2.0);
  glVertex2f(-125.0,1.0);
  glVertex2f(-105.0,1.0);
//
glColor3f(1.0,0.5,0.0);

  glVertex2f(-100.0,1.5);
  glVertex2f(-130.0,1.5);
  glVertex2f(-130.0,3.0);
  glVertex2f(-100.0,3.0);

  glVertex2f(-100.0,3.5);
  glVertex2f(-130.0,3.5);
  glVertex2f(-130.0,5.0);
  glVertex2f(-100.0,5.0);

   glVertex2f(-100.0,5.5);
  glVertex2f(-130.0,5.5);
  glVertex2f(-130.0,7.0);
  glVertex2f(-100.0,7.0);
//
glColor3f(255.0,215.0,0.0);

   glVertex2f(-105.0,7.0);
  glVertex2f(-125.0,7.0);
  glVertex2f(-125.0,40.0);
  glVertex2f(-105.0,40.0);

//
glColor3f(1.0,0.5,0.0);

   glVertex2f(-100.0,40.5);
  glVertex2f(-130.0,40.5);
  glVertex2f(-130.0,42.0);
  glVertex2f(-100.0,42.0);

  glVertex2f(-100.0,42.5);
  glVertex2f(-130.0,42.5);
  glVertex2f(-130.0,44.0);
  glVertex2f(-100.0,44.0);

  glVertex2f(-100.0,44.5);
  glVertex2f(-130.0,44.5);
  glVertex2f(-130.0,46.0);
  glVertex2f(-100.0,46.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(-105.0,46.0);
  glVertex2f(-125.0,46.0);
  glVertex2f(-125.0,49.0);
  glVertex2f(-105.0,49.0);
//
  glColor3f(1.0,0.5,0.0);

     glVertex2f(-100.0,49.5);
  glVertex2f(-130.0,49.5);
  glVertex2f(-130.0,51.0);
  glVertex2f(-100.0,51.0);

  glVertex2f(-100.0,51.5);
  glVertex2f(-130.0,51.5);
  glVertex2f(-130.0,53.0);
  glVertex2f(-100.0,53.0);

  glVertex2f(-100.0,53.5);
  glVertex2f(-130.0,53.5);
  glVertex2f(-130.0,55.0);
  glVertex2f(-100.0,55.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(-105.0,55.0);
  glVertex2f(-125.0,55.0);
  glVertex2f(-125.0,88.0);
  glVertex2f(-105.0,88.0);
//
  glColor3f(1.0,0.5,0.0);

 glVertex2f(-100.0,88.5);
  glVertex2f(-130.0,88.5);
  glVertex2f(-130.0,90.0);
  glVertex2f(-100.0,90.0);

   glVertex2f(-100.0,90.5);
  glVertex2f(-130.0,90.5);
  glVertex2f(-130.0,92.0);
  glVertex2f(-100.0,92.0);

   glVertex2f(-100.0,92.5);
  glVertex2f(-130.0,92.5);
  glVertex2f(-130.0,94.0);
  glVertex2f(-100.0,94.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(-105.0,94.0);
  glVertex2f(-125.0,94.0);
  glVertex2f(-125.0,97.0);
  glVertex2f(-105.0,97.0);
//
  glColor3f(1.0,0.5,0.0);

glVertex2f(-100.0,97.5);
  glVertex2f(-130.0,97.5);
  glVertex2f(-130.0,99.0);
  glVertex2f(-100.0,99.0);

   glVertex2f(-100.0,99.5);
  glVertex2f(-130.0,99.5);
  glVertex2f(-130.0,101.0);
  glVertex2f(-100.0,101.0);

   glVertex2f(-100.0,101.5);
  glVertex2f(-130.0,101.5);
  glVertex2f(-130.0,103.0);
  glVertex2f(-100.0,103.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(-105.0,103.0);
  glVertex2f(-125.0,103.0);
  glVertex2f(-125.0,106.0);
  glVertex2f(-105.0,106.0);
//
  glColor3f(1.0,0.5,0.0);

  glVertex2f(-100.0,106.5);
  glVertex2f(-130.0,106.5);
  glVertex2f(-130.0,108.0);
  glVertex2f(-100.0,108.0);

   glVertex2f(-100.0,108.5);
  glVertex2f(-130.0,108.5);
  glVertex2f(-130.0,110.0);
  glVertex2f(-100.0,110.0);

   glVertex2f(-100.0,110.5);
  glVertex2f(-130.0,110.5);
  glVertex2f(-130.0,112.0);
  glVertex2f(-100.0,112.0);
//
 glColor3f(255.0,215.0,0.0);

 glVertex2f(-105.0,112.0);
  glVertex2f(-125.0,112.0);
  glVertex2f(-125.0,145.0);
  glVertex2f(-105.0,145.0);
//
  glColor3f(1.0,0.5,0.0);

 glVertex2f(-100.0,145.5);
  glVertex2f(-130.0,145.5);
  glVertex2f(-130.0,147.0);
  glVertex2f(-100.0,147.0);

   glVertex2f(-100.0,147.5);
  glVertex2f(-130.0,147.5);
  glVertex2f(-130.0,149.0);
  glVertex2f(-100.0,149.0);

   glVertex2f(-100.0,149.5);
  glVertex2f(-130.0,149.5);
  glVertex2f(-130.0,151.0);
  glVertex2f(-100.0,151.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(-105.0,151.0);
  glVertex2f(-125.0,151.0);
  glVertex2f(-125.0,154.0);
  glVertex2f(-105.0,154.0);
//
  glColor3f(1.0,0.5,0.0);

glVertex2f(-100.0,154.5);
  glVertex2f(-130.0,154.5);
  glVertex2f(-130.0,156.0);
  glVertex2f(-100.0,156.0);

   glVertex2f(-100.0,156.5);
  glVertex2f(-130.0,156.5);
  glVertex2f(-130.0,158.0);
  glVertex2f(-100.0,158.0);

   glVertex2f(-100.0,158.5);
  glVertex2f(-130.0,158.5);
  glVertex2f(-130.0,160.0);
  glVertex2f(-100.0,160.0);
//
  glColor3f(255.0,215.0,0.0);

    glVertex2f(-105.0,160.0);
  glVertex2f(-125.0,160.0);
  glVertex2f(-125.0,163.0);
  glVertex2f(-105.0,163.0);
//
  glColor3f(1.0,0.5,0.0);

  glVertex2f(-100.0,163.5);
  glVertex2f(-130.0,163.5);
  glVertex2f(-130.0,165.0);
  glVertex2f(-100.0,165.0);

   glVertex2f(-100.0,165.5);
  glVertex2f(-130.0,165.5);
  glVertex2f(-130.0,167.0);
  glVertex2f(-100.0,167.0);

   glVertex2f(-100.0,167.5);
  glVertex2f(-130.0,167.5);
  glVertex2f(-130.0,169.0);
  glVertex2f(-100.0,169.0);
  //
 glColor3f(255.0,215.0,0.0);

   glVertex2f(-107.0,169.0);
  glVertex2f(-123.0,169.0);
  glVertex2f(-123.0,172.0);
  glVertex2f(-107.0,172.0);


   glVertex2f(-108.0,172.0);
  glVertex2f(-122.0,172.0);
  glVertex2f(-122.0,190.0);
  glVertex2f(-108.0,190.0);

glEnd();


glBegin(GL_QUADS);  //building front wall

  glColor3f(255.0,215.0,0.0);

glVertex2f(80.0,80.0);
  glVertex2f(80.0,-100.0);
  glVertex2f(-80.0,-100.0);
  glVertex2f(-80.0,80.0);

  glColor3f(1.0,0.6,0.0);

glVertex2f(75.0,80.0);
  glVertex2f(75.0,-100.0);
  glVertex2f(-75.0,-100.0);
  glVertex2f(-75.0,80.0);

glEnd();

glBegin(GL_POLYGON);  // grass

   glColor3f(0.3,0.7,0.2);

   glVertex2f(-220.0,-20.0);
  glVertex2f(220.0,-20.0);
  glVertex2f(220.0,-130.0);
  glVertex2f(-220.0,-130.0);
glEnd();

glBegin(GL_POLYGON);  // sand

   glColor3f(0.5,0.5,0.2);

   glVertex2f(-30.0,-20.0);
  glVertex2f(30.0,-20.0);
  glVertex2f(60.0,-130.0);
  glVertex2f(-60.0,-130.0);
glEnd();

glBegin(GL_POLYGON);  // road
 glColor3f(0.6,0.6,0.5);
   glVertex2f(-20.0,-20.0);
  glVertex2f(20.0,-20.0);
  glVertex2f(50.0,-130.0);
  glVertex2f(-50.0,-130.0);
glEnd();

glBegin(GL_QUADS);  // road lines
 glColor3f(1.0,1.0,1.0);
   glVertex2f(0.0,-30.0);
  glVertex2f(3.0,-30.0);
  glVertex2f(5.0,-45.0);
  glVertex2f(-2.0,-45.0);

    glVertex2f(-1.0,-60.0);
  glVertex2f(4.0,-60.0);
  glVertex2f(6.0,-80.0);
  glVertex2f(-3.0,-80.0);

   glVertex2f(-2.0,-95.0);
  glVertex2f(6.0,-95.0);
  glVertex2f(8.0,-120.0);
  glVertex2f(-4.0,-120.0);
glEnd();


glBegin(GL_LINES);
/* lights
  glColor3f(0.0,0.0,0.0);

  glVertex2f(95.0,-30.0);
  glVertex2f(95.0,-120.0);

  glVertex2f(95.0,-30.0);
  glVertex2f(75.0,-30.0);

  glVertex2f(-95.0,-30.0);
  glVertex2f(-95.0,-120.0);

  glVertex2f(-95.0,-30.0);
  glVertex2f(-75.0,-30.0);

  glVertex2f(85.0,20.0);
  glVertex2f(85.0,-50.0);

  glVertex2f(85.0,20.0);
  glVertex2f(65.0,20.0);

  glVertex2f(-85.0,20.0);
  glVertex2f(-85.0,-50.0);

  glVertex2f(-85.0,20.0);
  glVertex2f(-65.0,20.0);

*/

//roof

  glColor3f(255.0,215.0,0.0);
  glVertex2f(-80.0,80.0);
  glVertex2f(80.0,80.0);
  glVertex2f(-75.0,87.0);
  glVertex2f(75.0,87.0);
  glVertex2f(-70.0,94.0);
  glVertex2f(70.0,94.0);
  glVertex2f(-65.0,101.0);
  glVertex2f(65.0,101.0);
  glVertex2f(-60.0,108.0);
  glVertex2f(60.0,108.0);
  glVertex2f(-55.0,115.0);
  glVertex2f(55.0,115.0);
  glVertex2f(-50.0,122.0);
  glVertex2f(50.0,122.0);
  glVertex2f(-45.0,129.0);
  glVertex2f(45.0,129.0);
  glVertex2f(-40.0,136.0);
  glVertex2f(40.0,136.0);
  glVertex2f(-35.0,143.0);
  glVertex2f(35.0,143.0);
  glVertex2f(-30.0,150.0);
  glVertex2f(30.0,150.0);
   glVertex2f(-25.0,157.0);
  glVertex2f(25.0,157.0);

glEnd();
glBegin(GL_TRIANGLES);//roof top

  glColor3f(255.0,215.0,0.0);
  glVertex2f(-25.0,157.0);
  glVertex2f(25.0,157.0);
  glVertex2f(0.0,187.0);

glEnd();


glBegin(GL_POLYGON);  //sun
for ( int i = 0; i < circle_points; i++) {
        glColor3f(1.0,0.4,0.0);
 float x =15*cos(i)-150;
 float y =15*sin(i)+300;

 glVertex2f(x,y);
}

glEnd();

glBegin(GL_LINE_LOOP);  //sun rays1
for ( int i = 0; i < circle_Points; i++) {
        glColor3f(1.0,0.7,0.0);
 float x =20*cos(i)-150;
 float y =20*sin(i)+300;

 glVertex2f(x,y);
}

glEnd();

glBegin(GL_LINE_LOOP);  //sun rays2
for ( int i = 0; i < circle_Points; i++) {
        glColor3f(10.0,5.0,0.0);
 float x =27*cos(i)-150;
 float y =27*sin(i)+300;

 glVertex2f(x,y);
}

glEnd();


glBegin(GL_POLYGON);  //pillar hole 1
for ( int i = 0; i < circle_points; i++) {
        glColor3f(0.35, 0.5, 0.7);
 float x =8*cos(i)+115;
 float y =8*sin(i)+24;

 glVertex2f(x,y);
}

glEnd();

glBegin(GL_POLYGON);  //pillar hole 2
for ( int i = 0; i < circle_points; i++) {
        glColor3f(0.35, 0.5, 0.7);
 float x =8*cos(i)+115;
 float y =8*sin(i)+70;

 glVertex2f(x,y);
}

glEnd();


glBegin(GL_POLYGON);  //pillar hole 3
for ( int i = 0; i < circle_points; i++) {
        glColor3f(0.35, 0.5, 0.7);
 float x =8*cos(i)+115;
 float y =8*sin(i)+127;

 glVertex2f(x,y);
}

glEnd();


glBegin(GL_POLYGON);  //pillar hole 4
for ( int i = 0; i < circle_points; i++) {
        glColor3f(0.35, 0.5, 0.7);
 float x =6*cos(i)+115;
 float y =6*sin(i)+186;

 glVertex2f(x,y);
}

glEnd();
/////////

glBegin(GL_POLYGON);  //pillar hole 5
for ( int i = 0; i < circle_points; i++) {
        glColor3f(0.35, 0.5, 0.7);
 float x =8*cos(i)-115;
 float y =8*sin(i)+24;

 glVertex2f(x,y);
}

glEnd();

glBegin(GL_POLYGON);  //pillar hole 6
for ( int i = 0; i < circle_points; i++) {
        glColor3f(0.35, 0.5, 0.7);
 float x =8*cos(i)-115;
 float y =8*sin(i)+70;

 glVertex2f(x,y);
}

glEnd();


glBegin(GL_POLYGON);  //pillar hole 7
for ( int i = 0; i < circle_points; i++) {
        glColor3f(0.35, 0.5, 0.7);
 float x =8*cos(i)-115;
 float y =8*sin(i)+127;

 glVertex2f(x,y);
}

glEnd();



glBegin(GL_POLYGON);  //pillar hole 8
for ( int i = 0; i < circle_points; i++) {
        glColor3f(0.35, 0.5, 0.7);
 float x =6*cos(i)-115;
 float y =6*sin(i)+186;

 glVertex2f(x,y);
}

glEnd();


glBegin(GL_POLYGON);  //cloud small
for ( int i = 0; i < circle_points; i++) {
        glColor3f(1.0,1.0,1.0);
 float x =12*cos(i)-40;
 float y =16*sin(i)+270;

 glVertex2f(x,y);
}

glEnd();
glBegin(GL_POLYGON);  //cloud big
for ( int i = 0; i < circle_points; i++) {
        glColor3f(1.0,1.0,1.0);
 float x =17*cos(i)-17;
 float y =20*sin(i)+270;

 glVertex2f(x,y);
}

glEnd();

glBegin(GL_POLYGON);  //cloud small
for ( int i = 0; i < circle_points; i++) {
        glColor3f(1.0,1.0,1.0);
 float x =14*cos(i)+2;
 float y =16*sin(i)+270;

 glVertex2f(x,y);
}

glEnd();



glBegin(GL_POLYGON);  //cloud small
for ( int i = 0; i < circle_points; i++) {
        glColor3f(1.0,1.0,1.0);
 float x =17*cos(i)+40;
 float y =16*sin(i)+300;

 glVertex2f(x,y);
}

glEnd();
glBegin(GL_POLYGON);  //cloud big
for ( int i = 0; i < circle_points; i++) {
        glColor3f(1.0,1.0,1.0);
 float x =17*cos(i)+67;
 float y =23*sin(i)+300;

 glVertex2f(x,y);
}

glEnd();

glBegin(GL_POLYGON);  //cloud small
for ( int i = 0; i < circle_points; i++) {
        glColor3f(1.0,1.0,1.0);
 float x =14*cos(i)+87;
 float y =16*sin(i)+300;

 glVertex2f(x,y);
}

glEnd();


glLineStipple(5, 0x1C47); /* dash/dot/dash */
glColor3f(1.0,0.0,0.0);
drawOneLine(-75.0, 70.0, 75.0, 70.0);
glColor3f(1.0,0.2,0.0);
drawOneLine(-70.0, 60.0, 70.0, 60.0);
glColor3f(1.0,0.4,0.0);
drawOneLine(-75.0, 50.0, 75.0, 50.0);
glColor3f(1.0,0.0,0.0);
drawOneLine(-70.0, 40.0, 70.0, 40.0);
glColor3f(1.0,0.2,0.0);
drawOneLine(-75.0, 30.0, 75.0, 30.0);
glColor3f(1.0,0.4,0.0);
drawOneLine(-70.0, 20.0, 70.0, 20.0);
glColor3f(1.0,0.0,0.0);
drawOneLine(-75.0, 10.0, 75.0, 10.0);
glColor3f(1.0,0.2,0.0);
drawOneLine(-70.0, 0.0, 70.0, 0.0);
glColor3f(1.0,0.4,0.0);
drawOneLine(-75.0, -10.0, 75.0, -10.0);
glColor3f(1.0,0.0,0.0);


glBegin(GL_QUADS);   //door

 glColor3f(255.0,215.0,0.0);

glVertex2f(15.0,40.0);
  glVertex2f(15.0,-20.0);
  glVertex2f(-15.0,-20.0);
  glVertex2f(-15.0,40.0);

  glColor3f(1.0,0.8,0.0);

glVertex2f(10.0,35.0);
  glVertex2f(10.0,-20.0);
  glVertex2f(-10.0,-20.0);
  glVertex2f(-10.0,35.0);

glEnd();


glColor3f(1.0,1.0,1.0);

char c[]="500047614";
glRasterPos2f(-150.0,-150.0);
for(int i=0;i<strlen(c);i++)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,c[i]);
char cd[]="SHIVAM OHRI";
glRasterPos2f(100,-150);
for(int i=0;i<strlen(cd);i++)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,cd[i]);



glFlush();



}




int main(int argc,char**argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(1000,1000);
glutCreateWindow("title");
glutReshapeFunc(reshape);
glutDisplayFunc(display);
glutMainLoop();
return 0;

}

