#include<bits/stdc++.h>
#include<GL/glut.h>
#include<math.h>
#include<dos.h>
#include<time.h>
using namespace std;
long double tr[3]={0,0,700};
long double theta[3]={0,0,0};
long double th=0;
long double totheta=(M_PI/(long double)180.0);
int menu_id;
int stop=1,tree=1,start=0,ending=1;
float sf=2;
GLfloat speed=-0.05*sf;
int gear_no;
void light()
{
    GLfloat lightambient[]={0.5f,0.5f,0.5f,1.0};
    GLfloat lightposition[]={500.0f,200.0f,00.0f,0.0f};
    GLfloat lightdiffuse[]={0.7f,0.7f,0.6f,1.0};
    GLfloat lightspecular[]={0.5f,0.5f,0.5f,1.0};
    glLightfv(GL_LIGHT0,GL_POSITION,lightposition);
    glLightfv(GL_LIGHT0,GL_DIFFUSE,lightdiffuse);
    glLightfv(GL_LIGHT0,GL_AMBIENT,lightambient);
    glLightfv(GL_LIGHT0,GL_SPECULAR,lightspecular);
}
void mat1()
{
    GLfloat ambient[]={1.0f,0.0f,0.0f,1.0f};
    GLfloat diffuse[]={1.0f,0.0f,0.0f,1.0f};
    GLfloat specular[]={1.0f,0.0f,0.0f,1.0f};
    GLfloat shinness[]={50.0f};
    GLfloat emission[]={0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
}
void mat2()
{
    GLfloat ambient[]={0.1f,0.1f,0.1f,1.0f};
    GLfloat diffuse[]={0.1f,0.2f,0.2f,1.0f};
    GLfloat specular[]={0.2f,0.2f,0.2f,1.0f};
    GLfloat shinness[]={10.0f};
    GLfloat emission[]={0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
}
void mat3()
{
    GLfloat ambient[]={0.3f,0.3f,0.3f,1.0f};
    GLfloat diffuse[]={0.4f,0.4f,0.4f,1.0f};
    GLfloat specular[]={0.4f,0.4f,0.4f,1.0f};
    GLfloat shinness[]={20.0f};
    GLfloat emission[]={0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
}
void mat4()
{
    GLfloat ambient[]={0.7f,0.7f,0.9f,1.0f};
    GLfloat diffuse[]={0.7f,0.7f,0.9f,1.0f};
    GLfloat specular[]={0.7f,0.7f,0.9f,1.0f};
    GLfloat shinness[]={10.0f};
    GLfloat emission[]={0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
}
void mat5()
{
    GLfloat ambient[]={0.7f,0.7f,0.0f,1.0f};
    GLfloat diffuse[]={0.7f,0.7f,0.0f,1.0f};
    GLfloat specular[]={0.7f,0.7f,0.0f,1.0f};
    GLfloat shinness[]={10.0f};
    GLfloat emission[]={1.0f,1.0f,0.2f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
}
void mat6()
{
    GLfloat ambient[]={0.05f,0.05f,0.05f,1.0f};
    GLfloat diffuse[]={0.05f,0.05f,0.05f,1.0f};
    GLfloat specular[]={0.05f,0.05f,0.05f,1.0f};
    GLfloat shinness[]={10.0f};
    GLfloat emission[]={0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
}
void mat7()
{
    GLfloat ambient[]={0.1f,0.7f,0.1f,1.0f};
    GLfloat diffuse[]={0.1f,0.7f,0.1f,1.0f};
    GLfloat specular[]={0.1f,0.7f,0.1f,1.0f};
    GLfloat shinness[]={30.0f};
    GLfloat emission[]={0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
}
void mat8()
{
    GLfloat ambient[]={0.4f,0.1f,0.1f,1.0f};
    GLfloat diffuse[]={0.4f,0.1f,0.1f,1.0f};
    GLfloat specular[]={0.4f,0.3f,0.1f,1.0f};
    GLfloat shinness[]={30.0f};
    GLfloat emission[]={0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
}
void mat9()
{
    GLfloat ambient[]={0.2f,0.8f,0.2f,1.0f};
    GLfloat diffuse[]={0.2f,0.9f,0.2f,1.0f};
    GLfloat specular[]={0.2f,0.8f,0.2,1.0f};
    GLfloat shinness[]={30.0f};
    GLfloat emission[]={0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specular);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SHININESS,shinness);
    glMaterialfv(GL_FRONT_AND_BACK,GL_EMISSION,emission);
}
void drawCircle(float radius,int a)
{
   for (int i=0; i <= 360; i=i+a)
   {
      float degInRad = i*0.0174532926;
      glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0);
   }
}
void drawHorCircle(GLfloat radius,GLfloat height)
{
    glBegin(GL_TRIANGLES);

    for(int i=0;i<=360;i=i+2)
    {
        float degInRad = i*0.0174532926,degInRad1 = (i+2)*0.0174532926;

        glVertex3f(cos(degInRad)*radius,height,sin(degInRad)*radius);
        glVertex3f(cos(degInRad1)*radius,height,sin(degInRad1)*radius);
        glVertex3f(0,height,0);
    }
    glEnd();
}
void drawSquareHor(GLfloat s,GLfloat height,int a=0)
{
    glPushMatrix();
    if(a==1)
    glTranslated(0,0,s*2*a);
    glBegin(GL_QUADS);

    glVertex3f(-s,height,-s);
    glVertex3f(s,height,-s);
    glVertex3f(s,height,s);
    glVertex3f(-s,height,s);
    glEnd();
    glPopMatrix();
}
void drawtree(GLfloat h,GLfloat x,GLfloat y)
{

    glPushMatrix();
    mat8();
    glTranslated(x,0,y);
    glRotated(-90,1,0,0);
    GLUquadricObj *obj=gluNewQuadric();
    gluCylinder(obj,10*h,10*h,60*h,10,5);
    glPopMatrix();
    glPushMatrix();
    mat9();
    glTranslated(x,60*h,y);
    glRotated(-90,1,0,0);
    glutSolidCone(60*h,150*h,20,20);
    glPopMatrix();
}
void quadall(GLfloat arr[4][3],GLfloat ar[3],int a=0)
{
    glNormal3fv(ar);
    glVertex3fv(arr[0]);
    glVertex3fv(arr[1]);
    glVertex3fv(arr[2]);
    glVertex3fv(arr[3]);

    if(a==0)
    {
    for(int i=0;i<4;i++)
    {
        arr[i][2]=-arr[i][2];
    }
    ar[2]=-ar[2];
    glNormal3fv(ar);
    glVertex3fv(arr[0]);
    glVertex3fv(arr[1]);
    glVertex3fv(arr[2]);
    glVertex3fv(arr[3]);
    }
}
void tri(GLfloat arr[3][3],GLfloat ar[3],int a=0)
{
    glNormal3fv(ar);
    glVertex3fv(arr[0]);
    glVertex3fv(arr[1]);
    glVertex3fv(arr[2]);
    glVertex3fv(arr[2]);
    if(a==0)
    {
    for(int i=0;i<3;i++)
    {
        arr[i][2]=-arr[i][2];
    }
    ar[2]=-ar[2];
    glNormal3fv(ar);
    glVertex3fv(arr[0]);
    glVertex3fv(arr[1]);
    glVertex3fv(arr[2]);
    glVertex3fv(arr[2]);
    }
}
void menu(int num){
switch(num)
{
    case 1:
    speed=-0.05*sf;
    break;
    case 2:
    speed=-0.08*sf;
    break;
    case 3:
    speed=-0.12*sf;
    break;
    case 4:
    speed=-0.16*sf;
    break;
    case 5:
    speed=-0.22*sf;
    break;
    case 6:
    speed=0.05*sf;
    break;
    case 7:
    stop+=1;
    stop%=2;
    break;
    case 8:
    tree+=1;
    tree%=2;
    break;
    case 9:
    start=0;
    tr[0]=0;
    tr[1]=0;
    tr[2]=700;
    theta[0]=0;
    theta[1]=0;
    theta[2]=0;
    stop=1;
    tree=1;
    speed=-0.05*sf;
    ending=1;
    break;
    case 0:
    ending=0;
    start=1;
    break;
}
  glutPostRedisplay();
}
void createMenu(void){
    gear_no = glutCreateMenu(menu);
    glutAddMenuEntry("1st GEAR", 1);
    glutAddMenuEntry("2nd GEAR", 2);
    glutAddMenuEntry("3rd GEAR", 3);
    glutAddMenuEntry("4th GEAR", 4);
    glutAddMenuEntry("5th GEAR", 5);
    glutAddMenuEntry("REVERSE GEAR", 6);
    menu_id = glutCreateMenu(menu);
    glutAddSubMenu("GEAR",gear_no);
    glutAddMenuEntry("START/STOP CAR",7);
    glutAddMenuEntry("DISABLE/ENABLE TREES",8);
    glutAddMenuEntry("RESTART",9);
    glutAddMenuEntry("QUIT", 0);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}
void lines(GLfloat arr[2][3],int a=0)
{
    glVertex3fv(arr[0]);
    glVertex3fv(arr[1]);
    if(a==0)
    {
    for(int i=0;i<2;i++)
    {
        arr[i][2]=-arr[i][2];
    }
    glVertex3fv(arr[0]);
    glVertex3fv(arr[1]);
    }
}
void wheels()
{
    glColor3f(0.1,0.1,0.1);
    mat3();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(-80+tr[0],20+tr[1],-51+tr[2]);
    glBegin(GL_POLYGON);
    drawCircle(18,20);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(70+tr[0],20+tr[1],-51+tr[2]);
    glBegin(GL_POLYGON);
    drawCircle(18,20);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(-80+tr[0],20+tr[1],51+tr[2]);
    glBegin(GL_POLYGON);
    drawCircle(18,20);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(70+tr[0],20+tr[1],51+tr[2]);
    glBegin(GL_POLYGON);
    drawCircle(18,20);
    glEnd();
    glPopMatrix();
    glColor3f(0.2,0.2,1);
    mat2();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(-80+tr[0],20+tr[1],-50+tr[2]);
    glScaled(1.0,1.0,2.0);
    glutSolidTorus(4,20,30,30);
    glPopMatrix();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(70+tr[0],20+tr[1],-50+tr[2]);
    glScaled(1.0,1.0,2.0);
    glutSolidTorus(4,20,30,30);
    glPopMatrix();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(-80+tr[0],20+tr[1],50+tr[2]);
    glScaled(1.0,1.0,2.0);
    glutSolidTorus(4,20,30,30);
    glPopMatrix();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(70+tr[0],20+tr[1],50+tr[2]);
    glScaled(1.0,1.0,2.0);
    glutSolidTorus(4,20,30,30);
    glPopMatrix();
}
void sidepannel()
{

    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(tr[0],tr[1],tr[2]);
    glColor3f(1,0,0);
    mat1();
    glBegin(GL_QUADS);
    GLfloat arr[4][3]={{-120,15,-50},{-120,55,-50},{120,55,-50},{120,15,-50}};
    GLfloat ar[3]={0,0,-1.0};
    quadall(arr,ar);
    GLfloat arr2[4][3]={{120,15,-50},{120,55,-50},{120,55,50},{120,15,50}};
    GLfloat ar2[3]={1.0,0.0,0.0};
    quadall(arr2,ar2,1);
    GLfloat arr3[4][3]={{-120,15,-50},{-120,35,-50},{-125,35,-46},{-125,15,-46}};
    GLfloat ar3[3]={-1.0,0.0,-1.0};
    quadall(arr3,ar3);
    GLfloat arr4[4][3]={{-125,35,-46},{-125,15,-46},{-130,15,-41},{-130,35,-41}};
    GLfloat ar4[3]={-1.0,0.0,-1.0};
    quadall(arr4,ar4);
    GLfloat arr5[4][3]={{-130,15,-41},{-130,35,-41},{-130,35,41},{-130,15,41}};
    GLfloat ar5[3]={-1.0,0.0,0.0};
    quadall(arr5,ar5,1);
    GLfloat arr6[4][3]={{-125,35,-46},{-130,35,-41},{-130,35,0},{-125,35,0}};
    GLfloat ar6[3]={0.0,1.0,0.0};
    quadall(arr6,ar6);
    GLfloat arr7[4][3]={{-120,35,-50},{-125,35,-46},{-125,35,0},{-120,35,0}};
    GLfloat ar7[3]={0.0,1.0,0.0};
    quadall(arr7,ar7);
    GLfloat arr8[4][3]={{-120,35,-50},{-120,35,-30},{-120,55,-25},{-120,55,-50}};
    GLfloat ar8[3]={-1.0,0.0,0.0};
    quadall(arr8,ar8);
    glColor3f(0,0,0);
    mat6();
    GLfloat arr10[4][3]={{-119.9,54.6,-40},{-119.9,35,-32},{-119.9,35,32},{-119,54.6,40}};
    GLfloat ar10[3]={-1.0,0.0,0.0};
    quadall(arr10,ar10,1);
    mat5();
    GLfloat arr9[4][3]={{-120.2,38,-45},{-120.2,38,-34},{-120.2,52,-30},{-120.2,52,-45}};
    GLfloat ar9[3]={-1.0,0.0,0.0};
    quadall(arr9,ar9);
    mat1();
    GLfloat arr11[4][3]={{-120,55,-50},{-115,60,-45},{-45,65,-40},{-45,55,-50}};
    GLfloat ar11[3]={0,1,-1};
    quadall(arr11,ar11);
    GLfloat arr12[4][3]={{-120,55,-50},{-115,60,-45},{-115,60,45},{-120,55,50}};
    GLfloat ar12[3]={-1,0,1};
    quadall(arr12,ar12,1);
    GLfloat arr13[4][3]={{-115,60,-45},{-45,65,-40},{-45,65,40},{-115,60,45}};
    GLfloat ar13[3]={-0.1,0,1};
    quadall(arr13,ar13,1);
    GLfloat arr14[4][3]={{-45,65,-40},{-45,55,-50},{120,55,-50},{124,65,-40}};
    GLfloat ar14[3]={0,1,-1};
    quadall(arr14,ar14);
    GLfloat arr15[4][3]={{120,55,-50},{124,65,-40},{124,65,40},{120,55,50}};
    GLfloat ar15[3]={0.2,-1,0};
    quadall(arr15,ar15,1);
    GLfloat arr16[3][3]={{-45,65,-40},{-5,65,-40},{-5,85,-30}};
    GLfloat ar16[3]={0,0.6,-1};
    tri(arr16,ar16);
    GLfloat arr17[4][3]={{-5,65,-40},{-5,85,-30},{42,83,-31},{42,65,-40}};
    GLfloat ar17[3]={0,0.6,-1};
    quadall(arr17,ar17);
    GLfloat arr18[3][3]={{42,83,-31},{42,65,-40},{100,65,-40}};
    GLfloat ar18[3]={0,0.6,-1};
    tri(arr18,ar18);
    GLfloat arr19[4][3]={{42,83,-31},{100,65,-40},{100,65,40},{42,83,31}};
    GLfloat ar19[3]={0.6,0,1};
    quadall(arr19,ar19,1);
    GLfloat arr20[4][3]={{-5,85,-30},{42,83,-31},{42,83,31},{-5,85,30}};
    GLfloat ar20[3]={0,1,0};
    quadall(arr20,ar20,1);
    GLfloat arr21[4][3]={{-45,65,-40},{-5,85,-30},{-5,85,30},{-45,65,40}};
    GLfloat ar21[3]={0,1,0};
    quadall(arr21,ar21,1);
    GLfloat arr22[4][3]={{100,65,-40},{100,65,40},{124,65,40},{124,65,-40}};
    GLfloat ar22[3]={0,1,0};
    quadall(arr22,ar22,1);
    mat4();
    GLfloat arr23[4][3]={{-45.1,65,-38},{-9.1,83,-29},{-9.1,83,29},{-45.1,65,38}};
    GLfloat ar23[3]={-0.6,0,1};
    quadall(arr23,ar23,1);
    GLfloat arr24[3][3]={{-40,65.1,-40.1},{-5,65.1,-40.1},{-5,82.1,-31.6}};
    GLfloat ar24[3]={0,0.6,-1};
    tri(arr24,ar24);
    GLfloat arr25[4][3]={{-5,65.1,-40.1},{-5,82.1,-31.6},{40,81.1,-32.1},{40,65,-40.1}};
    GLfloat ar25[3]={0,0.6,-1};
    quadall(arr25,ar25);
    GLfloat arr26[3][3]={{57,76.1,-35.6},{57,65.1,-40},{92,65.1,-40.1}};
    GLfloat ar26[3]={0,0.6,-1};
    tri(arr26,ar26);
    GLfloat arr27[4][3]={{53.9,80,-26},{97,66,-32},{97,66,32},{53.9,80,26}};
    GLfloat ar27[3]={0.6,0,1};
    quadall(arr27,ar27,1);
    mat3();
    GLfloat arr28[4][3]={{120,16,-49.5},{-120,16,-49.5},{-120,16,49.5},{120,16,49.5}};
    GLfloat ar28[3]={0,-1,0};
    quadall(arr28,ar28);
    mat6();
    GLfloat arr29[4][3]={{-130.1,20,-28},{-130.1,30,-28},{-130.1,30,28},{-130.1,20,28}};
    GLfloat ar29[3]={-1,0,0};
    quadall(arr29,ar29);
    GLfloat arr30[4][3]={{120.1,25,-28},{120.1,35,-28},{120.1,35,28},{120.1,25,28}};
    GLfloat ar30[3]={1,0,0};
    quadall(arr30,ar30);
    GLfloat arr31[4][3]={{-55,21,50.1},{-55,19,50.1},{45,19,50.1},{45,21,50.1}};
    GLfloat ar31[3]={0,-1,0};
    quadall(arr31,ar31);
    GLfloat arr32[4][3]={{-55,23,50.1},{-55,27,50.1},{45,27,50.1},{45,23,50.1}};
    GLfloat ar32[3]={0,-1,0};
    quadall(arr32,ar32);
    glEnd();
    glPopMatrix();
}
void line()
{
    light();
    glPushMatrix();
    glRotated(theta[1],0,1,0);
    glTranslated(tr[0],tr[1],tr[2]);
    glColor3f(0,0,0);
    mat2();
    glBegin(GL_LINES);
    glPointSize(30.0);
    GLfloat arr[2][3]={{40,81.1,-32.1},{40,65,-40.1}};
    lines(arr);
    GLfloat arr1[2][3]={{40,55.1,-50.1},{40,65,-40.1}};
    lines(arr1);
    GLfloat arr2[2][3]={{40,55.1,-50.1},{40,25,-50.1}};
    lines(arr2);
    GLfloat arr3[2][3]={{-40,55.1,-50.1},{-40,65,-40.1}};
    lines(arr3);
    GLfloat arr4[2][3]={{-40,55.1,-50.1},{-40,25,-50.1}};
    lines(arr4);
    glEnd();
    glPopMatrix();
}
void trees()
{
    drawtree(1,0,400);
    drawtree(1.1,80,300);
    drawtree(0.5,-800,900);
    drawtree(0.8,-500,-100);
    drawtree(0.6,450,350);
    drawtree(0.7,300,-200);
    drawtree(2,600,-800);
    drawtree(1.6,750,-650);
    drawtree(1.9,250,-1000);
    drawtree(2.3,-600,-800);
    drawtree(1.6,830,1300);
    drawtree(2.7,820,-880);
    drawtree(1,-880,950);
    drawtree(3,-300,-1200);
}
void tex(GLfloat x, GLfloat y,string str,int ch=0)
{
    void *font;
    switch(ch)
    {
        case 0:
            glLineWidth(1.5);
            font=GLUT_BITMAP_TIMES_ROMAN_24;
            glRasterPos2f(x,y);
            for(int i=0;i<str.length();i++)
                glutBitmapCharacter(font,str[i]);
            break;
        case 1:
            font=GLUT_BITMAP_8_BY_13;
            glRasterPos2f(x,y);
            for(int i=0;i<str.length();i++)
                glutBitmapCharacter(font,str[i]);
            break;
        case 2:
            font=GLUT_BITMAP_HELVETICA_18;
            glRasterPos2f(x,y);
            for(int i=0;i<str.length();i++)
                glutBitmapCharacter(font,str[i]);
            break;
        case 3:
            font=GLUT_BITMAP_9_BY_15;
            glRasterPos2f(x,y);
            for(int i=0;i<str.length();i++)
                glutBitmapCharacter(font,str[i]);
            break;
    }
}
void printstart()
{

	glPushMatrix ();
	glLoadIdentity ();
	glMatrixMode(GL_PROJECTION);
	glPushMatrix ();
	glLoadIdentity();
	gluOrtho2D (0,700,0,700);
    glMatrixMode(GL_MODELVIEW);
	glDepthFunc (GL_ALWAYS);
    glColor4f(1,1,1,0.5);
	glBegin(GL_QUADS);
	glVertex2d(0,0);
	glVertex2d(0,700);
	glVertex2d(700,700);
	glVertex2d(700,0);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	tex(60,600,"COMPUTER GRAPHICS PROJECT USING OPENGL",0);
	glColor3f(0.3,0.2,0.0);
	tex(180,540,"3D MODEL OF MOVING CAR",0);
    glColor3f(0.0,0,0.3);
	tex(230,450,"MADE BY:",2);
	tex(230,420,"NAME: JATIN BHUTANI",2);
	tex(230,390,"REG NO: 15GAEC9026",2);
	tex(230,360,"CLASS: 5th SEM",2);
	tex(230,330,"COURSE: BE CSE",2);
	glColor3f(0,0,0);
	tex(200,200,"CLICK ON SCREEN TO START...",3);
	glColor3f(0,0,0);
	tex(10,93,"INSTRUCTIONS:-",1);
	glColor3f(0,0,0);
	tex(10,70,"USE RIGHT CLICK TO NAVIGATE THROUGH DIFFRENT OPTIONS IN THE MENU",1);
	glColor3f(0,0,0);
	tex(10,50,"USE SPACE TO PAUSE OR RESUME AT ANY MOVEMENT",1);
	glColor3f(0,0,0);
	tex(10,30,"USE OPTIONS OF GEARS IN THE MENU TO CHANGE SPEED",1);
	glDepthFunc (GL_LESS);
	glMatrixMode(GL_PROJECTION);
	glPopMatrix ();
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix ();
}
void printend()
{

	glPushMatrix ();
	glLoadIdentity ();
	glMatrixMode(GL_PROJECTION);
	glPushMatrix ();
	glLoadIdentity();
	gluOrtho2D (0,700,0,700);
    glMatrixMode(GL_MODELVIEW);
	glDepthFunc (GL_ALWAYS);
    glColor4f(1,1,1,0.5);
	glBegin(GL_QUADS);
	glVertex2d(0,0);
	glVertex2d(0,700);
	glVertex2d(700,700);
	glVertex2d(700,0);
	glEnd();
	glColor3f(1.0,0.0,0);
	tex(280,480,"THANK YOU",0);
	tex(330,440,"FOR",0);
	tex(317,400,"USING",0);
	glColor3f(0.0,0.0,1.0);
	tex(280,245,"ToolKits used:-",3);
	tex(280,220,"1) OpenGL in C++",3);
	tex(280,200,"2) GLUT Library",3);
	tex(280,180,"3) Code::Blocks IDE",3);
	glDepthFunc (GL_LESS);
	glMatrixMode(GL_PROJECTION);
	glPopMatrix ();
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix ();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1.0,0.0,0.0);
    mat2();
    drawHorCircle(900,-0.2);
    mat7();
    drawHorCircle(630,-0.1);
    drawSquareHor(2500,-0.3);
    drawSquareHor(2500,-0.3,1);

    if(tree)
        trees();
    wheels();
    sidepannel();
    line();
    glPopMatrix();
    if(start==0)
    {
        glDisable(GL_LIGHTING);
        printstart();
        glEnable(GL_LIGHTING);
    }
    if(ending==0)
    {
        stop=0;
        glDisable(GL_LIGHTING);
        printend();
        glEnable(GL_LIGHTING);
    }
    glFlush();
    glutSwapBuffers();
}
void movecar()
{
if(start==1)
{
    if(stop==1)
    theta[1]+=speed;
    if( theta[1] == -90 )
    {
        theta[1]=270;
    }
    tr[0]=sin((theta[1])*0.0174532926*0.00001)*700;
    tr[2]=cos((theta[1])*0.0174532926*0.00001)*700;
}
glutPostRedisplay();
}

void mouse(int btn, int state, int x, int y)
{
if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    start=1;
glutPostRedisplay();

}
void keyboard(unsigned char key,int x,int y)
{
    if(key==' ')
    {
        stop+=1;
        stop%=2;
    }
    display();
}
int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
glutInitWindowSize(690, 690);
glutCreateWindow("car");

glutDisplayFunc(display);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glShadeModel(GL_SMOOTH);
glEnable(GL_NORMALIZE);
glEnable(GL_BLEND);
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
createMenu();
glPushMatrix();
glMatrixMode(GL_PROJECTION);
glEnable(GL_DEPTH_TEST);
glLoadIdentity();
//glOrtho(-150,150,-150,150,-1000,1000);
glOrtho(-910,910,-910,910,-10000,10000);
//gluLookAt(-200,40,100,0,0,0,0,1,0);
//gluLookAt(-200,0,0,0,0,0,0,1,0);
//gluLookAt(0,1500,1,0,0,0,0,1,0);
//gluLookAt(300,-150,800,0,0,0,0,1,0);
gluLookAt(0,130,800,0,0,0,0,1,0);
//gluPerspective(120,1,1000,1000);
glutIdleFunc(movecar);
glutMouseFunc(mouse);
glutKeyboardFunc(keyboard);
glClearColor(0.2,0.8,1,1.0);
glutMainLoop();
glPopMatrix();
return 0;
}
