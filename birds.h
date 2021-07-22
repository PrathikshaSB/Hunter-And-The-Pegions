#ifndef BIRDS_H_INCLUDED
#define BIRDS_H_INCLUDED

void bird(int n); //bg2,do-2 5
void bird1(int n);//bg3 do-3 6 7 8
void bird2(int n);//bg4 do-4
extern float a,b;

void bird(int n)
{

    int no=n;
    int b2x,b2y;
    if(no==1)
    {
        b2x=0;b2y=0;
    }else if(no==2)
    {
        b2x=-15;
        b2y=3;
    }else if(no==3)
    {
        b2x=-8;
        b2y=-5;
    }else if(no==4)
    {
        b2x=-18;
        b2y=-8;
    }else if(no==5)
    {
        b2x=4;
        b2y=-9;
    }else if(no==6)
    {
        b2x=-6;
        b2y=7;
    }


    a-=0.01;
if(a>-100)
{


     //front of bird2

	glBegin(GL_POLYGON);
glShadeModel(GL_SMOOTH);
	glLineWidth(100.0);
	glColor3f(1,1,1);
	glVertex2f(83+b2x+a,90+b2y+a);
	glVertex2f(83.1+b2x+a,90.2+b2y+a);
	glVertex2f(83.2+b2x+a,90.3+b2y+a);
	glVertex2f(83.3+b2x+a,90.3+b2y+a);
	glVertex2f(83.4+b2x+a,90.4+b2y+a);
	glVertex2f(83.6+b2x+a,90.6+b2y+a);
	glVertex2f(83.8+b2x+a,90.6+b2y+a);
	glVertex2f(84+b2x+a,90.6+b2y+a);
	glVertex2f(84.2+b2x+a,90.6+b2y+a);
	glVertex2f(84.4+b2x+a,90.6+b2y+a);
	glVertex2f(84.6+b2x+a,90.3+b2y+a);
	glVertex2f(84.8+b2x+a,90+b2y+a);
	glVertex2f(85+b2x+a,89.4+b2y+a);
	glVertex2f(85.2+b2x+a,89.2+b2y+a);
	glVertex2f(85.4+b2x+a,88.9+b2y+a);
	glVertex2f(85.6+b2x+a,88.8+b2y+a);
	glVertex2f(85.8+b2x+a,88.77+b2y+a);
	glVertex2f(86+b2x+a,88.75+b2y+a);
glEnd();

glBegin(GL_POLYGON);
	glVertex2f(86.2+b2x+a,88.8+b2y+a);
	glVertex2f(86.4+b2x+a,89+b2y+a);
	glVertex2f(86.6+b2x+a,89.15+b2y+a);
	glVertex2f(86.8+b2x+a,89.2+b2y+a);
	glVertex2f(87+b2x+a,89.25+b2y+a);
	glVertex2f(87.2+b2x+a,89.3+b2y+a);
	glVertex2f(87.4+b2x+a,89.35+b2y+a);
	glVertex2f(87.6+b2x+a,89.4+b2y+a);
	glVertex2f(87.8+b2x+a,89.45+b2y+a);
	glVertex2f(88+b2x+a,89.5+b2y+a);
	glVertex2f(88.2+b2x+a,89.55+b2y+a);
	glVertex2f(88.4+b2x+a,89.6+b2y+a);
	glVertex2f(88.6+b2x+a,89.65+b2y+a);
	glVertex2f(88.8+b2x+a,89.7+b2y+a);
	glVertex2f(89.8+b2x+a,89.75+b2y+a);
	glVertex2f(89+b2x+a,89.8+b2y+a);
	glVertex2f(89.2+b2x+a,89.85+b2y+a);
	glVertex2f(89.4+b2x+a,89.9+b2y+a);
	glVertex2f(89.6+b2x+a,89.95+b2y+a);
	glVertex2f(89.8+b2x+a,90+b2y+a);
	glVertex2f(90+b2x+a,90.05+b2y+a);
	glVertex2f(90.2+b2x+a,90.1+b2y+a);
	glVertex2f(90.4+b2x+a,90.15+b2y+a);
	glVertex2f(90.6+b2x+a,90.2+b2y+a);
	glVertex2f(90.8+b2x+a,90.25+b2y+a);
	glVertex2f(91+b2x+a,90.3+b2y+a);
	glVertex2f(91.2+b2x+a,90.35+b2y+a);
	glVertex2f(91+b2x+a,89.8+b2y+a);
	glVertex2f(90.8+b2x+a,89.6+b2y+a);
	glVertex2f(90.6+b2x+a,89+b2y+a);
	glVertex2f(90.4+b2x+a,88.6+b2y+a);
	glVertex2f(90.2+b2x+a,88.4+b2y+a);
	glVertex2f(90+b2x+a,88+b2y+a);
	glVertex2f(89.8+b2x+a,87.8+b2y+a);
	glVertex2f(89.6+b2x+a,87.6+b2y+a);
	glVertex2f(89.4+b2x+a,87.4+b2y+a);
	glVertex2f(89.2+b2x+a,87.2+b2y+a);
	glVertex2f(89+b2x+a,87+b2y+a);
glEnd();

// bird6 back side feather
glBegin(GL_POLYGON);
	glVertex2f(89+b2x+a,87.2+b2y+a);
	glVertex2f(89.2+b2x+a,87.3+b2y+a);
	glVertex2f(89.4+b2x+a,87.4+b2y+a);
	glVertex2f(89.6+b2x+a,87.6+b2y+a);
	glVertex2f(89.8+b2x+a,87.8+b2y+a);
	glVertex2f(90+b2x+a,88+b2y+a);
	glVertex2f(90.2+b2x+a,88.1+b2y+a);
	glVertex2f(90.4+b2x+a,88.2+b2y+a);
	glVertex2f(90.6+b2x+a,88.25+b2y+a);
	glVertex2f(90.8+b2x+a,88.2+b2y+a);
	glVertex2f(91+b2x+a,88.1+b2y+a);
	glVertex2f(91.2+b2x+a,88.05+b2y+a);
	glVertex2f(91.4+b2x+a,88+b2y+a);
	glVertex2f(91.6+b2x+a,87.9+b2y+a);
	glVertex2f(91.8+b2x+a,87.87+b2y+a);
	glVertex2f(92+b2x+a,87.84+b2y+a);
	glVertex2f(92.2+b2x+a,87.83+b2y+a);
	glVertex2f(92.4+b2x+a,87.84+b2y+a);
	glVertex2f(92.6+b2x+a,87.88+b2y+a);
	glVertex2f(92.8+b2x+a,87.9+b2y+a);
	glVertex2f(93+b2x+a,88+b2y+a);
	glVertex2f(93.2+b2x+a,88.2+b2y+a);
	glVertex2f(93.4+b2x+a,88+b2y+a);
	glVertex2f(93.2+b2x+a,87.2+b2y+a);
	glVertex2f(93+b2x+a,87+b2y+a);
	glVertex2f(93.2+b2x+a,87.2+b2y+a);
	glVertex2f(93.4+b2x+a,87.4+b2y+a);
	glVertex2f(93.6+b2x+a,87.6+b2y+a);
	glVertex2f(93.8+b2x+a,87.7+b2y+a);
	glVertex2f(94+b2x+a,87.6+b2y+a);
	glVertex2f(94.2+b2x+a,87.5+b2y+a);
	glVertex2f(94.4+b2x+a,87.5+b2y+a);
	glVertex2f(94.6+b2x+a,87.5+b2y+a);
	glVertex2f(94.8+b2x+a,87.4+b2y+a);
	glVertex2f(95+b2x+a,87.35+b2y+a);
	glVertex2f(94.8+b2x+a,87+b2y+a);
	glVertex2f(94.6+b2x+a,86.8+b2y+a);
	glVertex2f(94.4+b2x+a,86.7+b2y+a);
	glVertex2f(94.2+b2x+a,86.6+b2y+a);
	glVertex2f(94+b2x+a,86.5+b2y+a);
	glVertex2f(93.8+b2x+a,86.4+b2y+a);
	glVertex2f(94+b2x+a,86.3+b2y+a);
	glVertex2f(94.2+b2x+a,86.4+b2y+a);
	glVertex2f(94.4+b2x+a,86.5+b2y+a);
	glVertex2f(94.2+b2x+a,86.2+b2y+a);
	glVertex2f(94+b2x+a,86+b2y+a);
	glVertex2f(93.8+b2x+a,85.8+b2y+a);
	glVertex2f(93.6+b2x+a,85.7+b2y+a);
	glVertex2f(93.4+b2x+a,85.6+b2y+a);
	glVertex2f(93.2+b2x+a,85.55+b2y+a);
	glVertex2f(93+b2x+a,85.5+b2y+a);
	glVertex2f(92.8+b2x+a,85.5+b2y+a);
	glVertex2f(92.6+b2x+a,85.45+b2y+a);
	glVertex2f(92.4+b2x+a,85.4+b2y+a);
	glVertex2f(92.2+b2x+a,85.35+b2y+a);
	glVertex2f(92+b2x+a,85.32+b2y+a);
	glVertex2f(91.8+b2x+a,85.275+b2y+a);
	glVertex2f(91.6+b2x+a,85.250+b2y+a);
	glVertex2f(91.4+b2x+a,85.225+b2y+a);
	glVertex2f(91.2+b2x+a,85.2+b2y+a);
	glVertex2f(91+b2x+a,85.2+b2y+a);
	glVertex2f(90.8+b2x+a,85.225+b2y+a);
	glVertex2f(90.6+b2x+a,85.250+b2y+a);
	glVertex2f(90.4+b2x+a,85.275+b2y+a);
	glVertex2f(90.2+b2x+a,85.3+b2y+a);
	glVertex2f(90+b2x+a,85.4+b2y+a);
	glVertex2f(89.8+b2x+a,85.45+b2y+a);
	glVertex2f(89.6+b2x+a,85.5+b2y+a);
	glVertex2f(89.4+b2x+a,85.6+b2y+a);
	glVertex2f(89.2+b2x+a,85.8+b2y+a);
	glVertex2f(89+b2x+a,85.6+b2y+a);
glEnd();

//after back feather to front bird6
glBegin(GL_POLYGON);
	glVertex2f(86.2+b2x+a,88.8+b2y+a);
	glVertex2f(89+b2x+a,87.2+b2y+a);
	glVertex2f(89+b2x+a,85.6+b2y+a);
	glVertex2f(88.8+b2x+a,85.5+b2y+a);
	glVertex2f(88.6+b2x+a,85.4+b2y+a);
	glVertex2f(88.4+b2x+a,85.375+b2y+a);
	glVertex2f(88.2+b2x+a,85.3+b2y+a);
	glVertex2f(88+b2x+a,85.325+b2y+a);
	glVertex2f(87.8+b2x+a,85.3+b2y+a);
	glVertex2f(87.6+b2x+a,85.275+b2y+a);
	glVertex2f(87.4+b2x+a,85.25+b2y+a);
	glVertex2f(87.2+b2x+a,85.2+b2y+a);
	glVertex2f(87+b2x+a,85.25+b2y+a);
	glVertex2f(86.8+b2x+a,85.275+b2y+a);
	glVertex2f(86.6+b2x+a,85.3+b2y+a);
	glVertex2f(86.4+b2x+a,85.325+b2y+a);
	glVertex2f(86.2+b2x+a,85.350+b2y+a);
	glVertex2f(86+b2x+a,85.375+b2y+a);
	glVertex2f(85.8+b2x+a,85.4+b2y+a);
	glVertex2f(85.6+b2x+a,85.45+b2y+a);
	glVertex2f(85.4+b2x+a,85.5+b2y+a);
	glVertex2f(85.2+b2x+a,85.6+b2y+a);
	glVertex2f(85+b2x+a,85.7+b2y+a);
	glVertex2f(84.8+b2x+a,85.8+b2y+a);
	glVertex2f(84.6+b2x+a,85.9+b2y+a);
	glVertex2f(84.4+b2x+a,86+b2y+a);
	glVertex2f(84.2+b2x+a,86.2+b2y+a);
	glVertex2f(84+b2x+a,86.4+b2y+a);
	glVertex2f(83.8+b2x+a,86.7+b2y+a);
	glVertex2f(83.6+b2x+a,87+b2y+a);
	glVertex2f(83.4+b2x+a,88.6+b2y+a);
	glVertex2f(83.2+b2x+a,88.9+b2y+a);
	glVertex2f(83+b2x+a,89+b2y+a);
	glVertex2f(82.8+b2x+a,89+b2y+a);
	glVertex2f(82.9+b2x+a,89.9+b2y+a);
	glVertex2f(83+b2x+a,90+b2y+a);
	glEnd();

// bird6 leg
glBegin(GL_POLYGON);
	glColor3f(0.8,0.6,0.0);
	glVertex2f(86.6+b2x+a,85.3+b2y+a);
	glVertex2f(86.8+b2x+a,85.2+b2y+a);
	glVertex2f(87+b2x+a,85+b2y+a);
	glVertex2f(87.2+b2x+a,84.9+b2y+a);
	glVertex2f(87.4+b2x+a,84.8+b2y+a);
	glVertex2f(87.6+b2x+a,84.9+b2y+a);
	glVertex2f(87.8+b2x+a,85+b2y+a);
	glVertex2f(87.8+b2x+a,85.2+b2y+a);
	glVertex2f(87.6+b2x+a,85.3+b2y+a);
glEnd();


//bird6 eye

glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(83.8+b2x+a,89.8+b2y+a);
	glVertex2f(84+b2x+a,89.6+b2y+a);
	glVertex2f(83.8+b2x+a,89.4+b2y+a);
	glVertex2f(83.6+b2x+a,89.6+b2y+a);
glEnd();


//mouth bird6
//glBegin(GL_LINE_STRIP);
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
	glLineWidth(100.0);
	glColor3f(0,0,0);
	glVertex2f(81.8+b2x+a,89.2+b2y+a);
	glVertex2f(82+b2x+a,89.3+b2y+a);
	glVertex2f(82.2+b2x+a,89.4+b2y+a);
	glVertex2f(82.4+b2x+a,89.6+b2y+a);
	glVertex2f(82.6+b2x+a,89.7+b2y+a);
	glVertex2f(82.8+b2x+a,89.8+b2y+a);
	glVertex2f(82.9+b2x+a,89.9+b2y+a);
	glVertex2f(82.8+b2x+a,89+b2y+a);
	glVertex2f(82.6+b2x+a,88.9+b2y+a);
	glVertex2f(82.4+b2x+a,89+b2y+a);
	glVertex2f(82.2+b2x+a,89.05+b2y+a);
	glVertex2f(82+b2x+a,89.1+b2y+a);
	glVertex2f(81.8+b2x+a,89.15+b2y+a);
	glVertex2f(81.6+b2x+a,89.2+b2y+a);

glEnd();
}

}


void bird1(int n)
{
   int no=n;
    int b2x,b2y;
   // float a,b;
    if(no==1)
    {
        b2x=0;b2y=0;
    }else if(no==2)
    {
        b2x=-15;
        b2y=3;
    }else if(no==3)
    {
        b2x=-8;
        b2y=-5;
    }else if(no==4)
    {
        b2x=-18;
        b2y=-8;
    }else if(no==5)
    {
        b2x=4;
        b2y=-9;
    }else if(no==6)
    {
        b2x=-6;
        b2y=7;
    }



    a-=0.01;
     b+=0.01;
    if(a>-100)
{


// bird1 code middle riht most

//front of bird1
glBegin(GL_POLYGON);
glShadeModel(GL_SMOOTH);
	glLineWidth(100.0);
	glColor3f(1,1,1);
	glVertex2f(83+b2x+a,90+b2y-50+b);
	glVertex2f(83.1+b2x+a,90.2+b2y-50+b);
	glVertex2f(83.2+b2x+a,90.3+b2y-50+b);
	glVertex2f(83.3+b2x+a,90.3+b2y-50+b);
	glVertex2f(83.4+b2x+a,90.4+b2y-50+b);
	glVertex2f(83.6+b2x+a,90.6+b2y-50+b);
	glVertex2f(83.8+b2x+a,90.6+b2y-50+b);
	glVertex2f(84+b2x+a,90.6+b2y-50+b);
	glVertex2f(84.2+b2x+a,90.6+b2y-50+b);
	glVertex2f(84.4+b2x+a,90.6+b2y-50+b);
	glVertex2f(84.6+b2x+a,90.3+b2y-50+b);
	glVertex2f(84.8+b2x+a,90+b2y-50+b);
	glVertex2f(85+b2x+a,89.4+b2y-50+b);
	glVertex2f(85.2+b2x+a,89.2+b2y-50+b);
	glVertex2f(85.4+b2x+a,88.9+b2y-50+b);
	glVertex2f(85.6+b2x+a,88.8+b2y-50+b);
	glVertex2f(85.8+b2x+a,88.77+b2y-50+b);
	glVertex2f(86+b2x+a,88.75+b2y-50+b);
glEnd();

glBegin(GL_POLYGON);
	glVertex2f(86.2+b2x+a,88.8+b2y-50+b);
	glVertex2f(86.4+b2x+a,89+b2y-50+b);
	glVertex2f(86.6+b2x+a,89.15+b2y-50+b);
	glVertex2f(86.8+b2x+a,89.2+b2y-50+b);
	glVertex2f(87+b2x+a,89.25+b2y-50+b);
	glVertex2f(87.2+b2x+a,89.3+b2y-50+b);
	glVertex2f(87.4+b2x+a,89.35+b2y-50+b);
	glVertex2f(87.6+b2x+a,89.4+b2y-50+b);
	glVertex2f(87.8+b2x+a,89.45+b2y-50+b);
	glVertex2f(88+b2x+a,89.5+b2y-50+b);
	glVertex2f(88.2+b2x+a,89.55+b2y-50+b);
	glVertex2f(88.4+b2x+a,89.6+b2y-50+b);
	glVertex2f(88.6+b2x+a,89.65+b2y-50+b);
	glVertex2f(88.8+b2x+a,89.7+b2y-50+b);
	glVertex2f(89.8+b2x+a,89.75+b2y-50+b);
	glVertex2f(89+b2x+a,89.8+b2y-50+b);
	glVertex2f(89.2+b2x+a,89.85+b2y-50+b);
	glVertex2f(89.4+b2x+a,89.9+b2y-50+b);
	glVertex2f(89.6+b2x+a,89.95+b2y-50+b);
	glVertex2f(89.8+b2x+a,90+b2y-50+b);
	glVertex2f(90+b2x+a,90.05+b2y-50+b);
	glVertex2f(90.2+b2x+a,90.1+b2y-50+b);
	glVertex2f(90.4+b2x+a,90.15+b2y-50+b);
	glVertex2f(90.6+b2x+a,90.2+b2y-50+b);
	glVertex2f(90.8+b2x+a,90.25+b2y-50+b);
	glVertex2f(91+b2x+a,90.3+b2y-50+b);
	glVertex2f(91.2+b2x+a,90.35+b2y-50+b);
	glVertex2f(91+b2x+a,89.8+b2y-50+b);
	glVertex2f(90.8+b2x+a,89.6+b2y-50+b);
	glVertex2f(90.6+b2x+a,89+b2y-50+b);
	glVertex2f(90.4+b2x+a,88.6+b2y-50+b);
	glVertex2f(90.2+b2x+a,88.4+b2y-50+b);
	glVertex2f(90+b2x+a,88+b2y-50+b);
	glVertex2f(89.8+b2x+a,87.8+b2y-50+b);
	glVertex2f(89.6+b2x+a,87.6+b2y-50+b);
	glVertex2f(89.4+b2x+a,87.4+b2y-50+b);
	glVertex2f(89.2+b2x+a,87.2+b2y-50+b);
	glVertex2f(89+b2x+a,87+b2y-50+b);
glEnd();

// bird2 back side feather
glBegin(GL_POLYGON);
	glVertex2f(89+b2x+a,87.2+b2y-50+b);
	glVertex2f(89.2+b2x+a,87.3+b2y-50+b);
	glVertex2f(89.4+b2x+a,87.4+b2y-50+b);
	glVertex2f(89.6+b2x+a,87.6+b2y-50+b);
	glVertex2f(89.8+b2x+a,87.8+b2y-50+b);
	glVertex2f(90+b2x+a,88+b2y-50+b);
	glVertex2f(90.2+b2x+a,88.1+b2y-50+b);
	glVertex2f(90.4+b2x+a,88.2+b2y-50+b);
	glVertex2f(90.6+b2x+a,88.25+b2y-50+b);
	glVertex2f(90.8+b2x+a,88.2+b2y-50+b);
	glVertex2f(91+b2x+a,88.1+b2y-50+b);
	glVertex2f(91.2+b2x+a,88.05+b2y-50+b);
	glVertex2f(91.4+b2x+a,88+b2y-50+b);
	glVertex2f(91.6+b2x+a,87.9+b2y-50+b);
	glVertex2f(91.8+b2x+a,87.87+b2y-50+b);
	glVertex2f(92+b2x+a,87.84+b2y-50+b);
	glVertex2f(92.2+b2x+a,87.83+b2y-50+b);
	glVertex2f(92.4+b2x+a,87.84+b2y-50+b);
	glVertex2f(92.6+b2x+a,87.88+b2y-50+b);
	glVertex2f(92.8+b2x+a,87.9+b2y-50+b);
	glVertex2f(93+b2x+a,88+b2y-50+b);
	glVertex2f(93.2+b2x+a,88.2+b2y-50+b);
	glVertex2f(93.4+b2x+a,88+b2y-50+b);
	glVertex2f(93.2+b2x+a,87.2+b2y-50+b);
	glVertex2f(93+b2x+a,87+b2y-50+b);
	glVertex2f(93.2+b2x+a,87.2+b2y-50+b);
	glVertex2f(93.4+b2x+a,87.4+b2y-50+b);
	glVertex2f(93.6+b2x+a,87.6+b2y-50+b);
	glVertex2f(93.8+b2x+a,87.7+b2y-50+b);
	glVertex2f(94+b2x+a,87.6+b2y-50+b);
	glVertex2f(94.2+b2x+a,87.5+b2y-50+b);
	glVertex2f(94.4+b2x+a,87.5+b2y-50+b);
	glVertex2f(94.6+b2x+a,87.5+b2y-50+b);
	glVertex2f(94.8+b2x+a,87.4+b2y-50+b);
	glVertex2f(95+b2x+a,87.35+b2y-50+b);
	glVertex2f(94.8+b2x+a,87+b2y-50+b);
	glVertex2f(94.6+b2x+a,86.8+b2y-50+b);
	glVertex2f(94.4+b2x+a,86.7+b2y-50+b);
	glVertex2f(94.2+b2x+a,86.6+b2y-50+b);
	glVertex2f(94+b2x+a,86.5+b2y-50+b);
	glVertex2f(93.8+b2x+a,86.4+b2y-50+b);
	glVertex2f(94+b2x+a,86.3+b2y-50+b);
	glVertex2f(94.2+b2x+a,86.4+b2y-50+b);
	glVertex2f(94.4+b2x+a,86.5+b2y-50+b);
	glVertex2f(94.2+b2x+a,86.2+b2y-50+b);
	glVertex2f(94+b2x+a,86+b2y-50+b);
	glVertex2f(93.8+b2x+a,85.8+b2y-50+b);
	glVertex2f(93.6+b2x+a,85.7+b2y-50+b);
	glVertex2f(93.4+b2x+a,85.6+b2y-50+b);
	glVertex2f(93.2+b2x+a,85.55+b2y-50+b);
	glVertex2f(93+b2x+a,85.5+b2y-50+b);
	glVertex2f(92.8+b2x+a,85.5+b2y-50+b);
	glVertex2f(92.6+b2x+a,85.45+b2y-50+b);
	glVertex2f(92.4+b2x+a,85.4+b2y-50+b);
	glVertex2f(92.2+b2x+a,85.35+b2y-50+b);
	glVertex2f(92+b2x+a,85.32+b2y-50+b);
	glVertex2f(91.8+b2x+a,85.275+b2y-50+b);
	glVertex2f(91.6+b2x+a,85.250+b2y-50+b);
	glVertex2f(91.4+b2x+a,85.225+b2y-50+b);
	glVertex2f(91.2+b2x+a,85.2+b2y-50+b);
	glVertex2f(91+b2x+a,85.2+b2y-50+b);
	glVertex2f(90.8+b2x+a,85.225+b2y-50+b);
	glVertex2f(90.6+b2x+a,85.250+b2y-50+b);
	glVertex2f(90.4+b2x+a,85.275+b2y-50+b);
	glVertex2f(90.2+b2x+a,85.3+b2y-50+b);
	glVertex2f(90+b2x+a,85.4+b2y-50+b);
	glVertex2f(89.8+b2x+a,85.45+b2y-50+b);
	glVertex2f(89.6+b2x+a,85.5+b2y-50+b);
	glVertex2f(89.4+b2x+a,85.6+b2y-50+b);
	glVertex2f(89.2+b2x+a,85.8+b2y-50+b);
	glVertex2f(89+b2x+a,85.6+b2y-50+b);
glEnd();

//after back feather to front bird2
glBegin(GL_POLYGON);
	glVertex2f(86.2+b2x+a,88.8+b2y-50+b);
	glVertex2f(89+b2x+a,87.2+b2y-50+b);
	glVertex2f(89+b2x+a,85.6+b2y-50+b);
	glVertex2f(88.8+b2x+a,85.5+b2y-50+b);
	glVertex2f(88.6+b2x+a,85.4+b2y-50+b);
	glVertex2f(88.4+b2x+a,85.375+b2y-50+b);
	glVertex2f(88.2+b2x+a,85.3+b2y-50+b);
	glVertex2f(88+b2x+a,85.325+b2y-50+b);
	glVertex2f(87.8+b2x+a,85.3+b2y-50+b);
	glVertex2f(87.6+b2x+a,85.275+b2y-50+b);
	glVertex2f(87.4+b2x+a,85.25+b2y-50+b);
	glVertex2f(87.2+b2x+a,85.2+b2y-50+b);
	glVertex2f(87+b2x+a,85.25+b2y-50+b);
	glVertex2f(86.8+b2x+a,85.275+b2y-50+b);
	glVertex2f(86.6+b2x+a,85.3+b2y-50+b);
	glVertex2f(86.4+b2x+a,85.325+b2y-50+b);
	glVertex2f(86.2+b2x+a,85.350+b2y-50+b);
	glVertex2f(86+b2x+a,85.375+b2y-50+b);
	glVertex2f(85.8+b2x+a,85.4+b2y-50+b);
	glVertex2f(85.6+b2x+a,85.45+b2y-50+b);
	glVertex2f(85.4+b2x+a,85.5+b2y-50+b);
	glVertex2f(85.2+b2x+a,85.6+b2y-50+b);
	glVertex2f(85+b2x+a,85.7+b2y-50+b);
	glVertex2f(84.8+b2x+a,85.8+b2y-50+b);
	glVertex2f(84.6+b2x+a,85.9+b2y-50+b);
	glVertex2f(84.4+b2x+a,86+b2y-50+b);
	glVertex2f(84.2+b2x+a,86.2+b2y-50+b);
	glVertex2f(84+b2x+a,86.4+b2y-50+b);
	glVertex2f(83.8+b2x+a,86.7+b2y-50+b);
	glVertex2f(83.6+b2x+a,87+b2y-50+b);
	glVertex2f(83.4+b2x+a,88.6+b2y-50+b);
	glVertex2f(83.2+b2x+a,88.9+b2y-50+b);
	glVertex2f(83+b2x+a,89+b2y-50+b);
	glVertex2f(82.8+b2x+a,89+b2y-50+b);
	glVertex2f(82.9+b2x+a,89.9+b2y-50+b);
	glVertex2f(83+b2x+a,90+b2y-50+b);
	glEnd();

// bird2 leg
glBegin(GL_POLYGON);
	glColor3f(0.8,0.6,0.0);
	glVertex2f(86.6+b2x+a,85.3+b2y-50+b);
	glVertex2f(86.8+b2x+a,85.2+b2y-50+b);
	glVertex2f(87+b2x+a,85+b2y-50+b);
	glVertex2f(87.2+b2x+a,84.9+b2y-50+b);
	glVertex2f(87.4+b2x+a,84.8+b2y-50+b);
	glVertex2f(87.6+b2x+a,84.9+b2y-50+b);
	glVertex2f(87.8+b2x+a,85+b2y-50+b);
	glVertex2f(87.8+b2x+a,85.2+b2y-50+b);
	glVertex2f(87.6+b2x+a,85.3+b2y-50+b);
glEnd();


//bird2 eye

glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(83.8+b2x+a,89.8+b2y-50+b);
	glVertex2f(84+b2x+a,89.6+b2y-50+b);
	glVertex2f(83.8+b2x+a,89.4+b2y-50+b);
	glVertex2f(83.6+b2x+a,89.6+b2y-50+b);
glEnd();


//mouth bird2
//glBegin(GL_LINE_STRIP);
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
	glLineWidth(100.0);
	glColor3f(0,0,0);
	glVertex2f(81.8+b2x+a,89.2+b2y-50+b);
	glVertex2f(82+b2x+a,89.3+b2y-50+b);
	glVertex2f(82.2+b2x+a,89.4+b2y-50+b);
	glVertex2f(82.4+b2x+a,89.6+b2y-50+b);
	glVertex2f(82.6+b2x+a,89.7+b2y-50+b);
	glVertex2f(82.8+b2x+a,89.8+b2y-50+b);
	glVertex2f(82.9+b2x+a,89.9+b2y-50+b);
	glVertex2f(82.8+b2x+a,89+b2y-50+b);
	glVertex2f(82.6+b2x+a,88.9+b2y-50+b);
	glVertex2f(82.4+b2x+a,89+b2y-50+b);
	glVertex2f(82.2+b2x+a,89.05+b2y-50+b);
	glVertex2f(82+b2x+a,89.1+b2y-50+b);
	glVertex2f(81.8+b2x+a,89.15+b2y-50+b);
	glVertex2f(81.6+b2x+a,89.2+b2y-50+b);

glEnd();



}
}



void bird2(int n)
{
     int no=n;
    int b2x,b2y;
   // float a,b;
    if(no==1)
    {
        b2x=0;b2y=0;
    }else if(no==2)
    {
        b2x=-15;
        b2y=3;
    }else if(no==3)
    {
        b2x=-8;
        b2y=-5;
    }else if(no==4)
    {
        b2x=-18;
        b2y=-8;
    }else if(no==5)
    {
        b2x=4;
        b2y=-9;
    }else if(no==6)
    {
        b2x=-6;
        b2y=7;
    }

    a-=0.01;
if(a>-100)
{
  //front of bird2
glBegin(GL_POLYGON);
glShadeModel(GL_SMOOTH);
	glLineWidth(100.0);
	glColor3f(1,1,1);
	glVertex2f(83+b2x+a,90+b2y);
	glVertex2f(83.1+b2x+a,90.2+b2y);
	glVertex2f(83.2+b2x+a,90.3+b2y);
	glVertex2f(83.3+b2x+a,90.3+b2y);
	glVertex2f(83.4+b2x+a,90.4+b2y);
	glVertex2f(83.6+b2x+a,90.6+b2y);
	glVertex2f(83.8+b2x+a,90.6+b2y);
	glVertex2f(84+b2x+a,90.6+b2y);
	glVertex2f(84.2+b2x+a,90.6+b2y);
	glVertex2f(84.4+b2x+a,90.6+b2y);
	glVertex2f(84.6+b2x+a,90.3+b2y);
	glVertex2f(84.8+b2x+a,90+b2y);
	glVertex2f(85+b2x+a,89.4+b2y);
	glVertex2f(85.2+b2x+a,89.2+b2y);
	glVertex2f(85.4+b2x+a,88.9+b2y);
	glVertex2f(85.6+b2x+a,88.8+b2y);
	glVertex2f(85.8+b2x+a,88.77+b2y);
	glVertex2f(86+b2x+a,88.75+b2y);
glEnd();

glBegin(GL_POLYGON);
	glVertex2f(86.2+b2x+a,88.8+b2y);
	glVertex2f(86.4+b2x+a,89+b2y);
	glVertex2f(86.6+b2x+a,89.15+b2y);
	glVertex2f(86.8+b2x+a,89.2+b2y);
	glVertex2f(87+b2x+a,89.25+b2y);
	glVertex2f(87.2+b2x+a,89.3+b2y);
	glVertex2f(87.4+b2x+a,89.35+b2y);
	glVertex2f(87.6+b2x+a,89.4+b2y);
	glVertex2f(87.8+b2x+a,89.45+b2y);
	glVertex2f(88+b2x+a,89.5+b2y);
	glVertex2f(88.2+b2x+a,89.55+b2y);
	glVertex2f(88.4+b2x+a,89.6+b2y);
	glVertex2f(88.6+b2x+a,89.65+b2y);
	glVertex2f(88.8+b2x+a,89.7+b2y);
	glVertex2f(89.8+b2x+a,89.75+b2y);
	glVertex2f(89+b2x+a,89.8+b2y);
	glVertex2f(89.2+b2x+a,89.85+b2y);
	glVertex2f(89.4+b2x+a,89.9+b2y);
	glVertex2f(89.6+b2x+a,89.95+b2y);
	glVertex2f(89.8+b2x+a,90+b2y);
	glVertex2f(90+b2x+a,90.05+b2y);
	glVertex2f(90.2+b2x+a,90.1+b2y);
	glVertex2f(90.4+b2x+a,90.15+b2y);
	glVertex2f(90.6+b2x+a,90.2+b2y);
	glVertex2f(90.8+b2x+a,90.25+b2y);
	glVertex2f(91+b2x+a,90.3+b2y);
	glVertex2f(91.2+b2x+a,90.35+b2y);
	glVertex2f(91+b2x+a,89.8+b2y);
	glVertex2f(90.8+b2x+a,89.6+b2y);
	glVertex2f(90.6+b2x+a,89+b2y);
	glVertex2f(90.4+b2x+a,88.6+b2y);
	glVertex2f(90.2+b2x+a,88.4+b2y);
	glVertex2f(90+b2x+a,88+b2y);
	glVertex2f(89.8+b2x+a,87.8+b2y);
	glVertex2f(89.6+b2x+a,87.6+b2y);
	glVertex2f(89.4+b2x+a,87.4+b2y);
	glVertex2f(89.2+b2x+a,87.2+b2y);
	glVertex2f(89+b2x+a,87+b2y);
glEnd();

// bird2 back side feather
glBegin(GL_POLYGON);
	glVertex2f(89+b2x+a,87.2+b2y);
	glVertex2f(89.2+b2x+a,87.3+b2y);
	glVertex2f(89.4+b2x+a,87.4+b2y);
	glVertex2f(89.6+b2x+a,87.6+b2y);
	glVertex2f(89.8+b2x+a,87.8+b2y);
	glVertex2f(90+b2x+a,88+b2y);
	glVertex2f(90.2+b2x+a,88.1+b2y);
	glVertex2f(90.4+b2x+a,88.2+b2y);
	glVertex2f(90.6+b2x+a,88.25+b2y);
	glVertex2f(90.8+b2x+a,88.2+b2y);
	glVertex2f(91+b2x+a,88.1+b2y);
	glVertex2f(91.2+b2x+a,88.05+b2y);
	glVertex2f(91.4+b2x+a,88+b2y);
	glVertex2f(91.6+b2x+a,87.9+b2y);
	glVertex2f(91.8+b2x+a,87.87+b2y);
	glVertex2f(92+b2x+a,87.84+b2y);
	glVertex2f(92.2+b2x+a,87.83+b2y);
	glVertex2f(92.4+b2x+a,87.84+b2y);
	glVertex2f(92.6+b2x+a,87.88+b2y);
	glVertex2f(92.8+b2x+a,87.9+b2y);
	glVertex2f(93+b2x+a,88+b2y);
	glVertex2f(93.2+b2x+a,88.2+b2y);
	glVertex2f(93.4+b2x+a,88+b2y);
	glVertex2f(93.2+b2x+a,87.2+b2y);
	glVertex2f(93+b2x+a,87+b2y);
	glVertex2f(93.2+b2x+a,87.2+b2y);
	glVertex2f(93.4+b2x+a,87.4+b2y);
	glVertex2f(93.6+b2x+a,87.6+b2y);
	glVertex2f(93.8+b2x+a,87.7+b2y);
	glVertex2f(94+b2x+a,87.6+b2y);
	glVertex2f(94.2+b2x+a,87.5+b2y);
	glVertex2f(94.4+b2x+a,87.5+b2y);
	glVertex2f(94.6+b2x+a,87.5+b2y);
	glVertex2f(94.8+b2x+a,87.4+b2y);
	glVertex2f(95+b2x+a,87.35+b2y);
	glVertex2f(94.8+b2x+a,87+b2y);
	glVertex2f(94.6+b2x+a,86.8+b2y);
	glVertex2f(94.4+b2x+a,86.7+b2y);
	glVertex2f(94.2+b2x+a,86.6+b2y);
	glVertex2f(94+b2x+a,86.5+b2y);
	glVertex2f(93.8+b2x+a,86.4+b2y);
	glVertex2f(94+b2x+a,86.3+b2y);
	glVertex2f(94.2+b2x+a,86.4+b2y);
	glVertex2f(94.4+b2x+a,86.5+b2y);
	glVertex2f(94.2+b2x+a,86.2+b2y);
	glVertex2f(94+b2x+a,86+b2y);
	glVertex2f(93.8+b2x+a,85.8+b2y);
	glVertex2f(93.6+b2x+a,85.7+b2y);
	glVertex2f(93.4+b2x+a,85.6+b2y);
	glVertex2f(93.2+b2x+a,85.55+b2y);
	glVertex2f(93+b2x+a,85.5+b2y);
	glVertex2f(92.8+b2x+a,85.5+b2y);
	glVertex2f(92.6+b2x+a,85.45+b2y);
	glVertex2f(92.4+b2x+a,85.4+b2y);
	glVertex2f(92.2+b2x+a,85.35+b2y);
	glVertex2f(92+b2x+a,85.32+b2y);
	glVertex2f(91.8+b2x+a,85.275+b2y);
	glVertex2f(91.6+b2x+a,85.250+b2y);
	glVertex2f(91.4+b2x+a,85.225+b2y);
	glVertex2f(91.2+b2x+a,85.2+b2y);
	glVertex2f(91+b2x+a,85.2+b2y);
	glVertex2f(90.8+b2x+a,85.225+b2y);
	glVertex2f(90.6+b2x+a,85.250+b2y);
	glVertex2f(90.4+b2x+a,85.275+b2y);
	glVertex2f(90.2+b2x+a,85.3+b2y);
	glVertex2f(90+b2x+a,85.4+b2y);
	glVertex2f(89.8+b2x+a,85.45+b2y);
	glVertex2f(89.6+b2x+a,85.5+b2y);
	glVertex2f(89.4+b2x+a,85.6+b2y);
	glVertex2f(89.2+b2x+a,85.8+b2y);
	glVertex2f(89+b2x+a,85.6+b2y);
glEnd();

//after back feather to front bird2
glBegin(GL_POLYGON);
	glVertex2f(86.2+b2x+a,88.8+b2y);
	glVertex2f(89+b2x+a,87.2+b2y);
	glVertex2f(89+b2x+a,85.6+b2y);
	glVertex2f(88.8+b2x+a,85.5+b2y);
	glVertex2f(88.6+b2x+a,85.4+b2y);
	glVertex2f(88.4+b2x+a,85.375+b2y);
	glVertex2f(88.2+b2x+a,85.3+b2y);
	glVertex2f(88+b2x+a,85.325+b2y);
	glVertex2f(87.8+b2x+a,85.3+b2y);
	glVertex2f(87.6+b2x+a,85.275+b2y);
	glVertex2f(87.4+b2x+a,85.25+b2y);
	glVertex2f(87.2+b2x+a,85.2+b2y);
	glVertex2f(87+b2x+a,85.25+b2y);
	glVertex2f(86.8+b2x+a,85.275+b2y);
	glVertex2f(86.6+b2x+a,85.3+b2y);
	glVertex2f(86.4+b2x+a,85.325+b2y);
	glVertex2f(86.2+b2x+a,85.350+b2y);
	glVertex2f(86+b2x+a,85.375+b2y);
	glVertex2f(85.8+b2x+a,85.4+b2y);
	glVertex2f(85.6+b2x+a,85.45+b2y);
	glVertex2f(85.4+b2x+a,85.5+b2y);
	glVertex2f(85.2+b2x+a,85.6+b2y);
	glVertex2f(85+b2x+a,85.7+b2y);
	glVertex2f(84.8+b2x+a,85.8+b2y);
	glVertex2f(84.6+b2x+a,85.9+b2y);
	glVertex2f(84.4+b2x+a,86+b2y);
	glVertex2f(84.2+b2x+a,86.2+b2y);
	glVertex2f(84+b2x+a,86.4+b2y);
	glVertex2f(83.8+b2x+a,86.7+b2y);
	glVertex2f(83.6+b2x+a,87+b2y);
	glVertex2f(83.4+b2x+a,88.6+b2y);
	glVertex2f(83.2+b2x+a,88.9+b2y);
	glVertex2f(83+b2x+a,89+b2y);
	glVertex2f(82.8+b2x+a,89+b2y);
	glVertex2f(82.9+b2x+a,89.9+b2y);
	glVertex2f(83+b2x+a,90+b2y);
	glEnd();

// bird2 leg
glBegin(GL_POLYGON);
	glColor3f(0.8,0.6,0.0);
	glVertex2f(86.6+b2x+a,85.3+b2y);
	glVertex2f(86.8+b2x+a,85.2+b2y);
	glVertex2f(87+b2x+a,85+b2y);
	glVertex2f(87.2+b2x+a,84.9+b2y);
	glVertex2f(87.4+b2x+a,84.8+b2y);
	glVertex2f(87.6+b2x+a,84.9+b2y);
	glVertex2f(87.8+b2x+a,85+b2y);
	glVertex2f(87.8+b2x+a,85.2+b2y);
	glVertex2f(87.6+b2x+a,85.3+b2y);
glEnd();


//bird2 eye

glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(83.8+b2x+a,89.8+b2y);
	glVertex2f(84+b2x+a,89.6+b2y);
	glVertex2f(83.8+b2x+a,89.4+b2y);
	glVertex2f(83.6+b2x+a,89.6+b2y);
glEnd();


//mouth bird2
//glBegin(GL_LINE_STRIP);
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
	glLineWidth(100.0);
	glColor3f(0,0,0);
	glVertex2f(81.8+b2x+a,89.2+b2y);
	glVertex2f(82+b2x+a,89.3+b2y);
	glVertex2f(82.2+b2x+a,89.4+b2y);
	glVertex2f(82.4+b2x+a,89.6+b2y);
	glVertex2f(82.6+b2x+a,89.7+b2y);
	glVertex2f(82.8+b2x+a,89.8+b2y);
	glVertex2f(82.9+b2x+a,89.9+b2y);
	glVertex2f(82.8+b2x+a,89+b2y);
	glVertex2f(82.6+b2x+a,88.9+b2y);
	glVertex2f(82.4+b2x+a,89+b2y);
	glVertex2f(82.2+b2x+a,89.05+b2y);
	glVertex2f(82+b2x+a,89.1+b2y);
	glVertex2f(81.8+b2x+a,89.15+b2y);
	glVertex2f(81.6+b2x+a,89.2+b2y);

glEnd();


}
}



#endif // BIRDS_H_INCLUDED
