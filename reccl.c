#include<stdlib.h>
#include<math.h>
#define CX 320
#define CY 200
#define L0 100
#define SX CX
#define SY CY+L0
int dq=30;
double dl=0.68;

main(int argc,char *argv[])
{
	if(argc>1)dq=atoi(argv[1]);
	if(argc>2)dl=atof(argv[2]);
	gint();
	tree((double)L0,90);
}

tree(double d,int q)
{
	double p=q*3.14159/180;
	int dx=cos(p)*d,dy=sin(p)*d;
	if(d<=2)return;
	move(+dx,+dy,1);
	tree(d*dl,q+dq);
	tree(d*dl,q-dq);
	move(-dx,-dy,0);
}
move(int dx,int dy,int on)
{
	static int x=0,y=0;
	static double x0=SX,y0=SY;
	x+=dx;
	y-=dy;
	if(on)gline(x0,y0,x+SX,y+SY);
	x0=x+SX;
	y0=y+SY;
}
