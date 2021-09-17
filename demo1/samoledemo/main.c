#include<freeglut.h>
#include<stdio.h>
#include<string.h>
int k=0;
int r=0;
void bitmap_output(int x, int y, char *string, void *font)
{
  int len, i;

  glRasterPos2f(x, y);
  len = (int) strlen(string);
  for (i = 0; i < len; i++)
  {
    glutBitmapCharacter(font, string[i]);

  }
}

void draw_pixel (int cx, int cy)
{

    //glColor3f(1.0,0.0,0.0);
glBegin(GL_POINTS);
    glVertex2i(cx,cy);
    glEnd();

}
void draw_pixel1 (int cx, int cy)
{

    glColor3f(0.0,0.0,1.0);
glBegin(GL_POINTS);
    glVertex2i(cx,cy);
    glEnd();

}
void draw_pixel2 (int cx, int cy)
{

    glColor3f(0.0,1.0,1.0);
glBegin(GL_POINTS);
    glVertex2i(cx,cy);
    glEnd();

}
void plotpixels1( int h, int k, int x, int y)
{

    draw_pixel1(x+h,y+k);
    draw_pixel2(-x+h,y+k);
    draw_pixel1(x+h,-y+k);
    draw_pixel2(-x+h,-y+k);
    draw_pixel1(y+h,x+k);
    draw_pixel2(-y+h,x+k);
    draw_pixel1(y+h,-x+k);
    draw_pixel2(-y+h,-x+k);

}
void circle_draw1(GLint h,GLint k,GLint r)
{

    GLint d=1-r,x=0,y=r;
    while(y>x)
    {

        plotpixels1(h,k,x,y);
        if(d<0)
            d+=2*x+3;
        else
        {

            d+=2*(x-y)+5;
            --y;
        }

    ++x;
}
plotpixels1(h,k,x,y);
}



void plotpixels( int h, int k, int x, int y)
{

    draw_pixel(x+h,y+k);
    draw_pixel(-x+h,y+k);
    draw_pixel(x+h,-y+k);
    draw_pixel(-x+h,-y+k);
    draw_pixel(y+h,x+k);
    draw_pixel(-y+h,x+k);
    draw_pixel(y+h,-x+k);
    draw_pixel(-y+h,-x+k);

}
void circle_draw(GLint h,GLint k,GLint r)
{

    GLint d=1-r,x=0,y=r;
    while(y>x)
    {

        plotpixels(h,k,x,y);
        if(d<0)
            d+=2*x+3;
        else
        {

            d+=2*(x-y)+5;
            --y;
        }

    ++x;
}
plotpixels(h,k,x,y);
}
void cylinder()
{

    int xc=100,yc=100,r=50,r1=30;
    int i,n=50;
    for(i=0;i<n;i+=1)
{
glColor3f(1.0,1.0,0.0);
circle_draw(xc,yc,r-i);

}
}
void cylinder1()
{

    int xc=300,yc=100,r1=20;
    int i,n=20;
    for(i=0;i<n;i+=1)
{
//glColor3f(0.0,0.0,1.0);//
circle_draw1(xc,yc,r1-i);


}
}
void cylinder2()
{

    int xc=350,yc=100,r2=8;
    int i,n=8;
    for(i=0;i<n;i+=1)
{
glColor3f(1.0,1.0,1.0);
circle_draw(xc,yc,r2-i);

}
}
void draw_line()
{
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
glVertex2f(130,140);
       // glVertex2f(250,150);
        glVertex2f(300,78);
        glEnd();

        glBegin(GL_LINE_LOOP);
glVertex2f(130,60);
       // glVertex2f(250,150);
        glVertex2f(300,122);
        glEnd();
        glBegin(GL_LINE_LOOP);
glVertex2f(100,150);
       // glVertex2f(250,150);
        glVertex2f(305,120);
        glEnd();
        glBegin(GL_LINE_LOOP);
glVertex2f(100,50);
       // glVertex2f(250,150);
        glVertex2f(305,80);
        glEnd();
        glBegin(GL_LINE_LOOP);
glVertex2f(130,60);
       // glVertex2f(250,150);
        glVertex2f(300,122);
        glEnd();
        glBegin(GL_LINE_LOOP);
glVertex2f(130,60);
       // glVertex2f(250,150);
        glVertex2f(300,122);
        glEnd();
        glBegin(GL_LINE_LOOP);
glVertex2f(130,60);
       // glVertex2f(250,150);
        glVertex2f(300,122);
        glEnd();

        glBegin(GL_LINE_LOOP);

         glVertex2f(300,78);

       glVertex2f(400,40);

        glEnd();
        glBegin(GL_LINE_LOOP);
        glVertex2f(300,122);

       glVertex2f(400,160);

        glEnd();
        glColor3f(0.0,0.0,0.0);
         glBegin(GL_LINE_LOOP);
glVertex2f(305,120);
       // glVertex2f(250,150);
        glVertex2f(395,100);
        glEnd();
        glBegin(GL_LINE_LOOP);
         glVertex2f(395,100);

       glVertex2f(305,80);

        glEnd();
}
void triangle()
{
glColor3f(1.0,0.0,0.0);
 glBegin(GL_POLYGON);
glVertex2d(305,120);
glVertex2d(395,100);
    glVertex2d(305,80);
    glEnd();

  glColor3f(1.0,1.0,1.0);
 glBegin(GL_POLYGON);
glVertex2d(300,122);
glVertex2d(400,160);
    glVertex2d(400,100);
    glEnd();
    glColor3f(1.0,1.0,1.0);
 glBegin(GL_POLYGON);
glVertex2d(300,78);
glVertex2d(400,100);
    glVertex2d(400,40);
    glEnd();


}void ccylinder()

{

    int xc=70,yc=150,r=48;
    int i,n=50;
    for(i=0;i<n;i+=1)
{
glColor3f(1.0,1.0,0.0);
circle_draw(xc,yc,r-i);

}
}
void ccylinder1()
{

    int xc=314,yc=150,r1=6;
    int i,n=8;
    for(i=0;i<n;i+=1)
{
glColor3f(1.0,1.0,1.0);
circle_draw(xc,yc,r1-i);


}
}
void ccylinder3()
{

    int xc=305,yc=50,r1=8;
    int i,n=8;
    for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(xc,yc,r1-i);
    }
    }
    void ccylinder4()
{

    int xcc=310,ycc=50,r11=8;
    int i,n=8;
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(xcc,ycc,r11-i);
    }
    }
    void ccylinder3a()
{

    int xc=105,yc=50,r1=8;
    int i,n=8;
    for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(xc,yc,r1-i);
    }
    }
    void ccylinder4a()
{

    int xcc=110,ycc=50,r11=8;
    int i,n=8;
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(xcc,ycc,r11-i);
    }
    }

   void poly()
    {

        glBegin(GL_POLYGON);
        glColor3f(0.87,0.58,0.98);
        glVertex2f(70,200);
        glVertex2f(283,150);
        glVertex2f(312,156);
        glEnd();
       }
void poly1()
    {

        glBegin(GL_POLYGON);
        glColor3f(0.87,0.58,0.98);
        glVertex2f(70,100);
        glVertex2f(283,150);
        glVertex2f(312,144);
        glEnd();
       }
void poly2()
    {

        glBegin(GL_POLYGON);
        glColor3f(1.0,0.5,0.5);
        glVertex2f(355,165);
        glVertex2f(350,150);
        glVertex2f(312,156);
        glEnd();
       }

      void poly4()
    {

        glBegin(GL_POLYGON);
        glColor3f(1.0,0.5,0.5);
        glVertex2f(312,144);
        glVertex2f(355,135);
        glVertex2f(350,150);
        glEnd();
       }
void ccylinder2()
{

    int xc=370,yc=150,r2=20;
    int i,n=20;
    for(i=0;i<n;i+=1)
{
circle_draw1(xc,yc,r2-i);

}
}

void ddraw_line()
{
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
glVertex2f(70,100);
        glVertex2f(350,150);
    glEnd();
        glBegin(GL_LINES);
glVertex2f(70,200);
        glVertex2f(350,150);
        glEnd();
        glBegin(GL_LINES);
glVertex2f(70,100);
       // glVertex2f(250,150);
        glVertex2f(355,165);
        glEnd();
        glBegin(GL_LINES);
glVertex2f(70,200);
        glVertex2f(355,135);
        glEnd();
        glBegin(GL_LINE_LOOP);
glVertex2f(325,150);
        glVertex2f(325,220);
        glEnd();
        glBegin(GL_LINE_LOOP);
glVertex2f(340,200);
               glVertex2f(340,156);
        glEnd();



}


void line()
{
    glColor3f(1.0,1.0,0.0);
  glBegin(GL_LINE_LOOP);
         glVertex2f(340,155);

       glVertex2f(340,100);

        glEnd();

}


    void menu(int item)
    {
        /*int ac=55,bc=50,r1=8,cc=105,dc=155,ec=205,fc=258,gc=311,hc=364;
        int i,n=8;
        int acc=64,bcc=50,r11=7,ccc=111,dcc=158,ecc=205,fcc=255,gcc=305,hcc=355;


*/


        switch(item)
        {

            case 1:r=1;
            break ;

            case 2: r=2;
            break;

      case 3: r=3;
      break;
case 4:r=4;
break;
case 5:r=5;
break;
case 6:r=6;
break;
case 7:r=7;
break ;
case 8:exit(0);
break;
        }
    }









void init(void)
{

    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,400.0,0.0,300.0);
    glMatrixMode(GL_MODELVIEW);
}
void display3(void)
{  glColor3f(1,0.0,0.0);
     bitmap_output(125, 240, "ECLIPSE",GLUT_BITMAP_TIMES_ROMAN_24);
     glColor3f(0.0,0.0,1.0);
    bitmap_output(135, 220, "Eclipse ia an astonomical event occurs when an astronomical object is temporarily obscured,",GLUT_BITMAP_HELVETICA_18);
    bitmap_output(135, 210, "either by passing into shadow of another body or by having another body between it &the viewer",GLUT_BITMAP_HELVETICA_18);
    glColor3f(1.0,0.0,0.0);
    bitmap_output(125, 180, "LUNAR ECLIPSE",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,0.0,1.0);
    bitmap_output(135, 170, "it occurs when Moon passes through the Earth's shadow",GLUT_BITMAP_HELVETICA_18);
    glColor3f(1.0,0.0,0.0);
    bitmap_output(125, 150, "SOLAR ECLIPSE",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,0.0,1.0);
    bitmap_output(135, 140, "it occurs when Moon passes in front of the Sun",GLUT_BITMAP_HELVETICA_18);
    glColor3f(1.0,0.0,0.0);
 bitmap_output(125, 120, "UMBRA",GLUT_BITMAP_TIMES_ROMAN_24);
 glColor3f(0.0,0.0,1.0);
    bitmap_output(135, 110, "within which the moon completely covers the sun",GLUT_BITMAP_HELVETICA_12);
    glColor3f(1.0,0.0,0.0);
 bitmap_output(125, 80, "PENUMBRA",GLUT_BITMAP_TIMES_ROMAN_24);
 glColor3f(0.0,0.0,1.0);
    bitmap_output(135, 70, "within which the moon is only partially in front of the sun",GLUT_BITMAP_HELVETICA_12);

    glColor3f(1.0,1.0,1.0);
    bitmap_output(300, 10, "Press 'b' to continue.......",GLUT_BITMAP_HELVETICA_18);

}
void display1(void)
{
    triangle();
    cylinder();
    cylinder1();
    cylinder2();
    draw_line();
    line();
glColor3f(1.0,1.0,1.0);
bitmap_output(80,30,"SUN",GLUT_BITMAP_8_BY_13);
bitmap_output(280,30,"EARTH",GLUT_BITMAP_8_BY_13);
bitmap_output(350,30,"MOON",GLUT_BITMAP_8_BY_13);
bitmap_output(150,200,"TOTAL LUNAR ECLIPSE",GLUT_BITMAP_TIMES_ROMAN_24);
bitmap_output(310,160,"umbra",GLUT_BITMAP_9_BY_15);
glColor3f(0.0,0.0,0.0);
bitmap_output(340,80,"Penumbra",GLUT_BITMAP_8_BY_13);
glColor3f(1.0,1.0,1.0);
bitmap_output(300, 10, "Press 'c' to continue.......",GLUT_BITMAP_HELVETICA_18);

}
void display2(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glPointSize(2.0);
    ccylinder();
    ccylinder1();
    poly2();
    poly4();
    ccylinder2();
    poly();
   poly1();

    ddraw_line();
glColor3f(1.0,1.0,1.0);
bitmap_output(80,85,"SUN",GLUT_BITMAP_8_BY_13);
bitmap_output(280,125,"MOON",GLUT_BITMAP_8_BY_13);
bitmap_output(350,100,"EARTH",GLUT_BITMAP_8_BY_13);
bitmap_output(150,250,"TOTAL SOLAR ECLIPSE",GLUT_BITMAP_TIMES_ROMAN_24);
bitmap_output(325,225,"umbra",GLUT_BITMAP_9_BY_15);
glColor3f(1.0,1.0,1.0);
bitmap_output(340,200,"Penumbra",GLUT_BITMAP_8_BY_13);

bitmap_output(50,70,"click here to view different phases of moon",GLUT_BITMAP_HELVETICA_10);
bitmap_output(300, 30, "Press 'q' to quit.......",GLUT_BITMAP_HELVETICA_18);

}
void front()
{
    glColor3f(1.0,0.0,0.0);
    bitmap_output(100, 280, "THE OXFORD COLLEGE OF ENGINEERING",GLUT_BITMAP_TIMES_ROMAN_24);
    glBegin(GL_LINE_LOOP);
        glVertex2f(80, 647);
        glVertex2f(590, 647);
    glEnd();
    glColor3f(0.0,0.0,1.0);
    bitmap_output(150, 260, "\"ECLIPSE\"",GLUT_BITMAP_TIMES_ROMAN_24);
    glBegin(GL_LINE_LOOP);
        glVertex2f(165, 547);
        glVertex2f(680, 547);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    bitmap_output(75, 240, "TEAM MEMBERS:",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,0.0,1.0);
    bitmap_output(135, 220, "AISHWARYA           USN-10X13CS004",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(135, 210, "APOORVA             USN-10X13CS010",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(135, 200, "CHAITHRA.K          USN-10X13CS016",GLUT_BITMAP_TIMES_ROMAN_24);
    bitmap_output(135, 190, "M.B LOHITHA         USN-10X13CS045",GLUT_BITMAP_TIMES_ROMAN_24);



    glColor3f(1.0,1.0,1.0);
    bitmap_output(75, 140, "TEAM GUIDE",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.0,1.0);
    bitmap_output(150, 120, "Prof.SENTHIL",GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.0,1.0);
    bitmap_output(300, 100, "Press 'a' to continue.......",GLUT_BITMAP_HELVETICA_18);
}
void display4()
{
    int ac=55,bc=50,r1=8,cc=105,dc=155,ec=205,fc=258,gc=311,hc=364;
        int i,n=8;
        int acc=64,bcc=50,r11=7,ccc=111,dcc=158,ecc=205,fcc=255,gcc=305,hcc=355;
        if(r==1)
        {
            for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(ac,bc,r1-i);

    }
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(acc,bcc,r11-i);
    }

        }
        if(r==2)
        {

    for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(cc,bc,r1-i);

    }
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(ccc,bcc,r11-i);
    }
        }

if(r==3)
{
 for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(dc,bc,r1-i);
    }
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(dcc,bcc,r11-i);
    }
}
if(r==4)
    {


     for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(ec,bc,r1-i);
    }
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(ecc,bcc,r11-i);
    }
    }
    if(r==5)
    {for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(fc,bc,r1-i);
    }
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(fcc,bcc,r11-i);
    }
    }

    if(r==6)
    {for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(gc,bc,r1-i);
    }
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(gcc,bcc,r11-i);
    }
    }

    if(r==7)
    {for(i=0;i<n;i++)
    {
        glColor3f(1.0,1.0,1.0);
        circle_draw(hc,bc,r1-i);
    }
    for(i=0;i<n;i++)
    {
        glColor3f(0.0,0.0,0.0);
        circle_draw(hcc,bcc,r11-i);
    }
    }

}
void display(void)
{ int item;

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glPointSize(2.0);
   if(k==0)
    front();
    if(k==1)
    display3();
if(k==2)
display1();
if(k==3)
{display2();
display4();
}
glutPostRedisplay();
glutSwapBuffers();
glFlush();

}
void keyboard(unsigned char key,int x,int y)
{

    if(key=='a')
    k=1;
    if(key=='b')
    k=2;
    if(key=='c')
    k=3;
    if(key=='q')
        exit(0);
}
  int main(int argc,char **argv)
{

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowPosition(50,50);
glutInitWindowSize(500,500);
glutCreateWindow("eclipse");
init();
glutDisplayFunc(display);
glutKeyboardFunc(keyboard);





glutCreateMenu(menu);
glutAddMenuEntry("first phase",1);
glutAddMenuEntry("second phase",2);
glutAddMenuEntry("third phase",3);
glutAddMenuEntry("diamond ring",4);
glutAddMenuEntry("fifth phase",5);
glutAddMenuEntry("sixth phase",6);
glutAddMenuEntry("seventh phase",7);
glutAddMenuEntry("exit",8);
glutAttachMenu(GLUT_RIGHT_BUTTON);

glutCreateMenu(menu);
glutAddMenuEntry("exit",8);
glutAddMenuEntry("first phase",7);
glutAddMenuEntry("second phase",6);
glutAddMenuEntry("third phase",5);
glutAddMenuEntry("diamond ring",4);
glutAddMenuEntry("fifth phase",3);
glutAddMenuEntry("sixth phase",2);
glutAddMenuEntry("seventh phase",1);
glutAttachMenu(GLUT_RIGHT_BUTTON);



glutMainLoop();
}
