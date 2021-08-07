#include<GL/glut.h>
#include<string.h>
#include<stdio.h>
#include <iostream>
#include <stdlib.h>
#include<math.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include "birds.h"
#include "man.h"
#include "backgrounds.h"
#include "mouse.h"
int submenu;
int counter=1;
int done=0;
int flag=0;
int flag3=0, flag5=0;
int counter3=1, counter5=1;

void keys(unsigned char key,int x,int y);
void mydisplay();
void mydisplay1();
void text();
void mouse_move(unsigned char key,int x,int y);
void net_key(unsigned char key,int x,int y);
void net_cut(unsigned char key,int x,int y);
void last_fly(unsigned char key,int x,int y);
void broke_net();
void conclusion();
void displayLogo();
void loadLogo();

int display_order=1,net_k=0;//display_order_last=1;
unsigned int introBG;
int i;
float a=0,c=0,d=0,b=0,nx4,ny4,ma=0,mf=0,mox;// animation variable
float j=0;
char str[]="BANGALORE INSTITUTE OF TECHNOLOGY";
char str1[]="V V PURAM,BANGALORE";
char str2[]="COMPUTER GRAPHICS LABORATORY WITH MINI PROJECT";
char str3[]="18CSL67";
char str4[]="HUNTER AND THE PIGEONS";
char str5[]="Presented By:";
char str6[]="S. SRAVYA";
char str7[]="PRATHIKSHA S. B.";
char str14[]="";
char str15[]="PRESS t/T TO CONTINUE";

char dia1[]="The birds unitedly travel to reach out to their friend for help";
char d2[]="Their journey to the other end of the forest to their friend, a mouse...";

GLint angle;

//float x = -200.0;
//float y = -200.0;

void circle(GLfloat x, GLfloat y, GLdouble radius) {
	float x2, y2;
	float angle;
	glPointSize(2.0);
	glBegin(GL_TRIANGLE_FAN);
	for (angle = 0.0; angle < 6.3; angle += 0.01)
	{
		x2 = x + sin(angle)*radius;
		y2 = y + cos(angle)*radius;
		glVertex2f(x2, y2);
	}
	glEnd();
}
void cloud(int x, int y, float r, int i)
{
	circle(x + i, y, r);
	circle(x + i, y, r);
	circle(x + 10 + i, y + 30, r - 10);
	circle(x + 55 + i, y + 20, r + 10);
	circle(x + 100 + i, y + 25, r - 5);
	circle(x + 90 + i, y, r + 10);
	circle(x + 120 + i, y + 15, r - 10);
}
void drawText(float x, float y, int r, int g, int b, int d, const char *string)
{
	int j = strlen(string);

	glColor3f(r, g, b);
	glRasterPos2f(x, y);
	for (int i = 0; i < j; i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
		for (int k = d; k>0; k--) {
			glFlush();
		}
	}
}

void rotate()
{
  glTranslatef(50,0,0);
  glRotatef(angle,0,0,1);
}
void myinit(void)
{
	glClearColor(0.0,0.0,0.0,0.0f);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,700);
	glMatrixMode(GL_MODELVIEW);
}

void menufunc(int n)
{
  switch(n)
  {
    case 1:display_order=2;
           glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	       glutInitWindowSize(1440,800);
	       glutInitWindowPosition(0,0);
           glutCreateWindow("opengl");
	       glutDisplayFunc(mydisplay);
           break;
    case 2:display_order=9;
           glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	       glutInitWindowSize(1440,800);
	       glutInitWindowPosition(0,0);
	       glutCreateWindow("opengl");
	       glutDisplayFunc(mydisplay);
  }
}

void dialouge1( int button, int state, int x, int y)
{
   // int static counter=1;
    int done=0;
    if(!done)
    {
         if (button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
         {
             switch(counter)
             {
                case 1:{
                    printf("hi");
                        glColor3f(1, 1, 1);
                       cloud(1650, 1100, 80, 1);
                       circle(1760, 1010, 6);
                       circle(1700, 998, 10);
                       drawText(1668, 1145, 0, 0, 0, 0, "Yes!");
                       drawText(1655, 1100, 0, 0, 0, 0, "Finally, ");
                       drawText(1620, 1050, 0, 0, 0, 0, "I caught them!");
                       counter++;
                       break;
                }
                 case 2: {
                        printf("hi");
                        glColor3f(1, 1, 1);
                       cloud(470, 1100, 60, 1);
                       circle(485, 1030, 6);
                       circle(500, 1010, 10);
                       drawText(468, 1120, 0, 0, 0, 0, "Oops..");
                       drawText(430, 1075, 0, 0, 0, 0, "we are trapped");
                       counter++;
                       break;
                       }
                case 3: {
                       printf("hello");
                       glColor3f(1, 1, 1);
                       cloud(470, 1100, 65, 1);
                       circle(485, 1030, 6);
                       circle(500, 1010, 10);
                       drawText(427, 1080, 0, 0, 0, 0, "what to do now?");
                       counter++;
                         break;
                         }
                case 4: {
                       printf("hello");
                       glColor3f(1, 1, 1);
                       cloud(470, 1100, 65, 1);
                       circle(485, 1030, 6);
                       circle(500, 1010, 10);
                       drawText(427, 1080, 0, 0, 0, 0, "Don't lose hope");
                       counter++;
                         break;
                         }
                 case 5: {
                       printf("hellowel");
                       glColor3f(1, 1, 1);
                       cloud(470, 1100, 60, 1);
                       circle(485, 1030, 6);
                       circle(500, 1010, 10);
                       drawText(472, 1120, 0, 0, 0, 0, "we have to");
                       drawText(435, 1075, 0, 0, 0, 0, "stay united");
                       counter++;
                         break;
                         }
                case 6: {
                       printf("hello");
                       glColor3f(1, 1, 1);
                       cloud(470, 1100, 60, 1);
                       circle(485, 1030, 6);
                       circle(500, 1010, 10);
                       drawText(435, 1080, 0, 0, 0, 0, "I have a friend!");
                       counter++;
                         break;
                         }
                case 7: {
                       printf("hello");
                       glColor3f(1, 1, 1);
                       cloud(470, 1100, 65, 1);
                       circle(485, 1030, 6);
                       circle(500, 1010, 10);
                      drawText(472, 1120, 0, 0, 0, 0, "A mouse ");
                       drawText(420, 1075, 0, 0, 0, 0, "who can save us");
                       counter=0;
                         break;
                         }
                default : counter=0;
                    flag=1;
            }
            glFlush();
            printf("%d",counter);
        }
    }
    done=1;
}

void dialouge3( int button, int state, int x, int y)
{
   // int static counter=1;
    int done=0;
    if(!done)
    {
         if (button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
         {
             switch(counter3)
             {
                case 1:{
                    printf("hi");
                        glColor3f(1, 1, 1);
                       cloud(350, 1100, 85, 1);
                       circle(460, 990, 6);
                       circle(470, 960, 10);
                       drawText(330, 1145, 0, 0, 0, 0, "Oh!");
                       drawText(310, 1100, 0, 0, 0, 0, "They all flew away");
                       drawText(310, 1050, 0, 0, 0, 0, "with net too!!");
                       counter++;
                       break;
                }

                default : counter3=0;
                    flag3=1;
            }
            glFlush();
            printf("%d",counter3);
        }
    }
    done=1;
}

void dialouge5( int button, int state, int x, int y)
{
    int done=0;
    if(!done)
    {
         if (button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
         {
             switch(counter5)
             {
                 case 1: {
                        printf("c1");
                        glColor3f(1, 1, 1);
                       circle(26, 59.5, 6);
                       circle(26.5, 52, 1);
                       circle(27, 50, 1);
                       drawText(22, 60, 0, 0, 0, 0, "hello friend");
                       drawText(22, 58, 0, 0, 0, 0, "we are trapped!");
                       counter5++;
                       break;
                       }
                       case 2: {
                       printf("c2");
                       glColor3f(1, 1, 1);
                       circle(26, 59.5, 6);
                       circle(26.5, 52, 1);
                       circle(27, 50, 1);
                       drawText(21.5, 60, 0, 0, 0, 0, "please save us");
                       counter5++;
                       break;
                         }
                   case 3: {
                       printf("c3");
                       glColor3f(1, 1, 1);
                       circle(75,48,8);
                       circle(77.5, 39, 1);
                       circle(79.5,37,1);
                       drawText(68, 49, 0, 0, 0, 0, "Don't worry my friend");
                       drawText(68, 46, 0, 0, 0, 0, "i will definitely help you");
                       counter5++;
                         break;
                        }
                     case 4: {
                       printf("c4");
                       glColor3f(1, 1, 1);
                       circle(75,48,8);
                       circle(77.5, 39, 1);
                       circle(79.5,37,1);
                       drawText(68, 49, 0, 0, 0, 0, "I will tare the net apart");
                       drawText(69, 46, 0, 0, 0, 0, "And set you free");
                       counter5=0;
                       break;
                         }
                     default :{
                             printf("c5");
                             counter5=0;
                                flag5=1;
                     }
              }
            glFlush();
            printf("%d",counter5);
       }
    }
    done=1;
}



void mydisplay()
{	glClear(GL_COLOR_BUFFER_BIT);
	if(display_order==1)
	{
		text();
		submenu=glutCreateMenu(menufunc);
        glutAddMenuEntry("  ENTER  ",1);
        glutAddMenuEntry("  EXIT  ",2);
        glutAttachMenu(GLUT_RIGHT_BUTTON);

	}
	if(display_order==2)
	{
		back_ground2();
		glColor3f(1,1,0);
		circle(50, 90, 4);
		man1();
		if(a>-50)
		{
			glutPostRedisplay();
		}else
		{
		a=-50;
		back_ground2();
		glColor3f(1,1,0);
		circle(50, 90, 4);
		man1();

		net_k=1;

		glutMouseFunc(dialouge1);
       if(flag==1)
       {
           char str[]="PRESS N/n TO CONTINUE";
            glColor3f(0,0,0);
            glRasterPos2f(650,60);
            for(i=0;i<strlen(str);i++)
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
       }
        glutKeyboardFunc(net_key);
		}

	}
	if(display_order==3)
	{	back_ground3();
		man1();
		glColor3f(1,1,0);
		circle(1000, 1790, 80);
		if(ma>-1250)
		{
			glutPostRedisplay();
		}else
		glutMouseFunc(dialouge3);
		glColor3f(1,1,0);
		circle(1000, 1790, 80);
       if(flag3==1)
       {
           char str[]="PRESS d/D TO CONTINUE";
            glColor3f(0,0,0);
            glRasterPos2f(30,5);
            for(i=0;i<strlen(str);i++)
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
       }
		glutKeyboardFunc(mouse_move);

	}
	if(display_order==4)
	{
	    back_ground4();
        glColor3f(1,0.5,0);
		circle(50, 60, 5);
		if(a>-100)
		{
			glutPostRedisplay();
		}else
		glColor3f(1,0.5,0);
		circle(50, 60, 5);
        glColor3f(0,0,0.0);
        glRasterPos2d(25,24);
        for(i=0;i<strlen(dia1);i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,dia1[i]);
        glRasterPos2d(25,20);
        for(i=0;i<strlen(d2);i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,d2[i]);

		glutKeyboardFunc(mouse_move);
	}
	if(display_order==5)
	{
	    back_ground5();
		mouse1();

		glColor3f(1, 1, 1);
        circle(50, 89.52, 4);

		if(a>-50)
		{
			glutPostRedisplay();
			glColor3f(1, 1, 1);
        circle(50, 89.52, 4);
		}else
		{
		    glutMouseFunc(dialouge5);
		    glColor3f(1, 1, 1);
        circle(50, 89.52, 4);

		    glFlush();
	       if(flag5==1)
           {
               char str[]="PRESS m/M TO CONTINUE";
                glColor3f(0,0,0);
                glRasterPos2f(650,60);
                for(i=0;i<strlen(str);i++)
                    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
           }
			glutKeyboardFunc(mouse_move);
		}
	}
	if(display_order==6)
	{
	back_ground3();
	mouse1();
	glColor3f(1,1,1);
	circle(50, 90, 4);
	if(mox>-33)
	{glutPostRedisplay();
	glColor3f(1,1,1);
	circle(50, 90, 4);}
	else
	{glutKeyboardFunc(net_cut);
	glColor3f(1,1,1);
    circle(50, 90, 4);}

	//mouse1();
	}
	if(display_order==7)
	{
	back_ground3();
	mouse1();
	glColor3f(1,1,1);
	circle(50, 90, 4);
	broke_net();
	glutKeyboardFunc(last_fly);
	}
	if(display_order==8)
	{

	back_ground3();
	mouse1();
	glColor3f(1,1,1);
	circle(50, 90, 4);
	broke_net();

	if(mox>=-40)
	{
	glutPostRedisplay();
	glColor3f(1,1,1);
	circle(50, 90, 4);
	}else
	glutKeyboardFunc(last_fly);
	glColor3f(1,1,1);
	circle(50, 90, 4);
	//glutKeyboardFunc(last_fly);
	}
	if(display_order==9)
	{

	conclusion();
	back_ground();
	glutKeyboardFunc(last_fly);
	}
	glFlush();
}

void last_fly(unsigned char key,int x,int y)
{
	if(key=='f'|key=='F')
	{
        display_order++;
		a=-50;
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutInitWindowSize(1440,800);
		glutInitWindowPosition(0,0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
	}
	if(key=='t'|key=='T')
	{
        display_order++;
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
        glutInitWindowSize(1440,800);
		glutInitWindowPosition(0,0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
	}
	if(key=='x'|key=='X')
	{
		exit(0);
	}
}

void net_cut(unsigned char key,int x,int y)
{
	if(key=='c'|key=='C')
	{
        display_order++;
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
        glutInitWindowSize(1440,800);
		glutInitWindowPosition(0,0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
	}
}

void conclusion()
{
    //glClearColor(0.0,0.0,0.0,0.0f);
    glClearColor(1.0,1.0,1.0,0.0f);
        glPointSize(5.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0,100,0,100);

        glMatrixMode(GL_MODELVIEW);
    glBegin(GL_POLYGON);
        glColor3f(.333,0.420,.184);
        glVertex2f(0,0);
        //glColor3f(0.502,0.502,0);
        glColor3f(0,0,0);
        glVertex2f(100,0);
        //glColor3f(1,0,1);
        glColor3f(.333,0.420,.184);
        glVertex2f(100,100);
        //glColor3f(0.502,0.502,0);
        glVertex2f(0,100);
    glEnd();

    glColor3f(1,0,0);
    char str20[]="MORAL :";
    glRasterPos2f(10,50);
    for(i=0;i<strlen(str20);i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str20[i]);
    }

    char str21[]="WHEN YOU WORK TOGETHER YOU ARE STONGER";
    char str22[]="AND YOU ARE ABLE TO FACE ANY TYPE OF PROBLEM";
    char str23[]="AND YOU WILL SOLVE THAT PROBLEM";
    glColor3f(0.498,1,0);
    glRasterPos2f(20,50);

            for(i=0;i<strlen(str21);i++)
            {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21[i]);

            }
    glRasterPos2f(20,45);
          //glColor3f(0,0,1);
    for(i=0;i<strlen(str22);i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str22[i]);

            }
    glRasterPos2f(20,40);
            //glColor3f(0,0,1);
            for(i=0;i<strlen(str23);i++)
            {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str23[i]);

            }
    glColor3f(0,0,0);
    char str[]="PRESS x/X TO EXIT";
    glRasterPos2f(20,5);
            for(i=0;i<strlen(str);i++)
            {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
            }

}

void mouse_move(unsigned char key,int x,int y)
{
	if(key=='m'|key=='M')
	{
	display_order++;

		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
			glutInitWindowSize(1440,800);
			glutInitWindowPosition(0,0);
			glutCreateWindow("opengl");
			glutDisplayFunc(mydisplay);

	}
    if(key=='d'|key=='D')
	{
		display_order++;
        a=0;b=0;c=0;d=0;
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutInitWindowSize(1440,800);
		glutInitWindowPosition(0,0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
	}
    if(key=='n'|key=='N')
	{
		display_order++;
		a=0;b=0;c=0;d=0;
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
		glutInitWindowSize(1440,800);
		glutInitWindowPosition(0,0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
	}
}
void net_key(unsigned char key,int x,int y)
{
	if(key=='n'|key=='N')
	{
	    display_order++;
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
        glutInitWindowSize(1440,800);
		glutInitWindowPosition(0,0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
			//display_order++;
		a=-50;
	}
}
void keys(unsigned char key,int x,int y)
{
	//if(key=='l')
		//exit(0);
	if(key=='r'||key=='R')
	{
        display_order++;
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
        //glutDestroyWindow(a);
        glutInitWindowSize(1440,800);
        glutInitWindowPosition(0,0);
        glutCreateWindow("opengl");
        glutDisplayFunc(mydisplay);
	}
	if(key=='d'|key=='D')
	{//display_order_last++;
		display_order++;
		a=0;
		glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
        glutInitWindowSize(1440,800);
		glutInitWindowPosition(0,0);
		glutCreateWindow("opengl");
		glutDisplayFunc(mydisplay);
	}
}


void broke_net()
{
	int c=0,d=0;

	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2f(30,50);
		glVertex2f(34,54);
		glVertex2f(28,49);
		glVertex2f(35,45);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(33+c,42+d);
		glVertex2f(31+c,38+d);
		glVertex2f(30+c,38+d);
		glVertex2f(28+c,30+d);
		glVertex2f(28+c,45+d);
		glVertex2f(25+c,35+d);
		glVertex2f(33+c,20+d);
		glVertex2f(38+c,10+d);
		glVertex2f(43+c,33+d);
		glVertex2f(38+c,25+d);

	glEnd();
// horizontal line bottem
	glBegin(GL_LINES);
		glVertex2f(20+c,47+d);
		glVertex2f(18+c,44+d);
		glVertex2f(14+c,35+d);
		glVertex2f(13+c,28+d);
		glVertex2f(20+c,25+d);
		glVertex2f(25+c,24+d);
		glVertex2f(35+c,25+d);
		glVertex2f(40+c,27+d);
		glVertex2f(50+c,25+d);
		glVertex2f(50+c,30+d);
		glVertex2f(45+c,40+d);
		glVertex2f(40+c,45+d);
	glEnd();
    int nx=2,ny=3,nxr=2;
        glBegin(GL_LINES);
            glVertex2f(14+nx+c,35+2+d);
            glVertex2f(13+nx+c,28+ny+d);
            glVertex2f(25+nx+c,25+ny+d);
            glVertex2f(30+nx+c,28+ny+d);
            glVertex2f(50-nx+c,30+ny+d);
            glVertex2f(48-nx+c,35+1+d);
        glEnd();

    //3rd horizontal
         nx=4;ny=6;;
        glBegin(GL_LINES);
            glVertex2f(18+nx+c,44+2+d);
            glVertex2f(16+nx+c,40+3+d);
            glVertex2f(13+nx+c,28+ny+d);
            glVertex2f(15+nx+c,25+ny+1+d);
            glVertex2f(30+nx+c,25+ny+1+d);
            glVertex2f(35+nx+c,23+ny+1+d);
            glVertex2f(48-nx-2+c,35+5+d);
            glVertex2f(45-nx-3+c,40+5+d);
        glEnd();
     nx=6;ny=9;
        glBegin(GL_LINES);
            glVertex2f(20+nx-2+c,47+1+d);
            glVertex2f(18+nx+c,44+3+d);
            glVertex2f(16+nx+c,40+4+d);
            glVertex2f(14+nx+c,35+4+d);
            glVertex2f(13+nx+c,28+ny+d);
            glVertex2f(15+nx+c,25+ny+2+d);
            glVertex2f(20+nx+c,25+ny+2+d);
            glVertex2f(25+nx+c,22+ny+2+d);
        glEnd();
    //4th
    nx=8;ny=12;
        glBegin(GL_LINES);
            glVertex2f(20+nx-2+c,47+2+d);
            glVertex2f(18+nx+c,44+4+d);
            glVertex2f(16+nx+1+c,40+6+d);
            glVertex2f(14+nx+1+c,35+8+d);
            glVertex2f(13+nx+1+c,28+ny+d);
            glVertex2f(15+nx+1+c,25+ny+2+d);
            glVertex2f(20+nx+c,25+ny+2+d);
            glVertex2f(25+nx+c,23+ny+2+d);
            glVertex2f(30+nx+c,25+ny+2+d);
            glVertex2f(35+nx+c,23+ny+2+d);
        glEnd();

    glFlush();

}

void text()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0.74902, 0.847059, 0.847059,1.0);
    glColor3f(1,0,0);
	glRasterPos2f(300,665);
	for(i=0;i<strlen(str);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
	}
	glRasterPos2f(360,635);
	for(i=0;i<strlen(str1);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[i]);
	}
	char my1[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
	glRasterPos2f(235, 605);
	for(i=0;i<strlen(my1);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my1[i]);
	}
	displayLogo();      //logo being texture mapped
	glColor3f(0,0,1);
	glRasterPos2f(235,560);
	for(i=0;i<strlen(str2);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[i]);
	}

	glRasterPos2f(445,530);
	for(i=0;i<strlen(str3);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[i]);
	}
	glColor3f(0,0,0);
	glRasterPos2f(360,370);
	for(i=0;i<strlen(str4);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[i]);
	}

	glColor3f(1,0,1);
	/*glRasterPos2f(420,380);
	for(i=0;i<strlen(str5);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[i]);//presented by
	}*/
	glColor3f(.333,0.420,.184);
	glRasterPos2f(100,360);
	for(i=0;i<strlen(str6);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[i]);
	}
	char my2[]="USN: 1BI18CS193";
	glRasterPos2f(100, 330);
	for(i=0;i<strlen(my2);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my2[i]);
	}
	char my3[]="B-4 BATCH";
	glRasterPos2f(100, 300);
	for(i=0;i<strlen(my3);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my3[i]);
	}
	glRasterPos2f(700,360);
	for(i=0;i<strlen(str7);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[i]);
	}
	char my4[]="USN: 1BI18CS194";
	glRasterPos2f(700, 330);
	for(i=0;i<strlen(my4);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my4[i]);
	}
	glRasterPos2f(700, 300);
	for(i=0;i<strlen(my3);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my3[i]);
	}

	char my6[]="Under the guidance of:";
	char my7[]="Prof. K. J. BHANUSHREE";
	char my8[]="Assistant Professor";

	glColor3f(0,0,1);
	glRasterPos2f(100,250);
	for(i=0;i<strlen(my6);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my6[i]);
	}
	glRasterPos2f(100,210);
	for(i=0;i<strlen(my7);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my7[i]);
	}
	glRasterPos2f(100,180);
	for(i=0;i<strlen(my8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my8[i]);
	}

	char my9[]="Lab Incharges:";
	char my10[]="Prof. N. THANUJA";
	char my11[]="Prof. MAMATHA V.";

	glRasterPos2f(700,250);
	for(i=0;i<strlen(my9);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my9[i]);
	}
	glRasterPos2f(700,210);
	for(i=0;i<strlen(my10);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my10[i]);
	}
	glRasterPos2f(700,180);
	for(i=0;i<strlen(my8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my8[i]);
	}
	glRasterPos2f(700,140);
	for(i=0;i<strlen(my11);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my11[i]);
	}
	glRasterPos2f(700,110);
	for(i=0;i<strlen(my8);i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,my8[i]);
	}

}

void displayLogo()
{
    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_TEXTURE_2D);
    glColor3f(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, introBG);
    glBegin(GL_QUADS);
    glVertex2f(445, 405);
    glTexCoord2f(0, 0);
    glVertex2f(445, 510);
    glTexCoord2f(0, 1);
    glVertex2f(520, 510);
    glTexCoord2f(1, 1);
    glVertex2f(520, 405);
    glTexCoord2f(1, 0);
    glEnd();
    //glFlush();
    glDisable(GL_TEXTURE_2D);
    //glutSwapBuffers();
    //glutPostRedisplay();
}
void loadLogo(void)
{
    glGenTextures(1,&introBG);
    glBindTexture(GL_TEXTURE_2D,introBG);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
    int width, height,channels;
    //GetImagePath getImagePath;
    char *path = "D:\\codeblocks_projects\\unity_is_strength\\logo.jpg";
    //path = getImagePath.getPath(&path,true);
   // printf("\nPath is %s\n",path);
    unsigned char *data = stbi_load(path, &width, &height, &channels, STBI_rgb_alpha);
    printf("Loaded image with a width of %dpx, a height of %dpx and %d channels\n", width, height, channels);
    if(data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    }
    else
    {
        std::cout << "Failed to load intro slide" << std::endl;
    }
    stbi_image_free(data);
    std::cout << "done" << std::endl;
    glutPostRedisplay();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1480,800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("opengl window");
	loadLogo();
    glutDisplayFunc(mydisplay);
    glutFullScreen();
	myinit();
    glEnable(GL_DEPTH_TEST);
	glutMainLoop();
	return 0;
}
