#ifndef MAN_H_INCLUDED
#define MAN_H_INCLUDED

extern int display_order;
extern float ma, mf;

void man1()
{

int mx=300,my=300;

//glClearColor(0.722,0.525,0.043,1.0);//terr
    glColor3f(1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,2000,0,2000);
	glMatrixMode(GL_MODELVIEW);

if(display_order==2)
    {
        ma=0;
    }
if(display_order==3)
    {
        ma-=1;
    }


if(ma>-1300)
{
glBegin(GL_POLYGON);
			//glColor3f(0,0,0);
			glColor3f(1,0.871,0.678);
			glVertex2f(550+300+700+mx+ma,670+my);//head

			glVertex2f(530+300+700+mx+ma,610+my);
			glVertex2f(580+300+700+mx+ma,575+my);
			glVertex2f(610+300+700+mx+ma,665+my);
			//glVertex2f(610+300+700,685);
			glEnd();

glBegin(GL_POLYGON);
			glColor3f(0,0,0);//head
			glVertex2f(525+300+700+mx+ma,700+my);
			glVertex2f(510+300+700+mx+ma,675+my);
			glVertex2f(550+300+700+mx+ma,660+my);
			glVertex2f(610+300+700+mx+ma,665+my);
			glVertex2f(610+300+700+mx+ma,685+my);
			glVertex2f(600+300+700+mx+ma,700+my);
			glVertex2f(590+300+700+mx+ma,710+my);
			glVertex2f(550+300+700+mx+ma,710+my);
			glEnd();

glBegin(GL_POLYGON);
			//glColor3f(0,0,0);
			glColor3f(1,0.871,0.678);
			glVertex2f(535+300+700+mx+ma,610+my);//head
			glVertex2f(500+300+700+mx+ma,625+my);
			//glVertex2f(500+300+700,580);
			glVertex2f(525+300+700+mx+ma,575+my);
			glVertex2f(590+300+700+mx+ma,575+my);
			glEnd();
glBegin(GL_POLYGON);
			glColor3f(1,0.871,0.678);
			glVertex2f(510+300+700+mx+ma,675+my);//face
			glVertex2f(510+300+700+mx+ma,640+my);
			glVertex2f(550+300+700+mx+ma,660+my);
			glEnd();

glBegin(GL_POLYGON);
			glColor3f(1,0.871,0.678);
			glVertex2f(510+300+700+mx+ma,640+my);//face
			glVertex2f(500+300+700+mx+ma,625+my);
			glVertex2f(535+300+700+mx+ma,610+my);
			glVertex2f(550+300+700+mx+ma,660+my);
			glEnd();
glPointSize(6.0);//eye
glBegin(GL_POINTS);
			glColor3f(0,0,0);
			glVertex2f(528+300+700+mx+ma,645+my);
			glEnd();
glBegin(GL_LINE_STRIP);
			glColor3f(0,0,0);
			glVertex2f(520+300+700+mx+ma,650+my);
			glVertex2f(525+300+700+mx+ma,655+my);
			glVertex2f(535+300+700+mx+ma,655+my);
			glEnd();
glBegin(GL_POLYGON);
			glColor3f(0.502,0.502,0);//neck
			glVertex2f(525+300+700+mx+ma,575+my);
			glColor3f(0,0,0);
			glVertex2f(500+300+700+mx+ma,525+my);
			glVertex2f(590+300+700+mx+ma,575+my);
			glEnd();

glBegin(GL_POLYGON);	//glColor3f(0.512,0.512,0);// hand1
			//glColor3f(1,0.871,0.678);
			glColor3f(1,0.894,0.769);
			glVertex2f(440+300+700+mx+ma,450+my);
			glVertex2f(440+300+700+mx+ma,390+my);
			glVertex2f(500+300+700+mx+ma,450+my);
			glVertex2f(500+300+700+mx+ma,390+my);
			glEnd();


glBegin(GL_POLYGON);
			//glColor3f(0,0,0);//body
			glColor3f(0.545,0.000,0.000);
			glVertex2f(500+300+700+mx+ma,525+my);
			glVertex2f(475+300+700+mx+ma,400+my);
			glVertex2f(475+300+700+mx+ma,375+my);
			glVertex2f(560+300+700+mx+ma,375+my);
			glVertex2f(575+300+700+mx+ma,400+my);
			glVertex2f(565+300+700+mx+ma,500+my);
			glVertex2f(600+300+700+mx+ma,525+my);
			glVertex2f(580+300+700+mx+ma,575+my);
			glEnd();
//glClearColor(0.722,0.525,0.043,1.0);//terr
    glColor3f(1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,2000,0,2000);
	glMatrixMode(GL_MODELVIEW);

glBegin(GL_POLYGON);
			//glColor3f(0.512,0.512,0);
			glColor3f(0.545,0.000,0.000);
			glVertex2f(475+300+700+mx+ma,375+my);//leg
			//glColor3f(0,0,0);
			glColor3f(0.545,0.000,0.000);
			glVertex2f(460+300+700+mx+ma,225+my);
			glColor3f(0,0,0);
			glVertex2f(600+300+700+mx+ma,225+my);
			glColor3f(0,0,0);
			glVertex2f(600+300+700+mx+ma,375+my);
			glEnd();
glBegin(GL_POLYGON);
	glColor3f(0,0,0);

	glVertex2f(1460-50+mx+ma,200+my);

	glVertex2f(1460+50+mx+ma,1000+my);
	glColor3f(0.545,0.271,0.075);
	glVertex2f(1470+50+mx+ma,1000+my);
	glVertex2f(1470-50+mx+ma,200+my);
glEnd();
glBegin(GL_POLYGON);
			glColor3f(0,0,0);//fingures1
			glVertex2f(440+300+20+700+mx+ma,450+my);
			glVertex2f(400+300+20+700+mx+ma,450+my);
			glVertex2f(400+300+20+700+mx+ma,390+my);
			glVertex2f(440+300+20+700+mx+ma,400+my);
			glEnd();

glBegin(GL_POLYGON);
			//hand2
			glColor3f(1,0.871,0.678);
			glVertex2f(565+300+700+mx+ma,500+my);
			glVertex2f(575+300+700+mx+ma,400+my);
			glVertex2f(615+300+700+mx+ma,400+my);
			glVertex2f(615+300+700+mx+ma,475+my);
			glColor3f(0,0,0);
			glVertex2f(600+300+700+mx+ma,525+my);
			glEnd();


glBegin(GL_POLYGON);

			glVertex2f(500+300+700+mx+ma,400+my);
			glVertex2f(450+300+700+mx+ma,420+my);
			glVertex2f(450+300+700+mx+ma,355+my);
			glVertex2f(500+300+700+mx+ma,365+my);
			glEnd();

glBegin(GL_POLYGON);
			//glColor3f(0.512,0.512,0);
			glColor3f(1,0.871,0.678);
			glVertex2f(615+300+700+mx+ma,415+my);//hand2
			glVertex2f(500+300+700+mx+ma,400+my);
			//glColor3f(0,0,0);
			glVertex2f(500+300+700+mx+ma,365+my);
				glColor3f(0.512,0.512,0);
			glVertex2f(615+300+700+mx+ma,365+my);
			glEnd();




glBegin(GL_POLYGON);
			glColor3f(0,0,0);//leg1
			glVertex2f(475+300+700+mx+ma,225+my);
			//glColor3f(0.512,0.512,0);
			glColor3f(0,0.000,1);
			glVertex2f(500+300+700+mx+ma,100+my);
			glVertex2f(530+300+700+mx+ma,100+my);
			glColor3f(0,0,0);
			glVertex2f(530+300+700+mx+ma,225+my);
			glEnd();
glBegin(GL_POLYGON);
			//glColor3f(0.512,0.512,0);//leg2
			glColor3f(0,0.000,1);
			glVertex2f(530+300+700+mx+ma,225+my);
			glVertex2f(530+300+700+mx+ma,100+my);
			glVertex2f(575+300+700+mx+ma,100+my);
			glColor3f(0,0,0);
			glVertex2f(600+300+700+mx+ma,225+my);
			glEnd();

glBegin(GL_POLYGON);
			//glColor3f(0,0,0);//shoe1
			glColor3f(1,0.871,0.678);
			glVertex2f(500+300+700+mx+ma,100+my);
			glVertex2f(500+300+700+mx+ma,75+my);
			glVertex2f(530+300+700+mx+ma,75+my);
			glColor3f(0,0,0);glColor3f(0.184,0.310,0.310);
			glVertex2f(530+300+700+mx+ma,100+my);
			glEnd();

glBegin(GL_POLYGON);
			//glColor3f(0.184,0.310,0.310);
			glColor3f(1,0.871,0.678);
			glVertex2f(500+300+700+mx+ma,75+my);
			glColor3f(0,0,0);
			glVertex2f(460+300+700+mx+ma,50+my);
			glVertex2f(460+300+700+mx+ma,25+my);
			glVertex2f(530+300+700+mx+ma,25+my);
			glVertex2f(530+300+700+mx+ma,75+my);
			glEnd();
glBegin(GL_POLYGON);
			//glColor3f(0,0,0);//shoe2
			glColor3f(1,0.871,0.678);
			glVertex2f(530+300+700+mx+ma,100+my);
			glVertex2f(530+300+700+mx+ma,75+my);
			glVertex2f(575+300+700+mx+ma,75+my);
			glColor3f(0.184,0.310,0.310);
			glVertex2f(575+300+700+mx+ma,100+my);
			glEnd();
glBegin(GL_POLYGON);
			//glColor3f(0.184,0.310,0.310);
			glColor3f(1,0.871,0.678);
			glVertex2f(530+300+700+mx+ma,75+my);
			glColor3f(0,0,0);
			glVertex2f(500+300+700+mx+ma,50+my);
			glVertex2f(500+300+700+mx+ma,25+my);
			glVertex2f(575+300+700+mx+ma,25+my);
			glVertex2f(575+300+700+mx+ma,75+my);
			glEnd();
mf=ma;

}

}



#endif // MAN_H_INCLUDED
