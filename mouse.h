#ifndef MOUSE_H_INCLUDED
#define MOUSE_H_INCLUDED
extern float mox;
void mouse1(void)
{
	int rx=-5,ry=18;
	glColor3f(0,0,0);
	mox-=.05;
	if(display_order==7)
	{
		rx=-45;ry=22;
	}
	if(display_order==8)
	{
		rx=-43;ry=22;mox+=.045;
	}
	if(display_order==5)
    {
        int rx=-5,ry=18;
        mox=0;
    }
	if(mox>-100)
	{
	//glBegin(GL_LINE_STRIP);
	glBegin(GL_POLYGON);
		glVertex2f(86+rx+mox,16.+ry);
		glVertex2f(85.06+rx+mox,16.25+ry);
		glVertex2f(85.06+rx+mox,16.75+ry);
		glVertex2f(86.00+rx+mox,17.50+ry);
		glVertex2f(87.00+rx+mox,18.25+ry);
		glVertex2f(88.00+rx+mox,18.75+ry);
		glVertex2f(88.04+rx+mox,20.0+ry);
		glVertex2f(88.06+rx+mox,19.0+ry);
		glVertex2f(89+rx+mox,19.25+ry);
		glVertex2f(90+rx+mox,19.25+ry);
		glVertex2f(91+rx+mox,19.25+ry);
		glVertex2f(91.08+rx+mox,19.25+ry);
		glVertex2f(92+rx+mox,19.50+ry);
		glVertex2f(93+rx+mox,20+ry);
		glVertex2f(94+rx+mox,20.50+ry);
		glVertex2f(95+rx+mox,20.75+ry);
		glVertex2f(96+rx+mox,20.75+ry);
		glVertex2f(97+rx+mox,20+ry);
		glVertex2f(98+rx+mox,19+ry);
		glVertex2f(99+rx+mox,15+ry);
		glVertex2f(99.08+rx+mox,14.0+ry);
		glVertex2f(89.8+rx+mox,15.75+ry);
		glVertex2f(88+rx+mox,15.50+ry);
		glVertex2f(87+rx+mox,15.58+ry);
		glVertex2f(86.8+rx+mox,15.66+ry);
		glVertex2f(86.6+rx+mox,15.74+ry);
		glVertex2f(86.4+rx+mox,15.82+ry);
		glVertex2f(86.2+rx+mox,15.90+ry);
		glVertex2f(86+rx+mox,16+ry);
	glEnd();

	//back_leg_body
	glBegin(GL_POLYGON);
		glVertex2f(99.08+rx+mox,14.0+ry);
		glVertex2f(98+rx+mox,13.25+ry);
		glVertex2f(97+rx+mox,13.25+ry);
		glVertex2f(96.02+rx+mox,13.25+ry);
		glVertex2f(94.02+rx+mox,13+ry);
		glVertex2f(94+rx+mox,13.10+ry);
		glVertex2f(93.6+rx+mox,13.20+ry);
		glVertex2f(93+rx+mox,13.5+ry);
		glVertex2f(92.6+rx+mox,13.5+ry);
		glVertex2f(92.2+rx+mox,14+ry);
		glVertex2f(92+rx+mox,19.50+ry);
	glEnd();

	//front right leg body
	glBegin(GL_POLYGON);
		glVertex2f(92.2+rx+mox,14+ry);
		glVertex2f(90.3+rx+mox,14.42+ry);
		glVertex2f(90+rx+mox,14.8+ry);
		glVertex2f(86.00+rx+mox,17.50+ry);
		glVertex2f(94+rx+mox,20.50+ry);
	glEnd();

	//glBegin(GL_LINE_STRIP);
	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(92.2+rx+mox,14+ry);
		glVertex2f(91.5+rx+mox,13.5+ry);
		glVertex2f(90.6+rx+mox,13+ry);
		glVertex2f(89.7+rx+mox,13.5+ry);
		glVertex2f(90+rx+mox,14+ry);
		glVertex2f(90.3+rx+mox,14.42+ry);
		glVertex2f(90+rx+mox,14.8+ry);
	glEnd();

	//front leg body
	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(90+rx+mox,14.8+ry);
		glVertex2f(89.8+rx+mox,14.2+ry);
		glVertex2f(89.6+rx+mox,14.4+ry);
		glVertex2f(89.2+rx+mox,14.8+ry);
		glVertex2f(88.8+rx+mox,15+ry);
		glVertex2f(88.4+rx+mox,15.5+ry);
		glVertex2f(91+rx+mox,19.25+ry);
	glEnd();

	//back leg
	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(98+rx+mox,13.25+2+ry);
		glVertex2f(97.5+rx+mox,12.4+ry);
		glVertex2f(96+rx+mox,12.4+ry);
		glVertex2f(95.3+rx+mox,12.4+ry);
		glVertex2f(95+rx+mox,12.5+ry);
		glVertex2f(94.6+rx+mox,12.4+ry);
		glVertex2f(94.2+rx+mox,13+ry);
		glVertex2f(94.6+rx+mox,13.10+ry);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.980,0.922,0.843);
		glVertex2f(94.6+rx+mox,12.4+ry);
		glVertex2f(94+rx+mox,12.2+ry);
		glVertex2f(94.2+rx+mox,13+ry);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(94.2+rx+mox,13+ry);
		glVertex2f(93.6+rx+mox,12.3+ry);
		glVertex2f(94+rx+mox,13.10+ry);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(94+rx+mox,13.10+ry);
		glVertex2f(93.2+rx+mox,12.4+ry);
		glVertex2f(93.6+rx+mox,13.20+ry);
	glEnd();

	//front right leg
	glBegin(GL_POLYGON);
		glColor3f(0.980,0.922,0.843);
		glVertex2f(89.7+rx+mox,13.5+ry);
		glVertex2f(89.2+rx+mox,13.25+ry);
		glVertex2f(88.9+rx+mox,12.75+ry);
		glVertex2f(89.6+rx+mox,13+ry);
		glVertex2f(89.2+rx+mox,12.5+ry);
		glVertex2f(89.8+rx+mox,12.6+ry);
		glVertex2f(90.6+rx+mox,13+ry);
	glEnd();

	//front left leg
	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(89.2+rx+mox,14.8+ry);
		glVertex2f(89+rx+mox,14.5+ry);
		glVertex2f(88.6+rx+mox,14+ry);
		glVertex2f(88.6+rx+mox,13+ry);
		glVertex2f(89+rx+mox,13.5+ry);
		glVertex2f(89.8+rx+mox,14.2+ry);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.980,0.922,0.843);
		glVertex2f(88.6+rx+mox,14+ry);
		glVertex2f(87.6+rx+mox,13.5+ry);
		glVertex2f(87.8+rx+mox,13.25+ry);
		glVertex2f(88.2+rx+mox,13.5+ry);
		glVertex2f(88+rx+mox,13+ry);
		glVertex2f(88.6+rx+mox,13+ry);
	glEnd();

	//eye
	glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(87.6+rx+mox,17.5+ry);
		glVertex2f(87.8+rx+mox,17.5+ry);
		glVertex2f(88+rx+mox,17.7+ry);
		glVertex2f(87.8+rx+mox,17.7+ry);

	glEnd();

	//tail
	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(99.08+rx+mox,14.0+ry);
		glVertex2f(99.08+rx+mox+4,14.0+ry);
		glVertex2f(99.08+rx+mox+7,14.0-.2+ry);
		glVertex2f(99.08+rx+mox+4,14.0-.4+ry);
		glVertex2f(99.08+rx+mox-1,14.0-.4+ry);
	glEnd();

	}//else
		//mox=-49;


}


#endif // MOUSE_H_INCLUDED
