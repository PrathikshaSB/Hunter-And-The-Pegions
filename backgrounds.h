#ifndef BACKGROUNDS_H_INCLUDED
#define BACKGROUNDS_H_INCLUDED

void back_ground();
void back_ground2();
void back_ground3();
void back_ground4();
void back_ground5();

extern int net_k,i;
extern float c,d,nx4,ny4;

void back_ground()
{

if(display_order==1)
{
int i;
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.0,0.0,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,100.0,0.0,100.0);


	 glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);//sky
		glColor3f(1,1,1);
		glVertex2f(0.0, 0.0);
	glColor3f(1,1,1);
		glVertex2f(100.0,0.0);
		glColor3f(.529,.808,.922);
		//glColor3f(0,.749,1);
		glVertex2f(100.0,100.0);
//glColor3f(1,1,1);
		glVertex2f(0.0,100.0);
	glEnd();

	float a1=0.9,b1=0.9,c1=1.0, a2=0.9,b2=0.6,c2=0.0 ,a3=0.9,b3=0.6,c3=0 ,a4=0.9,b4=0.6,c4=0;
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(.498,1,0);
	//glColor3f(a1, b1, c1);
	glVertex2f(0.0, 0.0);
	//glColor3f(a2, b2, c2);
	glColor3f(0, .392, 0);
	glVertex2f(0.0,52.0);
	//glColor3f(0, 0, 0);
	glVertex2f(100.0,48.0);
	//glColor3f(a4, b4, c4);
	glColor3f(.498,1,0);
	glVertex2f(100.0,0.0);
	glEnd();


//half tree branch
glBegin(GL_POLYGON);
glColor3f(0.0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd();

//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);
glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);
glEnd();

//grass middle
int gx=20,gy=5;
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);

glVertex2f(0+gx,40+gy);
 glVertex2f(0+gx,47+gy);
 glVertex2f(2.5+gx,46.5+gy);
 glVertex2f(2+gx,48+gy);
 glVertex2f(0+gx,50+gy);
 glVertex2f(2+gx,49.5+gy);
 glVertex2f(5+gx,47+gy);
 glVertex2f(2.5+gx,55+gy);
glVertex2f(7+gx,50+gy);
 glVertex2f(8+gx,53+gy);
 glVertex2f(10+gx,55+gy);
 glVertex2f(10.5+gx,52+gy);
 glVertex2f(10+gx,50+gy);
 glVertex2f(17+gx,53+gy);
 glVertex2f(10+gx,45+gy);
 glVertex2f(20+gx,47+gy);
 glVertex2f(18+gx,45+gy);
 glVertex2f(25+gx,46+gy);
 glVertex2f(20+gx,42+gy);
 glVertex2f(30+gx,40+gy);
glEnd();

//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);

glEnd();


//gras 1 dwn
glBegin(GL_POLYGON);
glColor3f(0.196078,0.8,0.196078);
glVertex2f(0,27.5);
 glVertex2f(0,32.5);
 glVertex2f(0.3,33.5);
 glVertex2f(2.5,35);
 glVertex2f(2.5,32.5);
 glVertex2f(4.9,35);
 glVertex2f(7.5,37.5);
 glVertex2f(7,35);
 glVertex2f(10,35);
 glVertex2f(7,32.5);
 glVertex2f(15,35);
 glVertex2f(12.5,32);
 glVertex2f(15,30);
 glVertex2f(12.5,27);
 glVertex2f(20,26);
glEnd();


//grass 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);

glVertex2f(0,40);
 glVertex2f(0,47);
 glVertex2f(2.5,46.5);
 glVertex2f(2,48);
 glVertex2f(0,50);
 glVertex2f(2,49.5);
 glVertex2f(5,47);
 glVertex2f(2.5,55);
glVertex2f(7,50);
 glVertex2f(8,53);
 glVertex2f(10,55);
 glVertex2f(10.5,52);
 glVertex2f(10,50);
 glVertex2f(17,53);
 glVertex2f(10,45);
 glVertex2f(20,47);
 glVertex2f(18,45);
 glVertex2f(25,46);
 glVertex2f(20,42);
 glVertex2f(30,40);
glEnd();

//ryt grass
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.3);
glVertex2f(0,7.5);
 glVertex2f(5,13);
 glVertex2f(0,15);
 glVertex2f(5,13);
 glVertex2f(0,20);
 glVertex2f(5,15);
 glVertex2f(10,18);
 glVertex2f(15,25);
 glVertex2f(13,20);
 glVertex2f(17,21);
 glVertex2f(20,23);
 glVertex2f(17,18);
 glVertex2f(15,15);
 glVertex2f(20,17);
 glVertex2f(25,18);
 glVertex2f(20,15);
 glVertex2f(15,10);
 glVertex2f(30,10);
glVertex2f(35,7.5);
glEnd();


//grass 2
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
glVertex2f(0,50);
glVertex2f(0,65);
 glVertex2f(10,67);
 glVertex2f(7,65);
 glVertex2f(17,65);
 glVertex2f(15,64);
 glVertex2f(12,63);
 glVertex2f(15,60);
 glVertex2f(17,57);
 glVertex2f(15,56);
 glVertex2f(20,53);
 glVertex2f(17,54);
 glVertex2f(18,50);
 glVertex2f(16,47);
 glVertex2f(10,45);
 glVertex2f(17,53);
 glVertex2f(10,50);
 glVertex2f(10.5,52);
 glVertex2f(10,55);
 glVertex2f(8,53);
 glVertex2f(7,50);
 glVertex2f(2.5,55);
 glVertex2f(5,47);
 glVertex2f(2,49.5);
 glVertex2f(0,50);
glEnd();


//branch
glBegin(GL_POLYGON);
glColor3f(0.2,0.8,0.0);
glVertex2f(72.5,70);
 glVertex2f(71.5,69);
 glVertex2f(70,68);
 glVertex2f(67.5,68.5);
 glVertex2f(66,70);
 glVertex2f(66.5,71);
 glVertex2f(66,72.7);
 glVertex2f(65,74);
 glVertex2f(63,75);
 glVertex2f(62.5,75.5);
 glVertex2f(62,77.5);
 glVertex2f(61,79);
 glVertex2f(61,80);
 glVertex2f(61.5,81);
 glVertex2f(62,82.5);
 glVertex2f(62.3,84.5);
 glVertex2f(62.4,85);
 glVertex2f(62.5,87.5);
 glVertex2f(63.5,90);
 glVertex2f(65,91);
 glVertex2f(66.5,92);
 glVertex2f(67.5,92.5);
 glVertex2f(69,92);
 glVertex2f(70.5,90.5);
glEnd();
//tree2half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(75,48);
 glVertex2f(75.5,58);
 glVertex2f(75.6,60);
 glVertex2f(75.5,61);
 glVertex2f(75,65);
 glVertex2f(74.5,66);
 glVertex2f(73,69);
 glVertex2f(72.5,70);
 glVertex2f(72.5,77.5);
 glVertex2f(75,80);
 glVertex2f(81,67.5);
 glVertex2f(78,48);
glEnd();
//tree branch 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,75);
glVertex2f(72.5,72.5);
 glVertex2f(71,74.0);
 glVertex2f(70.5,74.5);
 glVertex2f(70,75);
 glVertex2f(69.5,76);
 glVertex2f(69.5,77);

 glVertex2f(70,80);
 glVertex2f(68,81);
 glVertex2f(67.5,82);
 glVertex2f(66,83.5);
 glVertex2f(66.3,84.5);
 glVertex2f(66.5,85);
 glVertex2f(67,87);
 glVertex2f(67.5,87.5);
 glVertex2f(70,90);
 glVertex2f(71,91.5);
 glVertex2f(71.5,92.5);
 glVertex2f(72.5,94);
 glVertex2f(75,95);
 glVertex2f(77.5,96);
 glVertex2f(80,96.5);
 glVertex2f(82.5,96);
 glVertex2f(83,95);
  glVertex2f(83.5,94.5);
  glVertex2f(84.5,92.5);

 glVertex2f(84.7,90);
 glVertex2f(86,91);
 glVertex2f(87.0,91.5);
 glVertex2f(87.5,90);
 glVertex2f(87.5,89);
 glVertex2f(89,89);
 glVertex2f(89.5,87.5);
 glVertex2f(89,85);
glVertex2f(88,82.5);
 glVertex2f(87,82);
 glVertex2f(86,81);
 glVertex2f(85,80);
 glVertex2f(85.5,75.5);
 glVertex2f(84,75);
glVertex2f(82.5,75);
glEnd();





//tree 2
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(77.5,48);
glVertex2f(77,60);
 glVertex2f(77.5,62.5);
 glVertex2f(77,65);
 glVertex2f(77,67.5);
 glVertex2f(76,70);
 glVertex2f(75,75);
 glVertex2f(75,78);
 glVertex2f(80,75);
 glVertex2f(82.5,78);
 glVertex2f(82,75);
 glVertex2f(82,72.5);
 glVertex2f(81.5,70);
 glVertex2f(81,65);
 glVertex2f(81.5,62);
 glVertex2f(84,48);
glEnd();

//branch
glBegin(GL_POLYGON);
glColor3f(0.2,0.8,0.0);
glVertex2f(90.5,30);
 glVertex2f(89.5,29);
 glVertex2f(88,28);
 glVertex2f(85.5,28.5);
 glVertex2f(84,30);
 glVertex2f(84.5,31);
 glVertex2f(84,32.7);
 glVertex2f(83,34);
 glVertex2f(81,35);
 glVertex2f(80.5,35.5);
 glVertex2f(80,37.5);
 glVertex2f(79,39);
 glVertex2f(79,40);
 glVertex2f(79.5,41);
 glVertex2f(80,42.5);
 glVertex2f(80.3,44.5);
 glVertex2f(80.4,45);
 glVertex2f(80.5,47.5);
 glVertex2f(81.5,50);
 glVertex2f(83,51);
 glVertex2f(84.5,52);
 glVertex2f(85.5,52.5);
 glVertex2f(87,52);
 glVertex2f(88.5,50.5);
glEnd();
//tree3half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(90,7.5);
 glVertex2f(90.5,8);
 glVertex2f(90.6,20);
 glVertex2f(90.5,61);
 glVertex2f(90,25);
 glVertex2f(89.5,26);
 glVertex2f(88,29);
 glVertex2f(87.5,30);
 glVertex2f(87.5,37.5);
 glVertex2f(90,40);
 glVertex2f(96,27.5);
 glVertex2f(93,7.5);
glEnd();
//tree branch 3
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(90,35);
glVertex2f(87.5,32.5);
 glVertex2f(86,34.0);
 glVertex2f(85.5,34.5);
 glVertex2f(85,35);
 glVertex2f(84.5,36);
 glVertex2f(84.5,37);

 glVertex2f(85,40);
 glVertex2f(83,41);
 glVertex2f(82.5,42);
 glVertex2f(81,43.5);
 glVertex2f(81.3,44.5);
 glVertex2f(81.5,45);
 glVertex2f(82,47);
 glVertex2f(82.5,47.5);
 glVertex2f(85,50);
 glVertex2f(86,51.5);
 glVertex2f(86.5,52.5);
 glVertex2f(87.5,54);
 glVertex2f(90,55);
 glVertex2f(92.5,56);
 glVertex2f(95,56.5);
 glVertex2f(97.5,56);
 glVertex2f(98,55);
  glVertex2f(98.5,54.5);
  glVertex2f(99.5,52.5);

 glVertex2f(99.7,50);
 glVertex2f(101,51);
 glVertex2f(102.0,51.5);
 glVertex2f(102.5,50);
 glVertex2f(102.5,49);
 glVertex2f(104,49);
 glVertex2f(104.5,47.5);
 glVertex2f(104,45);
glVertex2f(103,42.5);
 glVertex2f(102,42);
 glVertex2f(101,41);
 glVertex2f(100,40);
 glVertex2f(100.5,35.5);
 glVertex2f(99,35);
glVertex2f(97.5,35);
glEnd();



//tree3
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(92,7.5);
glVertex2f(92,20);
 glVertex2f(92.5,22.5);
 glVertex2f(92,25);
 glVertex2f(92,27.5);
 glVertex2f(91,30);
 glVertex2f(90,35);
 glVertex2f(90.5,40);
 glVertex2f(95,35);
 glVertex2f(97.5,40);
 glVertex2f(97,35);
 glVertex2f(97,32.5);
 glVertex2f(96.5,30);
 glVertex2f(96,25);
 glVertex2f(96.5,22);
 glVertex2f(99,7.5);
glEnd();



//sing gras
glBegin(GL_LINES);
glLineWidth(15.0);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,10);
 glVertex2f(72,20);
 glVertex2f(70,17.5);
 glVertex2f(75,10);
 glVertex2f(72.5,25);
 glVertex2f(71,22.5);
 glVertex2f(75,10);
 glVertex2f(73,25);
 glVertex2f(77,22.5);
 glVertex2f(75,10);
 glVertex2f(76,19);
 glVertex2f(75.5,15);
 glVertex2f(75,10);
 glVertex2f(77,15);
 glVertex2f(78,12);
glEnd();

}
if(display_order==9)
	a=0;


bird2(1);
bird2(2);
bird2(3);
bird2(4);
bird2(5);
bird2(6);



if(display_order==1)
{

char str[]="PRESS d/D TO CONTINUE";
glColor3f(0,0,0);
glRasterPos2f(30,5);
		for(i=0;i<strlen(str);i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
		}
//glutPostRedisplay();
}
}




void back_ground2()
{

    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,100.0,0.0,100.0);

    glShadeModel(GL_SMOOTH);
    glBegin(GL_POLYGON);//sky
    glColor3f(1,1,1);
    glVertex2f(0.0, 0.0);
    glVertex2f(100.0,0.0);
    glColor3f(0,.749,1);
    glVertex2f(100.0,100.0);
    glVertex2f(0.0,100.0);
    glEnd();

    if(display_order!=2)
    {
        float a1=0.9,b1=0.9,c1=1.0, a2=0.9,b2=0.6,c2=0.0 ,a3=0.9,b3=0.6,c3=0 ,a4=0.9,b4=0.6,c4=0;
        glShadeModel(GL_SMOOTH);
        glBegin(GL_POLYGON);
        glColor3f(a1, b1, c1);
        glVertex2f(0.0, 0.0);
        glColor3f(a2, b2, c2);
        glVertex2f(0.0,52.0);
        glColor3f(a3, b3, c3);
        glVertex2f(100.0,48.0);
        glColor3f(a4, b4, c4);
        glVertex2f(100.0,0.0);
        glEnd();
    }
    if(display_order==2)
    {
        glBegin(GL_POLYGON);
        glColor3f(0.196,.804,0.196);
        glVertex2f(0.0, 0.0);
        glColor3f(0,0,0);
        glVertex2f(0.0,52.0);
        glColor3f(0.196,.804,0.196);
        glVertex2f(100.0,48.0);
        glColor3f(0,0,0);
        glVertex2f(100.0,0.0);
        glEnd();
    //grain
    glBegin(GL_POINTS);
        glPointSize(2.0);
        //glColor3f(1,0,0);
        glColor3f(1,0.843,0);
        glVertex2f(28,45);
        glVertex2f(26,30);
        glVertex2f(22,45);
        glVertex2f(27,37);
        glVertex2f(26,31);
        glVertex2f(25,22);
        glVertex2f(24,21);
        glVertex2f(23,34);
        glVertex2f(22,45);
        glVertex2f(21,36);
        glVertex2f(20,45);
        glVertex2f(20,37);
        glVertex2f(20,33);
        glVertex2f(20,44);
        glVertex2f(21,31);
        glVertex2f(21,34);
        glVertex2f(21,44);
        glVertex2f(21,33);
        glVertex2f(15,15);
        glVertex2f(15,21);
        glVertex2f(15,26);
        glVertex2f(15,29);
        glVertex2f(15,31);
        glVertex2f(15,34);
        glVertex2f(15,39);
        glVertex2f(15,43);
        glVertex2f(15,45);
        glVertex2f(15,46);
        glVertex2f(15.5,45);
        glVertex2f(15.5,41);
        glVertex2f(15.5,38);
        glVertex2f(15.5,35);
        glVertex2f(15.6,30);
        glVertex2f(15.9,28);
        glVertex2f(15.3,24);
        glVertex2f(15.4,21);
        glVertex2f(16,18);
        glVertex2f(16.4,14);
        glVertex2f(16.3,26);
        glVertex2f(17,22);
        glVertex2f(17.4,45);
        glVertex2f(17.3,31);
        glVertex2f(17.1,24);
        glVertex2f(17.8,22);
        glVertex2f(17,33);
        glVertex2f(18,36);
        glVertex2f(18.3,35);
        glVertex2f(18.2,33);
        glVertex2f(18.1,31);
        glVertex2f(18.6,40);
        glVertex2f(18.3,24);
        glVertex2f(18.9,34);
        glVertex2f(18.7,24);
        glVertex2f(19.1,22);
        glVertex2f(19.3,24);
        glVertex2f(19.8,45);
        glVertex2f(19.7,33);
        glVertex2f(19.5,42);
        glVertex2f(19.2,37);
        glVertex2f(20,43);
        glVertex2f(20.6,45);
        glVertex2f(20.8,36);
        glVertex2f(20.2,18);
        glVertex2f(20.3,27);
        glVertex2f(20.7,34);
        glVertex2f(20.9,42);
        glVertex2f(21,41);
        glVertex2f(21.1,33);
        glVertex2f(21.3,25);
        glVertex2f(21.5,29);
        glVertex2f(21.7,39);
        glVertex2f(21.9,44);
        glVertex2f(22.2,18);
        glVertex2f(22.5,26);
        glVertex2f(22.8,22);
        glVertex2f(22.3,34);
        glVertex2f(22.1,36);
        glVertex2f(22.9,40);
        glVertex2f(23.2,43);
        glVertex2f(23.6,36);
        glVertex2f(23.8,25);
        glVertex2f(23.1,19);
        glVertex2f(23.3,22);
        glVertex2f(24.2,16);
        glVertex2f(24.4,13);
        glVertex2f(24.6,24);
        glVertex2f(24.8,37);
        glVertex2f(24.9,42);
        glVertex2f(24.7,39);
        glVertex2f(25.9,29);
        glVertex2f(25.3,35);
        glVertex2f(25.6,21);
        glVertex2f(25.3,43);
        glVertex2f(25.2,15);
        glVertex2f(25.1,39);
        glVertex2f(26,28);
        glVertex2f(26.2,42);
        glVertex2f(26.4,36);
        glVertex2f(26.6,38);
        glVertex2f(26.8,24);
        glVertex2f(27,16);
        glVertex2f(27.2,48);
        glVertex2f(27.5,22);
        glVertex2f(27.8,43);
        glVertex2f(27.9,45);
        glVertex2f(27.2,35);
        glVertex2f(27.1,32);
        glVertex2f(28.2,49);
        glVertex2f(28.4,31);
        glVertex2f(28.6,39);
        glVertex2f(28.8,24);
        glVertex2f(28.5,27);
        glVertex2f(28.7,21);
        glVertex2f(29.3,26);
        glVertex2f(29.5,22);
        glVertex2f(29.7,36);
        glVertex2f(29.9,45);
        glVertex2f(29.1,31);
        glVertex2f(29.4,26);
        glVertex2f(30,24);
        glVertex2f(30.1,32);
        glVertex2f(30.4,29);
        glVertex2f(30.5,44);
        glVertex2f(30.6,23);
        glVertex2f(39,20);
        glVertex2f(30.4,42);
        glVertex2f(30.6,33);
        glVertex2f(30.8,26);
        glVertex2f(30.2,39);
        glVertex2f(30.7,18);
        glVertex2f(30.3,48);
        glVertex2f(31.3,44);
        glVertex2f(31.5,22);
        glVertex2f(31.7,37);
        glVertex2f(31.9,19);
        glVertex2f(31.1,26);
        glVertex2f(31.4,31);
        glVertex2f(32.1,12);
        glVertex2f(32.2,43);
        glVertex2f(32.5,38);
        glVertex2f(32.6,26);
        glVertex2f(32.9,23);
        glVertex2f(32.4,19);
        glVertex2f(33.1,35);
        glVertex2f(33.3,41);
        glVertex2f(33.5,28);
        glVertex2f(33.7,19);
        glVertex2f(33.9,21);
        glVertex2f(33.8,31);
        glVertex2f(34.2,17);
        glVertex2f(34.4,47);
        glVertex2f(34.6,36);
        glVertex2f(34.8,25);
        glVertex2f(34.5,28);
        glVertex2f(34.9,16);
        glVertex2f(35.2,39);
        glVertex2f(35.6,44);
        glVertex2f(35.5,24);
        glVertex2f(35.9,19);
        glVertex2f(35.1,37);
        glVertex2f(35.2,22);
        glVertex2f(36.1,48);
        glVertex2f(36.3,33);
        glVertex2f(36.5,37);
        glVertex2f(36.7,31);
        glVertex2f(36.9,26);
        glVertex2f(37,24);
        glVertex2f(37.2,38);
        glVertex2f(37.4,35);
        glVertex2f(37.6,32);
        glVertex2f(37.8,44);
        glVertex2f(38.1,37);
        glVertex2f(38.3,34);
        glVertex2f(38.5,36);
        glVertex2f(38.7,24);
        glVertex2f(38.9,28);
        glVertex2f(39,43);
        glVertex2f(39.2,35);
        glVertex2f(39.4,21);
        glVertex2f(39.6,39);
        glVertex2f(39.8,41);
        glVertex2f(40.1,44);
        glVertex2f(40.3,31);
        glVertex2f(40.5,34);
        glVertex2f(40.7,26);
        glVertex2f(40.9,22);
        glVertex2f(41.2,42);
        glVertex2f(41.4,39);
        glVertex2f(41.6,37);
        glVertex2f(41.8,31);
        glVertex2f(42.1,38);
        glVertex2f(42.3,35);
        glVertex2f(42.5,31);
        glVertex2f(42.7,26);
        glVertex2f(43.2,41);
        glVertex2f(43.4,35);
        glVertex2f(43.6,31);
        glVertex2f(43.8,27);
        glVertex2f(44.1,28);
        glVertex2f(44.3,32);
        glVertex2f(44.5,37);
        glVertex2f(44.7,41);
        glVertex2f(45,42);
        glVertex2f(45.2,37.8);
        glVertex2f(45.4,35);
        glVertex2f(45.6,30);
        glVertex2f(14,26);
        glVertex2f(13,21);
        glVertex2f(14.5,32);
        glVertex2f(13.4,28);
        glEnd();


    }



    //half tree branch
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.8,0.1);
    glVertex2f(28,65);
    glVertex2f(30,64.5);
     glVertex2f(32.5,64);
    glVertex2f(34,64.5);
     glVertex2f(35.5,65);
     glVertex2f(39,66);
     glVertex2f(37,67.5);
     glVertex2f(37,68);
     glVertex2f(39,69.5);

    glVertex2f(39,71.5);
    glVertex2f(39.3,72);
    glVertex2f(39.6,73);
    glVertex2f(39.9,73.5);
    glVertex2f(40,74);
     glVertex2f(40.5,75);
    glVertex2f(40,76.5);
     glVertex2f(43,77.5);
     glVertex2f(42.5,79);
     glVertex2f(43,80);
     glVertex2f(41.5,82.5);
     glVertex2f(40.5,82);
    glVertex2f(40,81.5);
    glVertex2f(41,82.5);
    glVertex2f(41.5,83.5);
    glVertex2f(42,85);
    glVertex2f(39,87);
    glVertex2f(37,88.5);
    glVertex2f(33,86);
    glVertex2f(32,84);
    glVertex2f(33,90);
    glVertex2f(28,65);

    glEnd();

    //root
    glBegin(GL_POLYGON);
    glColor3f(0.65,0.50,0.39);
    glVertex2f(26.5,49);
    glVertex2f(28,48.5);
     glVertex2f(30,50);
     glVertex2f(28.5,52.5);
     glVertex2f(28,55);
     glVertex2f(28.5,67.5);
     glVertex2f(28,55);
     glVertex2f(28,60);
     glVertex2f(28.5,67.5);
     glVertex2f(28,65);
     glVertex2f(28.5,67.5);
     glVertex2f(29.5,71);
     glVertex2f(30,72.5);
     glVertex2f(25,80);
     glVertex2f(25,50);
     glVertex2f(26.5,49);
     glEnd();


    //tree 1 branch
    glShadeModel(GL_SMOOTH);
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.9,0.2);
    glVertex2f(16.5,70);
    glVertex2f(12.5,70);
     glVertex2f(11,71.5);
     glVertex2f(10,72.5);
    glColor3f(0.0,0.85,0.1);
     glVertex2f(10,75);
     glVertex2f(7.5,75);
     glVertex2f(6,76);
     glVertex2f(5,78.5);
     glVertex2f(5,80);
     glVertex2f(7.5,82.5);
     glVertex2f(5,85);
     glVertex2f(2.7,87);
     glVertex2f(2.75,90);
    glColor3f(0.1,0.6,0.1);
     glVertex2f(2.8,91);
     glVertex2f(3.5,92.5);
     glVertex2f(5,95);
     glVertex2f(7,97.5);
     glVertex2f(10,98);
     glVertex2f(15,99);
     glColor3f(0.1,0.6,0.2);
     glVertex2f(20,98.5);
    glVertex2f(25,98);
     glVertex2f(30,97.5);
    glVertex2f(30.5,97);
     glVertex2f(30,95);
     glVertex2f(32.5,92.5);
     glVertex2f(34,87.5);
    glVertex2f(35,85);
     glVertex2f(34.5,82.5);

     glVertex2f(34,79);
     glVertex2f(34.5,77.5);
      glColor3f(0.1,0.6,0.0);
     glVertex2f(33,76);
     glVertex2f(32.5,74.5);
     glVertex2f(31,73);
     glVertex2f(30,72.5);
     glVertex2f(27.5,72.5);
     glVertex2f(26,73);
     glVertex2f(25,75);
    glEnd();

    //grass middle
    int gx=20,gy=5;
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.3);

    glVertex2f(0+gx,40+gy);
     glVertex2f(0+gx,47+gy);
     glVertex2f(2.5+gx,46.5+gy);
     glVertex2f(2+gx,48+gy);
     glVertex2f(0+gx,50+gy);
     glVertex2f(2+gx,49.5+gy);
     glVertex2f(5+gx,47+gy);
     glVertex2f(2.5+gx,55+gy);
    glVertex2f(7+gx,50+gy);
     glVertex2f(8+gx,53+gy);
     glVertex2f(10+gx,55+gy);
     glVertex2f(10.5+gx,52+gy);
     glVertex2f(10+gx,50+gy);
     glVertex2f(17+gx,53+gy);
     glVertex2f(10+gx,45+gy);
     glVertex2f(20+gx,47+gy);
     glVertex2f(18+gx,45+gy);
     glVertex2f(25+gx,46+gy);
     glVertex2f(20+gx,42+gy);
     glVertex2f(30+gx,40+gy);
    glEnd();

    //tree1 root
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.6,0.0);
    glVertex2f(17.5,56);
    glVertex2f(17.0,62.5);
     glVertex2f(17.5,67.5);
    glVertex2f(16.5,70.0);
     glVertex2f(16.0,72.5);
     glVertex2f(15.5,75.0);
     glVertex2f(15.0,80.0);
     glVertex2f(20.0,85.0);
     glVertex2f(21.5,77.0);

    glVertex2f(26.0,87.0);
    glVertex2f(30.0,85.0);
     glVertex2f(28.0,80.0);
    glVertex2f(25.5,75.0);
     glVertex2f(25,72.5);
     glVertex2f(25,70.0);
     glVertex2f(25.0,55.0);
     glVertex2f(25.5,52.5);
     glVertex2f(26.0,50.0);

    glVertex2f(26.5,48.0);
    glVertex2f(27.0,47.5);
    glVertex2f(28.5,46.0);
    glVertex2f(29,44);
    glVertex2f(30.0,40.0);
    glVertex2f(20.0,47.5);
    glVertex2f(17.5,47.0);
    glVertex2f(18.0,50.0);
    glVertex2f(17.0,54.0);

     glVertex2f(20.0,53.0);
     glVertex2f(17.5,56.0);

    glEnd();


    //gras 1 dwn
    glBegin(GL_POLYGON);
    glColor3f(0.196078,0.8,0.196078);
    glVertex2f(0,27.5);
     glVertex2f(0,32.5);
     glVertex2f(0.3,33.5);
     glVertex2f(2.5,35);
     glVertex2f(2.5,32.5);
     glVertex2f(4.9,35);
     glVertex2f(7.5,37.5);
     glVertex2f(7,35);
     glVertex2f(10,35);
     glVertex2f(7,32.5);
     glVertex2f(15,35);
     glVertex2f(12.5,32);
     glVertex2f(15,30);
     glVertex2f(12.5,27);
     glVertex2f(20,26);
    glEnd();


    //grass 2
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.3);

    glVertex2f(0,40);
     glVertex2f(0,47);
     glVertex2f(2.5,46.5);
     glVertex2f(2,48);
     glVertex2f(0,50);
     glVertex2f(2,49.5);
     glVertex2f(5,47);
     glVertex2f(2.5,55);
    glVertex2f(7,50);
     glVertex2f(8,53);
     glVertex2f(10,55);
     glVertex2f(10.5,52);
     glVertex2f(10,50);
     glVertex2f(17,53);
     glVertex2f(10,45);
     glVertex2f(20,47);
     glVertex2f(18,45);
     glVertex2f(25,46);
     glVertex2f(20,42);
     glVertex2f(30,40);
    glEnd();

    //ryt grass
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.9,0.3);
    glVertex2f(0,7.5);
     glVertex2f(5,13);
     glVertex2f(0,15);
     glVertex2f(5,13);
     glVertex2f(0,20);
     glVertex2f(5,15);
     glVertex2f(10,18);
     glVertex2f(15,25);
     glVertex2f(13,20);
     glVertex2f(17,21);
     glVertex2f(20,23);
     glVertex2f(17,18);
     glVertex2f(15,15);
     glVertex2f(20,17);
     glVertex2f(25,18);
     glVertex2f(20,15);
     glVertex2f(15,10);
     glVertex2f(30,10);
    glVertex2f(35,7.5);
    glEnd();


    //grass 2
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0,50);
    glVertex2f(0,65);
     glVertex2f(10,67);
     glVertex2f(7,65);
     glVertex2f(17,65);
     glVertex2f(15,64);
     glVertex2f(12,63);
     glVertex2f(15,60);
     glVertex2f(17,57);
     glVertex2f(15,56);
     glVertex2f(20,53);
     glVertex2f(17,54);
     glVertex2f(18,50);
     glVertex2f(16,47);
     glVertex2f(10,45);
     glVertex2f(17,53);
     glVertex2f(10,50);
     glVertex2f(10.5,52);
     glVertex2f(10,55);
     glVertex2f(8,53);
     glVertex2f(7,50);
     glVertex2f(2.5,55);
     glVertex2f(5,47);
     glVertex2f(2,49.5);
     glVertex2f(0,50);
    glEnd();


    //branch
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.8,0.0);
    glVertex2f(72.5,70);
     glVertex2f(71.5,69);
     glVertex2f(70,68);
     glVertex2f(67.5,68.5);
     glVertex2f(66,70);
     glVertex2f(66.5,71);
     glVertex2f(66,72.7);
     glVertex2f(65,74);
     glVertex2f(63,75);
     glVertex2f(62.5,75.5);
     glVertex2f(62,77.5);
     glVertex2f(61,79);
     glVertex2f(61,80);
     glVertex2f(61.5,81);
     glVertex2f(62,82.5);
     glVertex2f(62.3,84.5);
     glVertex2f(62.4,85);
     glVertex2f(62.5,87.5);
     glVertex2f(63.5,90);
     glVertex2f(65,91);
     glVertex2f(66.5,92);
     glVertex2f(67.5,92.5);
     glVertex2f(69,92);
     glVertex2f(70.5,90.5);
    glEnd();
    //tree2half
    glBegin(GL_POLYGON);
    glColor3f(0.65,0.50,0.39);
    glVertex2f(75,48);
     glVertex2f(75.5,58);
     glVertex2f(75.6,60);
     glVertex2f(75.5,61);
     glVertex2f(75,65);
     glVertex2f(74.5,66);
     glVertex2f(73,69);
     glVertex2f(72.5,70);
     glVertex2f(72.5,77.5);
     glVertex2f(75,80);
     glVertex2f(81,67.5);
     glVertex2f(78,48);
    glEnd();
    //tree branch 2
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.6,0.3);
    glVertex2f(75,75);
    glVertex2f(72.5,72.5);
     glVertex2f(71,74.0);
     glVertex2f(70.5,74.5);
     glVertex2f(70,75);
     glVertex2f(69.5,76);
     glVertex2f(69.5,77);

     glVertex2f(70,80);
     glVertex2f(68,81);
     glVertex2f(67.5,82);
     glVertex2f(66,83.5);
     glVertex2f(66.3,84.5);
     glVertex2f(66.5,85);
     glVertex2f(67,87);
     glVertex2f(67.5,87.5);
     glVertex2f(70,90);
     glVertex2f(71,91.5);
     glVertex2f(71.5,92.5);
     glVertex2f(72.5,94);
     glVertex2f(75,95);
     glVertex2f(77.5,96);
     glVertex2f(80,96.5);
     glVertex2f(82.5,96);
     glVertex2f(83,95);
      glVertex2f(83.5,94.5);
      glVertex2f(84.5,92.5);

     glVertex2f(84.7,90);
     glVertex2f(86,91);
     glVertex2f(87.0,91.5);
     glVertex2f(87.5,90);
     glVertex2f(87.5,89);
     glVertex2f(89,89);
     glVertex2f(89.5,87.5);
     glVertex2f(89,85);
    glVertex2f(88,82.5);
     glVertex2f(87,82);
     glVertex2f(86,81);
     glVertex2f(85,80);
     glVertex2f(85.5,75.5);
     glVertex2f(84,75);
    glVertex2f(82.5,75);
    glEnd();





    //tree 2
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.6,0.0);
    glVertex2f(77.5,48);
    glVertex2f(77,60);
     glVertex2f(77.5,62.5);
     glVertex2f(77,65);
     glVertex2f(77,67.5);
     glVertex2f(76,70);
     glVertex2f(75,75);
     glVertex2f(75,78);
     glVertex2f(80,75);
     glVertex2f(82.5,78);
     glVertex2f(82,75);
     glVertex2f(82,72.5);
     glVertex2f(81.5,70);
     glVertex2f(81,65);
     glVertex2f(81.5,62);
     glVertex2f(84,48);
    glEnd();




    //sing gras
    glBegin(GL_LINES);
    glLineWidth(15.0);
    glColor3f(0.0,0.6,0.3);
    glVertex2f(75,10);
     glVertex2f(72,20);
     glVertex2f(70,17.5);
     glVertex2f(75,10);
     glVertex2f(72.5,25);
     glVertex2f(71,22.5);
     glVertex2f(75,10);
     glVertex2f(73,25);
     glVertex2f(77,22.5);
     glVertex2f(75,10);
     glVertex2f(76,19);
     glVertex2f(75.5,15);
     glVertex2f(75,10);
     glVertex2f(77,15);
     glVertex2f(78,12);
    glEnd();



      bird(1);
      bird(2);
       bird(3);
        bird(4);
        bird(5);
        bird(6);

    if(net_k==1)
    {
        glBegin(GL_LINES);
            glVertex2f(30,50);
            glVertex2f(20,25);
            glVertex2f(30,50);
            glVertex2f(25,25);
            glVertex2f(30,50);
            glVertex2f(30,25);
            glVertex2f(30,50);
            glVertex2f(35,25);
            glVertex2f(30,50);
            glVertex2f(40,25);
            glVertex2f(30,50);
            glVertex2f(45,25);
            glVertex2f(30,50);
            glVertex2f(50,25);
            glVertex2f(30,50);
            glVertex2f(50,30);
            glVertex2f(30,50);
            glVertex2f(48,35);
            glVertex2f(30,50);
            glVertex2f(45,40);
            glVertex2f(30,50);
            glVertex2f(40,45);
            glVertex2f(30,50);
            glVertex2f(30.5,46);

            glVertex2f(30,50);
            glVertex2f(15,25);
            glVertex2f(30,50);
            glVertex2f(13,28);
            glVertex2f(30,50);
            glVertex2f(14,35);
            glVertex2f(30,50);
            glVertex2f(16,40);
            glVertex2f(30,50);
            glVertex2f(18,44);
            glVertex2f(30,50);
            glVertex2f(20,47);

        glEnd();
    // horizontal line bottem
        glBegin(GL_LINE_STRIP);
            glVertex2f(20,47);
            glVertex2f(18,44);
            glVertex2f(16,40);
            glVertex2f(14,35);
            glVertex2f(13,28);
            glVertex2f(15,25);
            glVertex2f(20,25);
            glVertex2f(25,25);
            glVertex2f(30,25);
            glVertex2f(35,25);
            glVertex2f(40,25);
            glVertex2f(45,25);
            glVertex2f(50,25);
            glVertex2f(50,30);
            glVertex2f(48,35);
            glVertex2f(45,40);
            glVertex2f(40,45);
        glEnd();
    int nx=2,ny=3,nxr=2;
        glBegin(GL_LINE_STRIP);
            glVertex2f(20+nx,47+.5);
            glVertex2f(18+nx,44+1);
            glVertex2f(16+nx,40+1);
            glVertex2f(14+nx,35+2);
            glVertex2f(13+nx,28+ny);
            glVertex2f(15+nx,25+ny);
            glVertex2f(20+nx,25+ny);
            glVertex2f(25+nx,25+ny);
            glVertex2f(30+nx,25+ny);
            glVertex2f(35+nx,25+ny);
            glVertex2f(40-nx,25+ny);
            glVertex2f(45-nx,25+ny);
            glVertex2f(50-nx,25+ny);
            glVertex2f(50-nx,30+ny);
            glVertex2f(48-nx,35+1);
            glVertex2f(45-nx,40+1);
            glVertex2f(40-nx,45+1);

        glEnd();

    //3rd horizontal
         nx=4;ny=6;;
        glBegin(GL_LINE_STRIP);
            glVertex2f(20+nx-1,47+1);
            glVertex2f(18+nx,44+2);
            glVertex2f(16+nx,40+3);
            glVertex2f(14+nx,35+3);
            glVertex2f(13+nx,28+ny);
            glVertex2f(15+nx,25+ny+1);
            glVertex2f(20+nx,25+ny+1);
            glVertex2f(25+nx,25+ny+1);
            glVertex2f(30+nx,25+ny+1);
            glVertex2f(35+nx,25+ny+1);
            glVertex2f(40+nx,25+ny+1);
            glVertex2f(45-nx,25+ny+1);
            glVertex2f(50-nx-1,25+ny+1);
            glVertex2f(50-nx,30+4);
            glVertex2f(48-nx-2,35+5);
            glVertex2f(45-nx-3,40+5);
            glVertex2f(40-nx-3,45+4);

        glEnd();
     nx=6;ny=9;
        glBegin(GL_LINE_STRIP);
            glVertex2f(20+nx-2,47+1);
            glVertex2f(18+nx,44+3);
            glVertex2f(16+nx,40+4);
            glVertex2f(14+nx,35+4);
            glVertex2f(13+nx,28+ny);
            glVertex2f(15+nx,25+ny+2);
            glVertex2f(20+nx,25+ny+2);
            glVertex2f(25+nx,25+ny+2);
            glVertex2f(30+nx,25+ny+2);
            glVertex2f(35+nx,25+ny+2);

            glVertex2f(48-nx+1,35+2);
            glVertex2f(45-nx,40+2);
            glVertex2f(40-nx+1,45+2);

        glEnd();
    //4th
    nx=8;ny=12;
        glBegin(GL_LINE_STRIP);
            glVertex2f(20+nx-2,47+2);
            glVertex2f(18+nx,44+4);
            glVertex2f(16+nx+1,40+6);
            glVertex2f(14+nx+1,35+8);
            glVertex2f(13+nx+1,28+ny);
            glVertex2f(15+nx+1,25+ny+2);
            glVertex2f(20+nx,25+ny+2);
            glVertex2f(25+nx,25+ny+2);
            glVertex2f(30+nx+1,25+ny+2);

            glVertex2f(48-nx,35+5);
            glVertex2f(45-nx,40+4);
            glVertex2f(40-nx+1,45+2);

        glEnd();

    //5
    nx=10;ny=15;
        glBegin(GL_LINE_STRIP);
            glVertex2f(20+nx-2,47+2.7);

            glVertex2f(13+nx+1,28+ny-.5);
            glVertex2f(15+nx+1,25+ny+2);

            glVertex2f(25+nx,25+ny+2);
            glVertex2f(30+nx-2,25+ny+2);


        glEnd();
    nx=12;ny=18;
        glBegin(GL_LINE_STRIP);

            glVertex2f(13+nx+1,28+ny-1);
            glVertex2f(15+nx+1,25+ny+2);
            glVertex2f(20+nx,25+ny+2);
            glVertex2f(25+nx-2,25+ny+2);

        glEnd();
    nx=14;ny=21;
        glBegin(GL_LINE_STRIP);

            glVertex2f(13+nx+1,28+ny-1);
            glVertex2f(15+nx+1,25+ny+2);
            glVertex2f(20+nx-2,25+ny+2);


        glEnd();
    }
}

void back_ground3()
{
int i,s_i;
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.0,0.0,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,100.0,0.0,100.0);


	 glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);//sky
		glColor3f(1,1,1);
		glVertex2f(0.0, 0.0);
		glVertex2f(100.0,0.0);
		glColor3f(0,.749,1);
		glVertex2f(100.0,100.0);
		glVertex2f(0.0,100.0);
	glEnd();
	if(display_order==6||display_order==7||display_order==8)
	{
	glShadeModel(GL_SMOOTH);
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);//sky
	//glColor3f(1,1,0.7);
	glVertex2f(0.0, 0.0);
	//glColor3f(0.7,0.9,1);
	glVertex2f(0.0,100.0);
	//glColor3f(0.7,0.9,1);
	glVertex2f(100.0,100.0);
	//glColor3f(0.7,0.9,1);
	glVertex2f(100.0,0.0);
	glEnd();
	while(1)
	{
		if(s_i>200)
			break;

		int x,y,z;
		x=rand()%100;
		y=rand()%100;
		z=rand()%100;
		glColor3f(1,1,1);
		glBegin(GL_POINTS);
			glPointSize(7);

			glVertex2f(x,y);
			glPointSize(8);
			glVertex2f(x,z);
			////glPointSize(9);
			//glVertex2f(z,z);

		glEnd();
		s_i++;
		}
	}


 	if(display_order!=3)
	{
	float a1=0.9,b1=0.9,c1=1.0, a2=0.9,b2=0.6,c2=0.0 ,a3=0.9,b3=0.6,c3=0 ,a4=0.9,b4=0.6,c4=0;
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(a1, b1, c1);
	glVertex2f(0.0, 0.0);
	glColor3f(a2, b2, c2);
	glVertex2f(0.0,52.0);
	glColor3f(a3, b3, c3);
	glVertex2f(100.0,48.0);
	glColor3f(a4, b4, c4);
	glVertex2f(100.0,0.0);
	glEnd();
	}

	if(display_order==3)
{
glBegin(GL_POLYGON);
	//glColor3f(.569,.933,.604);


glColor3f(0.196,.804,0.196);
	glVertex2f(0.0, 0.0);
glColor3f(0,0,0);
	glVertex2f(0.0,52.0);
	glColor3f(0.196,.804,0.196);
	glVertex2f(100.0,48.0);
	glColor3f(0,0,0);
	glVertex2f(100.0,0.0);
	glEnd();
//grain

glBegin(GL_POINTS);
	glPointSize(8.0);
	glColor3f(1,0,0);
	glColor3f(1,0.843,0);
	glVertex2f(28,45);
	glVertex2f(26,30);
	glVertex2f(22,45);
	glVertex2f(27,37);
	glVertex2f(26,31);
	glVertex2f(25,22);
	glVertex2f(24,21);
	glVertex2f(23,34);
	glVertex2f(22,45);
	glVertex2f(21,36);
	glVertex2f(20,45);
	glVertex2f(20,37);
	glVertex2f(20,33);
	glVertex2f(20,44);
	glVertex2f(21,31);
	glVertex2f(21,34);
	glVertex2f(21,44);
	glVertex2f(21,33);
	glVertex2f(15,15);
	glVertex2f(15,21);
	glVertex2f(15,26);
	glVertex2f(15,29);
	glVertex2f(15,31);
	glVertex2f(15,34);
	glVertex2f(15,39);
	glVertex2f(15,43);
	glVertex2f(15,45);
	glVertex2f(15,46);
	glVertex2f(15.5,45);
	glVertex2f(15.5,41);
	glVertex2f(15.5,38);
	glVertex2f(15.5,35);
	glVertex2f(15.6,30);
	glVertex2f(15.9,28);
	glVertex2f(15.3,24);
	glVertex2f(15.4,21);
	glVertex2f(16,18);
	glVertex2f(16.4,14);
	glVertex2f(16.3,26);
	glVertex2f(17,22);
	glVertex2f(17.4,45);
	glVertex2f(17.3,31);
	glVertex2f(17.1,24);
	glVertex2f(17.8,22);
	glVertex2f(17,33);
	glVertex2f(18,36);
	glVertex2f(18.3,35);
	glVertex2f(18.2,33);
	glVertex2f(18.1,31);
	glVertex2f(18.6,40);
	glVertex2f(18.3,24);
	glVertex2f(18.9,34);
	glVertex2f(18.7,24);
	glVertex2f(19.1,22);
	glVertex2f(19.3,24);
	glVertex2f(19.8,45);
	glVertex2f(19.7,33);
	glVertex2f(19.5,42);
	glVertex2f(19.2,37);
	glVertex2f(20,43);
	glVertex2f(20.6,45);
	glVertex2f(20.8,36);
	glVertex2f(20.2,18);
	glVertex2f(20.3,27);
	glVertex2f(20.7,34);
	glVertex2f(20.9,42);
	glVertex2f(21,41);
	glVertex2f(21.1,33);
	glVertex2f(21.3,25);
	glVertex2f(21.5,29);
	glVertex2f(21.7,39);
	glVertex2f(21.9,44);
	glVertex2f(22.2,18);
	glVertex2f(22.5,26);
	glVertex2f(22.8,22);
	glVertex2f(22.3,34);
	glVertex2f(22.1,36);
	glVertex2f(22.9,40);
	glVertex2f(23.2,43);
	glVertex2f(23.6,36);
	glVertex2f(23.8,25);
	glVertex2f(23.1,19);
	glVertex2f(23.3,22);
	glVertex2f(24.2,16);
	glVertex2f(24.4,13);
	glVertex2f(24.6,24);
	glVertex2f(24.8,37);
	glVertex2f(24.9,42);
	glVertex2f(24.7,39);
	glVertex2f(25.9,29);
	glVertex2f(25.3,35);
	glVertex2f(25.6,21);
	glVertex2f(25.3,43);
	glVertex2f(25.2,15);
	glVertex2f(25.1,39);
	glVertex2f(26,28);
	glVertex2f(26.2,42);
	glVertex2f(26.4,36);
	glVertex2f(26.6,38);
	glVertex2f(26.8,24);
	glVertex2f(27,16);
	glVertex2f(27.2,48);
	glVertex2f(27.5,22);
	glVertex2f(27.8,43);
	glVertex2f(27.9,45);
	glVertex2f(27.2,35);
	glVertex2f(27.1,32);
	glVertex2f(28.2,49);
	glVertex2f(28.4,31);
	glVertex2f(28.6,39);
	glVertex2f(28.8,24);
	glVertex2f(28.5,27);
	glVertex2f(28.7,21);
	glVertex2f(29.3,26);
	glVertex2f(29.5,22);
	glVertex2f(29.7,36);
	glVertex2f(29.9,45);
	glVertex2f(29.1,31);
	glVertex2f(29.4,26);
	glVertex2f(30,24);
	glVertex2f(30.1,32);
	glVertex2f(30.4,29);
	glVertex2f(30.5,44);
	glVertex2f(30.6,23);
	glVertex2f(39,20);
	glVertex2f(30.4,42);
	glVertex2f(30.6,33);
	glVertex2f(30.8,26);
	glVertex2f(30.2,39);
	glVertex2f(30.7,18);
	glVertex2f(30.3,48);
	glVertex2f(31.3,44);
	glVertex2f(31.5,22);
	glVertex2f(31.7,37);
	glVertex2f(31.9,19);
	glVertex2f(31.1,26);
	glVertex2f(31.4,31);
	glVertex2f(32.1,12);
	glVertex2f(32.2,43);
	glVertex2f(32.5,38);
	glVertex2f(32.6,26);
	glVertex2f(32.9,23);
	glVertex2f(32.4,19);
	glVertex2f(33.1,35);
	glVertex2f(33.3,41);
	glVertex2f(33.5,28);
	glVertex2f(33.7,19);
	glVertex2f(33.9,21);
	glVertex2f(33.8,31);
	glVertex2f(34.2,17);
	glVertex2f(34.4,47);
	glVertex2f(34.6,36);
	glVertex2f(34.8,25);
	glVertex2f(34.5,28);
	glVertex2f(34.9,16);
	glVertex2f(35.2,39);
	glVertex2f(35.6,44);
	glVertex2f(35.5,24);
	glVertex2f(35.9,19);
	glVertex2f(35.1,37);
	glVertex2f(35.2,22);
	glVertex2f(36.1,48);
	glVertex2f(36.3,33);
	glVertex2f(36.5,37);
	glVertex2f(36.7,31);
	glVertex2f(36.9,26);
	glVertex2f(37,24);
	glVertex2f(37.2,38);
	glVertex2f(37.4,35);
	glVertex2f(37.6,32);
	glVertex2f(37.8,44);
	glVertex2f(38.1,37);
	glVertex2f(38.3,34);
	glVertex2f(38.5,36);
	glVertex2f(38.7,24);
	glVertex2f(38.9,28);
	glVertex2f(39,43);
	glVertex2f(39.2,35);
	glVertex2f(39.4,21);
	glVertex2f(39.6,39);
	glVertex2f(39.8,41);
	glVertex2f(40.1,44);
	glVertex2f(40.3,31);
	glVertex2f(40.5,34);
	glVertex2f(40.7,26);
	glVertex2f(40.9,22);
	glVertex2f(41.2,42);
	glVertex2f(41.4,39);
	glVertex2f(41.6,37);
	glVertex2f(41.8,31);
	glVertex2f(42.1,38);
	glVertex2f(42.3,35);
	glVertex2f(42.5,31);
	glVertex2f(42.7,26);
	glVertex2f(43.2,41);
	glVertex2f(43.4,35);
	glVertex2f(43.6,31);
	glVertex2f(43.8,27);
	glVertex2f(44.1,28);
	glVertex2f(44.3,32);
	glVertex2f(44.5,37);
	glVertex2f(44.7,41);
	glVertex2f(45,42);
	glVertex2f(45.2,37.8);
	glVertex2f(45.4,35);
	glVertex2f(45.6,30);
	glVertex2f(14,26);
	glVertex2f(13,21);
	glVertex2f(14.5,32);
	glVertex2f(13.4,28);
	glEnd();


}


//half tree branch
glBegin(GL_POLYGON);
glColor3f(0.0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd();

//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);
glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);
glEnd();

//grass middle
int gx=20,gy=5;
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);

glVertex2f(0+gx,40+gy);
 glVertex2f(0+gx,47+gy);
 glVertex2f(2.5+gx,46.5+gy);
 glVertex2f(2+gx,48+gy);
 glVertex2f(0+gx,50+gy);
 glVertex2f(2+gx,49.5+gy);
 glVertex2f(5+gx,47+gy);
 glVertex2f(2.5+gx,55+gy);
glVertex2f(7+gx,50+gy);
 glVertex2f(8+gx,53+gy);
 glVertex2f(10+gx,55+gy);
 glVertex2f(10.5+gx,52+gy);
 glVertex2f(10+gx,50+gy);
 glVertex2f(17+gx,53+gy);
 glVertex2f(10+gx,45+gy);
 glVertex2f(20+gx,47+gy);
 glVertex2f(18+gx,45+gy);
 glVertex2f(25+gx,46+gy);
 glVertex2f(20+gx,42+gy);
 glVertex2f(30+gx,40+gy);
glEnd();

//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);

glEnd();


//gras 1 dwn
glBegin(GL_POLYGON);
glColor3f(0.196078,0.8,0.196078);
glVertex2f(0,27.5);
 glVertex2f(0,32.5);
 glVertex2f(0.3,33.5);
 glVertex2f(2.5,35);
 glVertex2f(2.5,32.5);
 glVertex2f(4.9,35);
 glVertex2f(7.5,37.5);
 glVertex2f(7,35);
 glVertex2f(10,35);
 glVertex2f(7,32.5);
 glVertex2f(15,35);
 glVertex2f(12.5,32);
 glVertex2f(15,30);
 glVertex2f(12.5,27);
 glVertex2f(20,26);
glEnd();


//grass 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);

glVertex2f(0,40);
 glVertex2f(0,47);
 glVertex2f(2.5,46.5);
 glVertex2f(2,48);
 glVertex2f(0,50);
 glVertex2f(2,49.5);
 glVertex2f(5,47);
 glVertex2f(2.5,55);
glVertex2f(7,50);
 glVertex2f(8,53);
 glVertex2f(10,55);
 glVertex2f(10.5,52);
 glVertex2f(10,50);
 glVertex2f(17,53);
 glVertex2f(10,45);
 glVertex2f(20,47);
 glVertex2f(18,45);
 glVertex2f(25,46);
 glVertex2f(20,42);
 glVertex2f(30,40);
glEnd();

//ryt grass
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.3);
glVertex2f(0,7.5);
 glVertex2f(5,13);
 glVertex2f(0,15);
 glVertex2f(5,13);
 glVertex2f(0,20);
 glVertex2f(5,15);
 glVertex2f(10,18);
 glVertex2f(15,25);
 glVertex2f(13,20);
 glVertex2f(17,21);
 glVertex2f(20,23);
 glVertex2f(17,18);
 glVertex2f(15,15);
 glVertex2f(20,17);
 glVertex2f(25,18);
 glVertex2f(20,15);
 glVertex2f(15,10);
 glVertex2f(30,10);
glVertex2f(35,7.5);
glEnd();


//grass 2
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
glVertex2f(0,50);
glVertex2f(0,65);
 glVertex2f(10,67);
 glVertex2f(7,65);
 glVertex2f(17,65);
 glVertex2f(15,64);
 glVertex2f(12,63);
 glVertex2f(15,60);
 glVertex2f(17,57);
 glVertex2f(15,56);
 glVertex2f(20,53);
 glVertex2f(17,54);
 glVertex2f(18,50);
 glVertex2f(16,47);
 glVertex2f(10,45);
 glVertex2f(17,53);
 glVertex2f(10,50);
 glVertex2f(10.5,52);
 glVertex2f(10,55);
 glVertex2f(8,53);
 glVertex2f(7,50);
 glVertex2f(2.5,55);
 glVertex2f(5,47);
 glVertex2f(2,49.5);
 glVertex2f(0,50);
glEnd();


//branch
glBegin(GL_POLYGON);
glColor3f(0.2,0.8,0.0);
glVertex2f(72.5,70);
 glVertex2f(71.5,69);
 glVertex2f(70,68);
 glVertex2f(67.5,68.5);
 glVertex2f(66,70);
 glVertex2f(66.5,71);
 glVertex2f(66,72.7);
 glVertex2f(65,74);
 glVertex2f(63,75);
 glVertex2f(62.5,75.5);
 glVertex2f(62,77.5);
 glVertex2f(61,79);
 glVertex2f(61,80);
 glVertex2f(61.5,81);
 glVertex2f(62,82.5);
 glVertex2f(62.3,84.5);
 glVertex2f(62.4,85);
 glVertex2f(62.5,87.5);
 glVertex2f(63.5,90);
 glVertex2f(65,91);
 glVertex2f(66.5,92);
 glVertex2f(67.5,92.5);
 glVertex2f(69,92);
 glVertex2f(70.5,90.5);
glEnd();
//tree2half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(75,48);
 glVertex2f(75.5,58);
 glVertex2f(75.6,60);
 glVertex2f(75.5,61);
 glVertex2f(75,65);
 glVertex2f(74.5,66);
 glVertex2f(73,69);
 glVertex2f(72.5,70);
 glVertex2f(72.5,77.5);
 glVertex2f(75,80);
 glVertex2f(81,67.5);
 glVertex2f(78,48);
glEnd();
//tree branch 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,75);
glVertex2f(72.5,72.5);
 glVertex2f(71,74.0);
 glVertex2f(70.5,74.5);
 glVertex2f(70,75);
 glVertex2f(69.5,76);
 glVertex2f(69.5,77);

 glVertex2f(70,80);
 glVertex2f(68,81);
 glVertex2f(67.5,82);
 glVertex2f(66,83.5);
 glVertex2f(66.3,84.5);
 glVertex2f(66.5,85);
 glVertex2f(67,87);
 glVertex2f(67.5,87.5);
 glVertex2f(70,90);
 glVertex2f(71,91.5);
 glVertex2f(71.5,92.5);
 glVertex2f(72.5,94);
 glVertex2f(75,95);
 glVertex2f(77.5,96);
 glVertex2f(80,96.5);
 glVertex2f(82.5,96);
 glVertex2f(83,95);
  glVertex2f(83.5,94.5);
  glVertex2f(84.5,92.5);

 glVertex2f(84.7,90);
 glVertex2f(86,91);
 glVertex2f(87.0,91.5);
 glVertex2f(87.5,90);
 glVertex2f(87.5,89);
 glVertex2f(89,89);
 glVertex2f(89.5,87.5);
 glVertex2f(89,85);
glVertex2f(88,82.5);
 glVertex2f(87,82);
 glVertex2f(86,81);
 glVertex2f(85,80);
 glVertex2f(85.5,75.5);
 glVertex2f(84,75);
glVertex2f(82.5,75);
glEnd();





//tree 2
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(77.5,48);
glVertex2f(77,60);
 glVertex2f(77.5,62.5);
 glVertex2f(77,65);
 glVertex2f(77,67.5);
 glVertex2f(76,70);
 glVertex2f(75,75);
 glVertex2f(75,78);
 glVertex2f(80,75);
 glVertex2f(82.5,78);
 glVertex2f(82,75);
 glVertex2f(82,72.5);
 glVertex2f(81.5,70);
 glVertex2f(81,65);
 glVertex2f(81.5,62);
 glVertex2f(84,48);
glEnd();

//sing gras
glBegin(GL_LINES);
glLineWidth(15.0);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,10);
 glVertex2f(72,20);
 glVertex2f(70,17.5);
 glVertex2f(75,10);
 glVertex2f(72.5,25);
 glVertex2f(71,22.5);
 glVertex2f(75,10);
 glVertex2f(73,25);
 glVertex2f(77,22.5);
 glVertex2f(75,10);
 glVertex2f(76,19);
 glVertex2f(75.5,15);
 glVertex2f(75,10);
 glVertex2f(77,15);
 glVertex2f(78,12);
glEnd();






//a-=0.04;c-=0.04;b+=0.04;d+=0.04;
if(display_order==6|display_order==7)
{
a=-49;
b=0;
c=0;
d=0;
}

if(display_order==6|display_order==7)
{
c=0;
d=0;
}


bird1(1);
bird1(2);
bird1(3);
bird1(4);
bird1(5);
bird1(6);

c-=0.06;d+=0.06;
if(display_order==6|display_order==3)
{
//net

	glBegin(GL_LINES);
		glVertex2f(30+c,50+d);
		glVertex2f(20+c,25+d);
		glVertex2f(30+c,50+d);
		glVertex2f(25+c,25+d);
		glVertex2f(30+c,50+d);
		glVertex2f(30+c,25+d);
		glVertex2f(30+c,50+d);
		glVertex2f(35+c,25+d);
		glVertex2f(30+c,50+d);
		glVertex2f(40+c,25+d);
		glVertex2f(30+c,50+d);
		glVertex2f(45+c,25+d);
		glVertex2f(30+c,50+d);
		glVertex2f(50+c,25+d);
		glVertex2f(30+c,50+d);
		glVertex2f(50+c,30+d);
		glVertex2f(30+c,50+d);
		glVertex2f(48+c,35+d);
		glVertex2f(30+c,50+d);
		glVertex2f(45+c,40+d);
		glVertex2f(30+c,50+d);
		glVertex2f(40+c,45+d);
		glVertex2f(30+c,50+d);
		glVertex2f(30.5+c,46+d);

		glVertex2f(30+c,50+d);
		glVertex2f(15+c,25+d);
		glVertex2f(30+c,50+d);
		glVertex2f(13+c,28+d);
		glVertex2f(30+c,50+d);
		glVertex2f(14+c,35+d);
		glVertex2f(30+c,50+d);
		glVertex2f(16+c,40+d);
		glVertex2f(30+c,50+d);
		glVertex2f(18+c,44+d);
		glVertex2f(30+c,50+d);
		glVertex2f(20+c,47+d);

	glEnd();
// horizontal line bottem
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+c,47+d);
		glVertex2f(18+c,44+d);
		glVertex2f(16+c,40+d);
		glVertex2f(14+c,35+d);
		glVertex2f(13+c,28+d);
		glVertex2f(15+c,25+d);
		glVertex2f(20+c,25+d);
		glVertex2f(25+c,25+d);
		glVertex2f(30+c,25+d);
		glVertex2f(35+c,25+d);
		glVertex2f(40+c,25+d);
		glVertex2f(45+c,25+d);
		glVertex2f(50+c,25+d);
		glVertex2f(50+c,30+d);
		glVertex2f(48+c,35+d);
		glVertex2f(45+c,40+d);
		glVertex2f(40+c,45+d);
	glEnd();
int nx=2,ny=3,nxr=2;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx+c,47+.5+d);
		glVertex2f(18+nx+c,44+1+d);
		glVertex2f(16+nx+c,40+1+d);
		glVertex2f(14+nx+c,35+2+d);
		glVertex2f(13+nx+c,28+ny+d);
		glVertex2f(15+nx+c,25+ny+d);
		glVertex2f(20+nx+c,25+ny+d);
		glVertex2f(25+nx+c,25+ny+d);
		glVertex2f(30+nx+c,25+ny+d);
		glVertex2f(35+nx+c,25+ny+d);
		glVertex2f(40-nx+c,25+ny+d);
		glVertex2f(45-nx+c,25+ny+d);
		glVertex2f(50-nx+c,25+ny+d);
		glVertex2f(50-nx+c,30+ny+d);
		glVertex2f(48-nx+c,35+1+d);
		glVertex2f(45-nx+c,40+1+d);
		glVertex2f(40-nx+c,45+1+d);

	glEnd();

//3rd horizontal
	 nx=4;ny=6;;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-1+c,47+1+d);
		glVertex2f(18+nx+c,44+2+d);
		glVertex2f(16+nx+c,40+3+d);
		glVertex2f(14+nx+c,35+3+d);
		glVertex2f(13+nx+c,28+ny+d);
		glVertex2f(15+nx+c,25+ny+1+d);
		glVertex2f(20+nx+c,25+ny+1+d);
		glVertex2f(25+nx+c,25+ny+1+d);
		glVertex2f(30+nx+c,25+ny+1+d);
		glVertex2f(35+nx+c,25+ny+1+d);
		glVertex2f(40+nx+c,25+ny+1+d);
		glVertex2f(45-nx+c,25+ny+1+d);
		glVertex2f(50-nx-1+c,25+ny+1+d);
		glVertex2f(50-nx+c,30+4+d);
		glVertex2f(48-nx-2+c,35+5+d);
		glVertex2f(45-nx-3+c,40+5+d);
		glVertex2f(40-nx-3+c,45+4+d);

	glEnd();
 nx=6;ny=9;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+c,47+1+d);
		glVertex2f(18+nx+c,44+3+d);
		glVertex2f(16+nx+c,40+4+d);
		glVertex2f(14+nx+c,35+4+d);
		glVertex2f(13+nx+c,28+ny+d);
		glVertex2f(15+nx+c,25+ny+2+d);
		glVertex2f(20+nx+c,25+ny+2+d);
		glVertex2f(25+nx+c,25+ny+2+d);
		glVertex2f(30+nx+c,25+ny+2+d);
		glVertex2f(35+nx+c,25+ny+2+d);

		glVertex2f(48-nx+1+c,35+2+d);
		glVertex2f(45-nx+c,40+2+d);
		glVertex2f(40-nx+1+c,45+2+d);

	glEnd();
//4th
nx=8;ny=12;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+c,47+2+d);
		glVertex2f(18+nx+c,44+4+d);
		glVertex2f(16+nx+1+c,40+6+d);
		glVertex2f(14+nx+1+c,35+8+d);
		glVertex2f(13+nx+1+c,28+ny+d);
		glVertex2f(15+nx+1+c,25+ny+2+d);
		glVertex2f(20+nx+c,25+ny+2+d);
		glVertex2f(25+nx+c,25+ny+2+d);
		glVertex2f(30+nx+1+c,25+ny+2+d);

		glVertex2f(48-nx+c,35+5+d);
		glVertex2f(45-nx+c,40+4+d);
		glVertex2f(40-nx+1+c,45+2+d);

	glEnd();

//5
nx=10;ny=15;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+c,47+2.7+d);

		glVertex2f(13+nx+1+c,28+ny-.5+d);
		glVertex2f(15+nx+1+c,25+ny+2+d);

		glVertex2f(25+nx+c,25+ny+2+d);
		glVertex2f(30+nx-2+c,25+ny+2+d);


	glEnd();
nx=12;ny=18;
	glBegin(GL_LINE_STRIP);

		glVertex2f(13+nx+1+c,28+ny-1+d);
		glVertex2f(15+nx+1+c,25+ny+2+d);
		glVertex2f(20+nx+c,25+ny+2+d);
		glVertex2f(25+nx-2+c,25+ny+2+d);

	glEnd();
nx=14;ny=21;
	glBegin(GL_LINE_STRIP);

		glVertex2f(13+nx+1+c,28+ny-1+d);
		glVertex2f(15+nx+1+c,25+ny+2+d);
		glVertex2f(20+nx-2+c,25+ny+2+d);


	glEnd();
//}

}
if(display_order==3)
{
char str[]="PRESS d/D TO CONTINUE";
glColor3f(0,0,0);
glRasterPos2f(30,5);
		for(i=0;i<strlen(str);i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
		}
//glutPostRedisplay();
}


if(display_order==6)
{
char str[]="PRESS c/C TO CONTINUE";
glColor3f(0,0,0);
glRasterPos2f(30,5);
		for(i=0;i<strlen(str);i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
		}
}
if(display_order==7)
{
char str[]="PRESS f/F TO CONTINUE";
glRasterPos2f(30,5);
		for(i=0;i<strlen(str);i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
		}
//glutPostRedisplay();
}

if(display_order==8)
{
char str[]="PRESS t/T TO CONTINUE";
glColor3f(0,0,0);
glRasterPos2f(30,5);
		for(i=0;i<strlen(str);i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
		}
//glutPostRedisplay();
}


}


void back_ground4()
{

int i;
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.0,0.0,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,100.0,0.0,100.0);


	 glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);//sky
	glColor3f(1,.271,0);
	//glColor3f(1,1,0.7);
	glVertex2f(0.0, 0.0);
	//glColor3f(0,0.9,1);
	glColor3f(1,1,0);
	glVertex2f(0.0,100.0);
	//glColor3f(0.7,0.9,1);
	//glColor3f(1,.843,0);
	glVertex2f(100.0,100.0);
	//glColor3f(0.7,0.9,1);
	glVertex2f(100.0,0.0);
	glEnd();

	float a1=0.9,b1=0.9,c1=1.0, a2=0.9,b2=0.6,c2=0.0 ,a3=0.9,b3=0.6,c3=0 ,a4=0.9,b4=0.6,c4=0;
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(a1, b1, c1);
	glVertex2f(0.0, 0.0);
	glColor3f(a2, b2, c2);
	glVertex2f(0.0,52.0);
	glColor3f(a3, b3, c3);
	glVertex2f(100.0,48.0);
	glColor3f(a4, b4, c4);
	glVertex2f(100.0,0.0);
	glEnd();
if(display_order==4)
{
glBegin(GL_POLYGON);
	//glColor3f(.569,.933,.604);


glColor3f(0,1,0);
	glVertex2f(0.0, 0.0);
glColor3f(0,0,0);
	glVertex2f(0.0,52.0);
	glColor3f(0,1,0);
	glVertex2f(100.0,48.0);
	glColor3f(0,0,0);
	glVertex2f(100.0,0.0);
	glEnd();
}


//half tree branch
glBegin(GL_POLYGON);
glColor3f(0.0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd();

//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);
glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);
glEnd();


if(display_order!=4)
{
//grass middle
int gx=20,gy=5;
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);

glVertex2f(0+gx,40+gy);
 glVertex2f(0+gx,47+gy);
 glVertex2f(2.5+gx,46.5+gy);
 glVertex2f(2+gx,48+gy);
 glVertex2f(0+gx,50+gy);
 glVertex2f(2+gx,49.5+gy);
 glVertex2f(5+gx,47+gy);
 glVertex2f(2.5+gx,55+gy);
glVertex2f(7+gx,50+gy);
 glVertex2f(8+gx,53+gy);
 glVertex2f(10+gx,55+gy);
 glVertex2f(10.5+gx,52+gy);
 glVertex2f(10+gx,50+gy);
 glVertex2f(17+gx,53+gy);
 glVertex2f(10+gx,45+gy);
 glVertex2f(20+gx,47+gy);
 glVertex2f(18+gx,45+gy);
 glVertex2f(25+gx,46+gy);
 glVertex2f(20+gx,42+gy);
 glVertex2f(30+gx,40+gy);
glEnd();
}

//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);

glEnd();


//gras 1 dwn
if(display_order!=4)
{
glBegin(GL_POLYGON);
glColor3f(0.196078,0.8,0.196078);
glVertex2f(0,27.5);
 glVertex2f(0,32.5);
 glVertex2f(0.3,33.5);
 glVertex2f(2.5,35);
 glVertex2f(2.5,32.5);
 glVertex2f(4.9,35);
 glVertex2f(7.5,37.5);
 glVertex2f(7,35);
 glVertex2f(10,35);
 glVertex2f(7,32.5);
 glVertex2f(15,35);
 glVertex2f(12.5,32);
 glVertex2f(15,30);
 glVertex2f(12.5,27);
 glVertex2f(20,26);
glEnd();
}

//grass 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);

glVertex2f(0,40);
 glVertex2f(0,47);
 glVertex2f(2.5,46.5);
 glVertex2f(2,48);
 glVertex2f(0,50);
 glVertex2f(2,49.5);
 glVertex2f(5,47);
 glVertex2f(2.5,55);
glVertex2f(7,50);
 glVertex2f(8,53);
 glVertex2f(10,55);
 glVertex2f(10.5,52);
 glVertex2f(10,50);
 glVertex2f(17,53);
 glVertex2f(10,45);
 glVertex2f(20,47);
 glVertex2f(18,45);
 glVertex2f(25,46);
 glVertex2f(20,42);
 glVertex2f(30,40);
glEnd();

//ryt grass
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.3);
glVertex2f(0,7.5);
 glVertex2f(5,13);
 glVertex2f(0,15);
 glVertex2f(5,13);
 glVertex2f(0,20);
 glVertex2f(5,15);
 glVertex2f(10,18);
 glVertex2f(15,25);
 glVertex2f(13,20);
 glVertex2f(17,21);
 glVertex2f(20,23);
 glVertex2f(17,18);
 glVertex2f(15,15);
 glVertex2f(20,17);
 glVertex2f(25,18);
 glVertex2f(20,15);
 glVertex2f(15,10);
 glVertex2f(30,10);
glVertex2f(35,7.5);
glEnd();


//grass 2
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
glVertex2f(0,50);
glVertex2f(0,65);
 glVertex2f(10,67);
 glVertex2f(7,65);
 glVertex2f(17,65);
 glVertex2f(15,64);
 glVertex2f(12,63);
 glVertex2f(15,60);
 glVertex2f(17,57);
 glVertex2f(15,56);
 glVertex2f(20,53);
 glVertex2f(17,54);
 glVertex2f(18,50);
 glVertex2f(16,47);
 glVertex2f(10,45);
 glVertex2f(17,53);
 glVertex2f(10,50);
 glVertex2f(10.5,52);
 glVertex2f(10,55);
 glVertex2f(8,53);
 glVertex2f(7,50);
 glVertex2f(2.5,55);
 glVertex2f(5,47);
 glVertex2f(2,49.5);
 glVertex2f(0,50);
glEnd();


//branch
glBegin(GL_POLYGON);
glColor3f(0.2,0.8,0.0);
glVertex2f(72.5,70);
 glVertex2f(71.5,69);
 glVertex2f(70,68);
 glVertex2f(67.5,68.5);
 glVertex2f(66,70);
 glVertex2f(66.5,71);
 glVertex2f(66,72.7);
 glVertex2f(65,74);
 glVertex2f(63,75);
 glVertex2f(62.5,75.5);
 glVertex2f(62,77.5);
 glVertex2f(61,79);
 glVertex2f(61,80);
 glVertex2f(61.5,81);
 glVertex2f(62,82.5);
 glVertex2f(62.3,84.5);
 glVertex2f(62.4,85);
 glVertex2f(62.5,87.5);
 glVertex2f(63.5,90);
 glVertex2f(65,91);
 glVertex2f(66.5,92);
 glVertex2f(67.5,92.5);
 glVertex2f(69,92);
 glVertex2f(70.5,90.5);
glEnd();
//tree2half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(75,48);
 glVertex2f(75.5,58);
 glVertex2f(75.6,60);
 glVertex2f(75.5,61);
 glVertex2f(75,65);
 glVertex2f(74.5,66);
 glVertex2f(73,69);
 glVertex2f(72.5,70);
 glVertex2f(72.5,77.5);
 glVertex2f(75,80);
 glVertex2f(81,67.5);
 glVertex2f(78,48);
glEnd();
//tree branch 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,75);
glVertex2f(72.5,72.5);
 glVertex2f(71,74.0);
 glVertex2f(70.5,74.5);
 glVertex2f(70,75);
 glVertex2f(69.5,76);
 glVertex2f(69.5,77);

 glVertex2f(70,80);
 glVertex2f(68,81);
 glVertex2f(67.5,82);
 glVertex2f(66,83.5);
 glVertex2f(66.3,84.5);
 glVertex2f(66.5,85);
 glVertex2f(67,87);
 glVertex2f(67.5,87.5);
 glVertex2f(70,90);
 glVertex2f(71,91.5);
 glVertex2f(71.5,92.5);
 glVertex2f(72.5,94);
 glVertex2f(75,95);
 glVertex2f(77.5,96);
 glVertex2f(80,96.5);
 glVertex2f(82.5,96);
 glVertex2f(83,95);
  glVertex2f(83.5,94.5);
  glVertex2f(84.5,92.5);

 glVertex2f(84.7,90);
 glVertex2f(86,91);
 glVertex2f(87.0,91.5);
 glVertex2f(87.5,90);
 glVertex2f(87.5,89);
 glVertex2f(89,89);
 glVertex2f(89.5,87.5);
 glVertex2f(89,85);
glVertex2f(88,82.5);
 glVertex2f(87,82);
 glVertex2f(86,81);
 glVertex2f(85,80);
 glVertex2f(85.5,75.5);
 glVertex2f(84,75);
glVertex2f(82.5,75);
glEnd();





//tree 2
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(77.5,48);
glVertex2f(77,60);
 glVertex2f(77.5,62.5);
 glVertex2f(77,65);
 glVertex2f(77,67.5);
 glVertex2f(76,70);
 glVertex2f(75,75);
 glVertex2f(75,78);
 glVertex2f(80,75);
 glVertex2f(82.5,78);
 glVertex2f(82,75);
 glVertex2f(82,72.5);
 glVertex2f(81.5,70);
 glVertex2f(81,65);
 glVertex2f(81.5,62);
 glVertex2f(84,48);
glEnd();

//branch
glBegin(GL_POLYGON);
glColor3f(0.2,0.8,0.0);
glVertex2f(90.5,30);
 glVertex2f(89.5,29);
 glVertex2f(88,28);
 glVertex2f(85.5,28.5);
 glVertex2f(84,30);
 glVertex2f(84.5,31);
 glVertex2f(84,32.7);
 glVertex2f(83,34);
 glVertex2f(81,35);
 glVertex2f(80.5,35.5);
 glVertex2f(80,37.5);
 glVertex2f(79,39);
 glVertex2f(79,40);
 glVertex2f(79.5,41);
 glVertex2f(80,42.5);
 glVertex2f(80.3,44.5);
 glVertex2f(80.4,45);
 glVertex2f(80.5,47.5);
 glVertex2f(81.5,50);
 glVertex2f(83,51);
 glVertex2f(84.5,52);
 glVertex2f(85.5,52.5);
 glVertex2f(87,52);
 glVertex2f(88.5,50.5);
glEnd();
//tree3half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(90,7.5);
 glVertex2f(90.5,8);
 glVertex2f(90.6,20);
 glVertex2f(90.5,61);
 glVertex2f(90,25);
 glVertex2f(89.5,26);
 glVertex2f(88,29);
 glVertex2f(87.5,30);
 glVertex2f(87.5,37.5);
 glVertex2f(90,40);
 glVertex2f(96,27.5);
 glVertex2f(93,7.5);
glEnd();
//tree branch 3
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(90,35);
glVertex2f(87.5,32.5);
 glVertex2f(86,34.0);
 glVertex2f(85.5,34.5);
 glVertex2f(85,35);
 glVertex2f(84.5,36);
 glVertex2f(84.5,37);

 glVertex2f(85,40);
 glVertex2f(83,41);
 glVertex2f(82.5,42);
 glVertex2f(81,43.5);
 glVertex2f(81.3,44.5);
 glVertex2f(81.5,45);
 glVertex2f(82,47);
 glVertex2f(82.5,47.5);
 glVertex2f(85,50);
 glVertex2f(86,51.5);
 glVertex2f(86.5,52.5);
 glVertex2f(87.5,54);
 glVertex2f(90,55);
 glVertex2f(92.5,56);
 glVertex2f(95,56.5);
 glVertex2f(97.5,56);
 glVertex2f(98,55);
  glVertex2f(98.5,54.5);
  glVertex2f(99.5,52.5);

 glVertex2f(99.7,50);
 glVertex2f(101,51);
 glVertex2f(102.0,51.5);
 glVertex2f(102.5,50);
 glVertex2f(102.5,49);
 glVertex2f(104,49);
 glVertex2f(104.5,47.5);
 glVertex2f(104,45);
glVertex2f(103,42.5);
 glVertex2f(102,42);
 glVertex2f(101,41);
 glVertex2f(100,40);
 glVertex2f(100.5,35.5);
 glVertex2f(99,35);
glVertex2f(97.5,35);
glEnd();



//tree3
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(92,7.5);
glVertex2f(92,20);
 glVertex2f(92.5,22.5);
 glVertex2f(92,25);
 glVertex2f(92,27.5);
 glVertex2f(91,30);
 glVertex2f(90,35);
 glVertex2f(90.5,40);
 glVertex2f(95,35);
 glVertex2f(97.5,40);
 glVertex2f(97,35);
 glVertex2f(97,32.5);
 glVertex2f(96.5,30);
 glVertex2f(96,25);
 glVertex2f(96.5,22);
 glVertex2f(99,7.5);
glEnd();



//sing gras
glBegin(GL_LINES);
glLineWidth(15.0);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,10);
 glVertex2f(72,20);
 glVertex2f(70,17.5);
 glVertex2f(75,10);
 glVertex2f(72.5,25);
 glVertex2f(71,22.5);
 glVertex2f(75,10);
 glVertex2f(73,25);
 glVertex2f(77,22.5);
 glVertex2f(75,10);
 glVertex2f(76,19);
 glVertex2f(75.5,15);
 glVertex2f(75,10);
 glVertex2f(77,15);
 glVertex2f(78,12);
glEnd();



bird2(1);
bird2(2);
bird2(3);
bird2(4);
bird2(5);
bird2(6);

//net
nx4=49.5;ny4=50;
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(20+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(25+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(30+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(35+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(40+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(45+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(50+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(50+nx4+a,30+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(48+nx4+a,35+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(45+nx4+a,40+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(40+nx4+a,45+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(30.5+nx4+a,46+ny4);

		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(15+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(13+nx4+a,28+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(14+nx4+a,35+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(16+nx4+a,40+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(18+nx4+a,44+ny4);
		glVertex2f(30+nx4+a,50+ny4);
		glVertex2f(20+nx4+a,47+ny4);

	glEnd();
// horizontal line bottem
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx4+a,47+ny4);
		glVertex2f(18+nx4+a,44+ny4);
		glVertex2f(16+nx4+a,40+ny4);
		glVertex2f(14+nx4+a,35+ny4);
		glVertex2f(13+nx4+a,28+ny4);
		glVertex2f(15+nx4+a,25+ny4);
		glVertex2f(20+nx4+a,25+ny4);
		glVertex2f(25+nx4+a,25+ny4);
		glVertex2f(30+nx4+a,25+ny4);
		glVertex2f(35+nx4+a,25+ny4);
		glVertex2f(40+nx4+a,25+ny4);
		glVertex2f(45+nx4+a,25+ny4);
		glVertex2f(50+nx4+a,25+ny4);
		glVertex2f(50+nx4+a,30+ny4);
		glVertex2f(48+nx4+a,35+ny4);
		glVertex2f(45+nx4+a,40+ny4);
		glVertex2f(40+nx4+a,45+ny4);
	glEnd();
int nx=2,ny=3,nxr=2;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx+nx4+a,47+.5+ny4);
		glVertex2f(18+nx+nx4+a,44+1+ny4);
		glVertex2f(16+nx+nx4+a,40+1+ny4);
		glVertex2f(14+nx+nx4+a,35+2+ny4);
		glVertex2f(13+nx+nx4+a,28+ny+ny4);
		glVertex2f(15+nx+nx4+a,25+ny+ny4);
		glVertex2f(20+nx+nx4+a,25+ny+ny4);
		glVertex2f(25+nx+nx4+a,25+ny+ny4);
		glVertex2f(30+nx+nx4+a,25+ny+ny4);
		glVertex2f(35+nx+nx4+a,25+ny+ny4);
		glVertex2f(40-nx+nx4+a,25+ny+ny4);
		glVertex2f(45-nx+nx4+a,25+ny+ny4);
		glVertex2f(50-nx+nx4+a,25+ny+ny4);
		glVertex2f(50-nx+nx4+a,30+ny+ny4);
		glVertex2f(48-nx+nx4+a,35+1+ny4);
		glVertex2f(45-nx+nx4+a,40+1+ny4);
		glVertex2f(40-nx+nx4+a,45+1+ny4);

	glEnd();

//3rd horizontal
	 nx=4;ny=6;;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-1+nx4+a,47+1+ny4);
		glVertex2f(18+nx+nx4+a,44+2+ny4);
		glVertex2f(16+nx+nx4+a,40+3+ny4);
		glVertex2f(14+nx+nx4+a,35+3+ny4);
		glVertex2f(13+nx+nx4+a,28+ny+ny4);
		glVertex2f(15+nx+nx4+a,25+ny+1+ny4);
		glVertex2f(20+nx+nx4+a,25+ny+1+ny4);
		glVertex2f(25+nx+nx4+a,25+ny+1+ny4);
		glVertex2f(30+nx+nx4+a,25+ny+1+ny4);
		glVertex2f(35+nx+nx4+a,25+ny+1+ny4);
		glVertex2f(40+nx+nx4+a,25+ny+1+ny4);
		glVertex2f(45-nx+nx4+a,25+ny+1+ny4);
		glVertex2f(50-nx-1+nx4+a,25+ny+1+ny4);
		glVertex2f(50-nx+nx4+a,30+4+ny4);
		glVertex2f(48-nx-2+nx4+a,35+5+ny4);
		glVertex2f(45-nx-3+nx4+a,40+5+ny4);
		glVertex2f(40-nx-3+nx4+a,45+4+ny4);

	glEnd();
 nx=6;ny=9;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+nx4+a,47+1+ny4);
		glVertex2f(18+nx+nx4+a,44+3+ny4);
		glVertex2f(16+nx+nx4+a,40+4+ny4);
		glVertex2f(14+nx+nx4+a,35+4+ny4);
		glVertex2f(13+nx+nx4+a,28+ny+ny4);
		glVertex2f(15+nx+nx4+a,25+ny+2+ny4);
		glVertex2f(20+nx+nx4+a,25+ny+2+ny4);
		glVertex2f(25+nx+nx4+a,25+ny+2+ny4);
		glVertex2f(30+nx+nx4+a,25+ny+2+ny4);
		glVertex2f(35+nx+nx4+a,25+ny+2+ny4);

		glVertex2f(48-nx+1+nx4+a,35+2+ny4);
		glVertex2f(45-nx+nx4+a,40+2+ny4);
		glVertex2f(40-nx+1+nx4+a,45+2+ny4);

	glEnd();
//4th
nx=8;ny=12;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+nx4+a,47+2+ny4);
		glVertex2f(18+nx+nx4+a,44+4+ny4);
		glVertex2f(16+nx+1+nx4+a,40+6+ny4);
		glVertex2f(14+nx+1+nx4+a,35+8+ny4);
		glVertex2f(13+nx+1+nx4+a,28+ny+ny4);
		glVertex2f(15+nx+1+nx4+a,25+ny+2+ny4);
		glVertex2f(20+nx+nx4+a,25+ny+2+ny4);
		glVertex2f(25+nx+nx4+a,25+ny+2+ny4);
		glVertex2f(30+nx+1+nx4+a,25+ny+2+ny4);

		glVertex2f(48-nx+nx4+a,35+5+ny4);
		glVertex2f(45-nx+nx4+a,40+4+ny4);
		glVertex2f(40-nx+1+nx4+a,45+2+ny4);

	glEnd();

//5
nx=10;ny=15;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+nx4+a,47+2.7+ny4);

		glVertex2f(13+nx+1+nx4+a,28+ny-.5+ny4);
		glVertex2f(15+nx+1+nx4+a,25+ny+2+ny4);

		glVertex2f(25+nx+nx4+a,25+ny+2+ny4);
		glVertex2f(30+nx-2+nx4+a,25+ny+2+ny4);


	glEnd();
nx=12;ny=18;
	glBegin(GL_LINE_STRIP);

		glVertex2f(13+nx+1+nx4+a,28+ny-1+ny4);
		glVertex2f(15+nx+1+nx4+a,25+ny+2+ny4);
		glVertex2f(20+nx+nx4+a,25+ny+2+ny4);
		glVertex2f(25+nx-2+nx4+a,25+ny+2+ny4);


	glEnd();
nx=14;ny=21;
	glBegin(GL_LINE_STRIP);

		glVertex2f(13+nx+1+nx4+a,28+ny-1+ny4);
		glVertex2f(15+nx+1+nx4+a,25+ny+2+ny4);
		glVertex2f(20+nx-2+nx4+a,25+ny+2+ny4);


	glEnd();


char str[]="PRESS n/N TO CONTINUE";
glColor3f(0,0,0);
glRasterPos2f(30,5);
		for(i=0;i<strlen(str);i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
		}

}

void back_ground5()
{
	int i,s_i=0;
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.0,0.0,0.0,0.0);
glColor3f(1.0,1.0,1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,100.0,0.0,100.0);


	 glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);//sky
	//glColor3f(1,1,0.7);
	glVertex2f(0.0, 0.0);
	glColor3f(0.7,0.9,1);
	glVertex2f(0.0,100.0);
	glColor3f(0.7,0.9,1);
	glVertex2f(100.0,100.0);
	glColor3f(0.7,0.9,1);
	glVertex2f(100.0,0.0);
	glEnd();
	if(display_order==5)
	{
	glShadeModel(GL_SMOOTH);
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);//sky
	//glColor3f(1,1,0.7);
	glVertex2f(0.0, 0.0);
	//glColor3f(0.7,0.9,1);
	glVertex2f(0.0,100.0);
	//glColor3f(0.7,0.9,1);
	glVertex2f(100.0,100.0);
	//glColor3f(0.7,0.9,1);
	glVertex2f(100.0,0.0);
	glEnd();
	while(1)
	{
		if(s_i>200)
			break;
		int x,y,z;
		x=rand()%100;
		y=rand()%100;
		z=rand()%100;
		glColor3f(1,1,1);
		glBegin(GL_POINTS);
			glPointSize(7);
			glVertex2f(x,y);
			glPointSize(8);
			glVertex2f(x,z);
		glEnd();
		s_i++;
		}

	}

	float a1=0.9,b1=0.9,c1=1.0, a2=0.9,b2=0.6,c2=0.0 ,a3=0.9,b3=0.6,c3=0 ,a4=0.9,b4=0.6,c4=0;
	glShadeModel(GL_SMOOTH);
	glBegin(GL_POLYGON);
	glColor3f(a1, b1, c1);
	glVertex2f(0.0, 0.0);
	glColor3f(a2, b2, c2);
	glVertex2f(0.0,52.0);
	glColor3f(a3, b3, c3);
	glVertex2f(100.0,48.0);
	glColor3f(a4, b4, c4);
	glVertex2f(100.0,0.0);
	glEnd();


//half tree branch
glBegin(GL_POLYGON);
glColor3f(0.0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd();

//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);
glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);
glEnd();

//grass middle
int gx=20,gy=5;
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);

glVertex2f(0+gx,40+gy);
 glVertex2f(0+gx,47+gy);
 glVertex2f(2.5+gx,46.5+gy);
 glVertex2f(2+gx,48+gy);
 glVertex2f(0+gx,50+gy);
 glVertex2f(2+gx,49.5+gy);
 glVertex2f(5+gx,47+gy);
 glVertex2f(2.5+gx,55+gy);
glVertex2f(7+gx,50+gy);
 glVertex2f(8+gx,53+gy);
 glVertex2f(10+gx,55+gy);
 glVertex2f(10.5+gx,52+gy);
 glVertex2f(10+gx,50+gy);
 glVertex2f(17+gx,53+gy);
 glVertex2f(10+gx,45+gy);
 glVertex2f(20+gx,47+gy);
 glVertex2f(18+gx,45+gy);
 glVertex2f(25+gx,46+gy);
 glVertex2f(20+gx,42+gy);
 glVertex2f(30+gx,40+gy);
glEnd();

//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);
 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);
glEnd();


//gras 1 dwn
glBegin(GL_POLYGON);
glColor3f(0.196078,0.8,0.196078);
glVertex2f(0,27.5);
 glVertex2f(0,32.5);
 glVertex2f(0.3,33.5);
 glVertex2f(2.5,35);
 glVertex2f(2.5,32.5);
 glVertex2f(4.9,35);
 glVertex2f(7.5,37.5);
 glVertex2f(7,35);
 glVertex2f(10,35);
 glVertex2f(7,32.5);
 glVertex2f(15,35);
 glVertex2f(12.5,32);
 glVertex2f(15,30);
 glVertex2f(12.5,27);
 glVertex2f(20,26);
glEnd();


//grass 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);

glVertex2f(0,40);
 glVertex2f(0,47);
 glVertex2f(2.5,46.5);
 glVertex2f(2,48);
 glVertex2f(0,50);
 glVertex2f(2,49.5);
 glVertex2f(5,47);
 glVertex2f(2.5,55);
glVertex2f(7,50);
 glVertex2f(8,53);
 glVertex2f(10,55);
 glVertex2f(10.5,52);
 glVertex2f(10,50);
 glVertex2f(17,53);
 glVertex2f(10,45);
 glVertex2f(20,47);
 glVertex2f(18,45);
 glVertex2f(25,46);
 glVertex2f(20,42);
 glVertex2f(30,40);
glEnd();

//ryt grass
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.3);
glVertex2f(0,7.5);
 glVertex2f(5,13);
 glVertex2f(0,15);
 glVertex2f(5,13);
 glVertex2f(0,20);
 glVertex2f(5,15);
 glVertex2f(10,18);
 glVertex2f(15,25);
 glVertex2f(13,20);
 glVertex2f(17,21);
 glVertex2f(20,23);
 glVertex2f(17,18);
 glVertex2f(15,15);
 glVertex2f(20,17);
 glVertex2f(25,18);
 glVertex2f(20,15);
 glVertex2f(15,10);
 glVertex2f(30,10);
glVertex2f(35,7.5);
glEnd();


//grass 2
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
glVertex2f(0,50);
glVertex2f(0,65);
 glVertex2f(10,67);
 glVertex2f(7,65);
 glVertex2f(17,65);
 glVertex2f(15,64);
 glVertex2f(12,63);
 glVertex2f(15,60);
 glVertex2f(17,57);
 glVertex2f(15,56);
 glVertex2f(20,53);
 glVertex2f(17,54);
 glVertex2f(18,50);
 glVertex2f(16,47);
 glVertex2f(10,45);
 glVertex2f(17,53);
 glVertex2f(10,50);
 glVertex2f(10.5,52);
 glVertex2f(10,55);
 glVertex2f(8,53);
 glVertex2f(7,50);
 glVertex2f(2.5,55);
 glVertex2f(5,47);
 glVertex2f(2,49.5);
 glVertex2f(0,50);
glEnd();


//branch
glBegin(GL_POLYGON);
glColor3f(0.2,0.8,0.0);
glVertex2f(72.5,70);
 glVertex2f(71.5,69);
 glVertex2f(70,68);
 glVertex2f(67.5,68.5);
 glVertex2f(66,70);
 glVertex2f(66.5,71);
 glVertex2f(66,72.7);
 glVertex2f(65,74);
 glVertex2f(63,75);
 glVertex2f(62.5,75.5);
 glVertex2f(62,77.5);
 glVertex2f(61,79);
 glVertex2f(61,80);
 glVertex2f(61.5,81);
 glVertex2f(62,82.5);
 glVertex2f(62.3,84.5);
 glVertex2f(62.4,85);
 glVertex2f(62.5,87.5);
 glVertex2f(63.5,90);
 glVertex2f(65,91);
 glVertex2f(66.5,92);
 glVertex2f(67.5,92.5);
 glVertex2f(69,92);
 glVertex2f(70.5,90.5);
glEnd();
//tree2half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(75,48);
 glVertex2f(75.5,58);
 glVertex2f(75.6,60);
 glVertex2f(75.5,61);
 glVertex2f(75,65);
 glVertex2f(74.5,66);
 glVertex2f(73,69);
 glVertex2f(72.5,70);
 glVertex2f(72.5,77.5);
 glVertex2f(75,80);
 glVertex2f(81,67.5);
 glVertex2f(78,48);
glEnd();
//tree branch 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,75);
glVertex2f(72.5,72.5);
 glVertex2f(71,74.0);
 glVertex2f(70.5,74.5);
 glVertex2f(70,75);
 glVertex2f(69.5,76);
 glVertex2f(69.5,77);

 glVertex2f(70,80);
 glVertex2f(68,81);
 glVertex2f(67.5,82);
 glVertex2f(66,83.5);
 glVertex2f(66.3,84.5);
 glVertex2f(66.5,85);
 glVertex2f(67,87);
 glVertex2f(67.5,87.5);
 glVertex2f(70,90);
 glVertex2f(71,91.5);
 glVertex2f(71.5,92.5);
 glVertex2f(72.5,94);
 glVertex2f(75,95);
 glVertex2f(77.5,96);
 glVertex2f(80,96.5);
 glVertex2f(82.5,96);
 glVertex2f(83,95);
  glVertex2f(83.5,94.5);
  glVertex2f(84.5,92.5);

 glVertex2f(84.7,90);
 glVertex2f(86,91);
 glVertex2f(87.0,91.5);
 glVertex2f(87.5,90);
 glVertex2f(87.5,89);
 glVertex2f(89,89);
 glVertex2f(89.5,87.5);
 glVertex2f(89,85);
glVertex2f(88,82.5);
 glVertex2f(87,82);
 glVertex2f(86,81);
 glVertex2f(85,80);
 glVertex2f(85.5,75.5);
 glVertex2f(84,75);
glVertex2f(82.5,75);
glEnd();


//tree 2
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(77.5,48);
glVertex2f(77,60);
 glVertex2f(77.5,62.5);
 glVertex2f(77,65);
 glVertex2f(77,67.5);
 glVertex2f(76,70);
 glVertex2f(75,75);
 glVertex2f(75,78);
 glVertex2f(80,75);
 glVertex2f(82.5,78);
 glVertex2f(82,75);
 glVertex2f(82,72.5);
 glVertex2f(81.5,70);
 glVertex2f(81,65);
 glVertex2f(81.5,62);
 glVertex2f(84,48);
glEnd();

//sing gras
glBegin(GL_LINES);
glLineWidth(15.0);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,10);
 glVertex2f(72,20);
 glVertex2f(70,17.5);
 glVertex2f(75,10);
 glVertex2f(72.5,25);
 glVertex2f(71,22.5);
 glVertex2f(75,10);
 glVertex2f(73,25);
 glVertex2f(77,22.5);
 glVertex2f(75,10);
 glVertex2f(76,19);
 glVertex2f(75.5,15);
 glVertex2f(75,10);
 glVertex2f(77,15);
 glVertex2f(78,12);
glEnd();


bird(1);
bird(2);
bird(3);
bird(4);
bird(5);
bird(6);

//net
nx4=49.5;ny4=50;
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(20+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(25+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(30+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(35+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(40+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(45+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(50+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(50+nx4+a,30+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(48+nx4+a,35+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(45+nx4+a,40+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(40+nx4+a,45+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(30.5+nx4+a,46+ny4+a);

		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(15+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(13+nx4+a,28+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(14+nx4+a,35+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(16+nx4+a,40+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(18+nx4+a,44+ny4+a);
		glVertex2f(30+nx4+a,50+ny4+a);
		glVertex2f(20+nx4+a,47+ny4+a);

	glEnd();
// horizontal line bottem
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx4+a,47+ny4+a);
		glVertex2f(18+nx4+a,44+ny4+a);
		glVertex2f(16+nx4+a,40+ny4+a);
		glVertex2f(14+nx4+a,35+ny4+a);
		glVertex2f(13+nx4+a,28+ny4+a);
		glVertex2f(15+nx4+a,25+ny4+a);
		glVertex2f(20+nx4+a,25+ny4+a);
		glVertex2f(25+nx4+a,25+ny4+a);
		glVertex2f(30+nx4+a,25+ny4+a);
		glVertex2f(35+nx4+a,25+ny4+a);
		glVertex2f(40+nx4+a,25+ny4+a);
		glVertex2f(45+nx4+a,25+ny4+a);
		glVertex2f(50+nx4+a,25+ny4+a);
		glVertex2f(50+nx4+a,30+ny4+a);
		glVertex2f(48+nx4+a,35+ny4+a);
		glVertex2f(45+nx4+a,40+ny4+a);
		glVertex2f(40+nx4+a,45+ny4+a);
	glEnd();
int nx=2,ny=3,nxr=2;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx+nx4+a,47+.5+ny4+a);
		glVertex2f(18+nx+nx4+a,44+1+ny4+a);
		glVertex2f(16+nx+nx4+a,40+1+ny4+a);
		glVertex2f(14+nx+nx4+a,35+2+ny4+a);
		glVertex2f(13+nx+nx4+a,28+ny+ny4+a);
		glVertex2f(15+nx+nx4+a,25+ny+ny4+a);
		glVertex2f(20+nx+nx4+a,25+ny+ny4+a);
		glVertex2f(25+nx+nx4+a,25+ny+ny4+a);
		glVertex2f(30+nx+nx4+a,25+ny+ny4+a);
		glVertex2f(35+nx+nx4+a,25+ny+ny4+a);
		glVertex2f(40-nx+nx4+a,25+ny+ny4+a);
		glVertex2f(45-nx+nx4+a,25+ny+ny4+a);
		glVertex2f(50-nx+nx4+a,25+ny+ny4+a);
		glVertex2f(50-nx+nx4+a,30+ny+ny4+a);
		glVertex2f(48-nx+nx4+a,35+1+ny4+a);
		glVertex2f(45-nx+nx4+a,40+1+ny4+a);
		glVertex2f(40-nx+nx4+a,45+1+ny4+a);

	glEnd();

//3rd horizontal
	 nx=4;ny=6;;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-1+nx4+a,47+1+ny4+a);
		glVertex2f(18+nx+nx4+a,44+2+ny4+a);
		glVertex2f(16+nx+nx4+a,40+3+ny4+a);
		glVertex2f(14+nx+nx4+a,35+3+ny4+a);
		glVertex2f(13+nx+nx4+a,28+ny+ny4+a);
		glVertex2f(15+nx+nx4+a,25+ny+1+ny4+a);
		glVertex2f(20+nx+nx4+a,25+ny+1+ny4+a);
		glVertex2f(25+nx+nx4+a,25+ny+1+ny4+a);
		glVertex2f(30+nx+nx4+a,25+ny+1+ny4+a);
		glVertex2f(35+nx+nx4+a,25+ny+1+ny4+a);
		glVertex2f(40+nx+nx4+a,25+ny+1+ny4+a);
		glVertex2f(45-nx+nx4+a,25+ny+1+ny4+a);
		glVertex2f(50-nx-1+nx4+a,25+ny+1+ny4+a);
		glVertex2f(50-nx+nx4+a,30+4+ny4+a);
		glVertex2f(48-nx-2+nx4+a,35+5+ny4+a);
		glVertex2f(45-nx-3+nx4+a,40+5+ny4+a);
		glVertex2f(40-nx-3+nx4+a,45+4+ny4+a);

	glEnd();
 nx=6;ny=9;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+nx4+a,47+1+ny4+a);
		glVertex2f(18+nx+nx4+a,44+3+ny4+a);
		glVertex2f(16+nx+nx4+a,40+4+ny4+a);
		glVertex2f(14+nx+nx4+a,35+4+ny4+a);
		glVertex2f(13+nx+nx4+a,28+ny+ny4+a);
		glVertex2f(15+nx+nx4+a,25+ny+2+ny4+a);
		glVertex2f(20+nx+nx4+a,25+ny+2+ny4+a);
		glVertex2f(25+nx+nx4+a,25+ny+2+ny4+a);
		glVertex2f(30+nx+nx4+a,25+ny+2+ny4+a);
		glVertex2f(35+nx+nx4+a,25+ny+2+ny4+a);

		glVertex2f(48-nx+1+nx4+a,35+2+ny4+a);
		glVertex2f(45-nx+nx4+a,40+2+ny4+a);
		glVertex2f(40-nx+1+nx4+a,45+2+ny4+a);

	glEnd();
//4th
nx=8;ny=12;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+nx4+a,47+2+ny4+a);
		glVertex2f(18+nx+nx4+a,44+4+ny4+a);
		glVertex2f(16+nx+1+nx4+a,40+6+ny4+a);
		glVertex2f(14+nx+1+nx4+a,35+8+ny4+a);
		glVertex2f(13+nx+1+nx4+a,28+ny+ny4+a);
		glVertex2f(15+nx+1+nx4+a,25+ny+2+ny4+a);
		glVertex2f(20+nx+nx4+a,25+ny+2+ny4+a);
		glVertex2f(25+nx+nx4+a,25+ny+2+ny4+a);
		glVertex2f(30+nx+1+nx4+a,25+ny+2+ny4+a);

		glVertex2f(48-nx+nx4+a,35+5+ny4+a);
		glVertex2f(45-nx+nx4+a,40+4+ny4+a);
		glVertex2f(40-nx+1+nx4+a,45+2+ny4+a);

	glEnd();

//5
nx=10;ny=15;
	glBegin(GL_LINE_STRIP);
		glVertex2f(20+nx-2+nx4+a,47+2.7+ny4+a);

		glVertex2f(13+nx+1+nx4+a,28+ny-.5+ny4+a);
		glVertex2f(15+nx+1+nx4+a,25+ny+2+ny4+a);

		glVertex2f(25+nx+nx4+a,25+ny+2+ny4+a);
		glVertex2f(30+nx-2+nx4+a,25+ny+2+ny4+a);


	glEnd();
nx=12;ny=18;
	glBegin(GL_LINE_STRIP);

		glVertex2f(13+nx+1+nx4+a,28+ny-1+ny4+a);
		glVertex2f(15+nx+1+nx4+a,25+ny+2+ny4+a);
		glVertex2f(20+nx+nx4+a,25+ny+2+ny4+a);
		glVertex2f(25+nx-2+nx4+a,25+ny+2+ny4+a);


	glEnd();
nx=14;ny=21;
	glBegin(GL_LINE_STRIP);

		glVertex2f(13+nx+1+nx4+a,28+ny-1+ny4+a);
		glVertex2f(15+nx+1+nx4+a,25+ny+2+ny4+a);
		glVertex2f(20+nx-2+nx4+a,25+ny+2+ny4+a);


	glEnd();


char str[]="PRESS m/M TO CONTINUE";
glColor3f(0,0,0);
glRasterPos2f(30,5);
		for(i=0;i<strlen(str);i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
		}
//glutPostRedisplay();
}



#endif // BACKGROUNDS_H_INCLUDED
