#include<stdio.h>
#include<math.h>
#include<iostream>

#define PI 3.14159265
using namespace std;
int main()
{
	int t,i;
	scanf("%d",&t);
	double x1,y1,x2,y2,x3,y3,c1,c2,angle1,angle2,mm,mm1;
	for(i=0;i<t;i++)
	{
		scanf("%lf %lf %lf",&x1,&y1,&angle1);
		scanf("%lf %lf %lf",&x2,&y2,&angle2);
		if(angle1>=0 && angle1<90)
		{
			angle1=angle1;
		}
		else if(angle1==90)
		{
			c2=y1;
		}
		else if(angle1>90 && angle1<=180)
		{
			angle1=180-angle1;
		}
		else if(angle1>180 && angle1<270)
		{
			angle1=angle1-180;
		}
		else if(angle1==270)
		{
			c2=y1;
		}
		else if(angle1>270 && angle1<=360)
		{
			angle1=360-angle1;
		}
		if(angle1==90 || angle1==270){}
		else
		{
			angle1=angle1*(PI/180.0);
			mm = tan(angle1);
		}

		if(angle2>=0 && angle2<90)
		{
			angle2=angle2;
		}
		else if(angle2==90)
		{
			c2=y2;
		}
		else if(angle2>90 && angle2<=180)
		{
			angle2=180-angle2;
		}
		else if(angle2>180 && angle2<270)
		{
			angle2=angle2-180;
		}
		else if(angle2==270)
		{
			c2=y2;
		}
		else if(angle2>270 && angle2<=360)
		{
			angle2=360-angle2;
		}
		if(angle2==90 || angle2==270){}
		else
		{
			angle2=angle2*(PI/180.0);
			mm1 = tan(angle2);
		}
		if(angle1!=90 && angle1!=270 && angle2!=90 && angle2!=270)
		{
			x3 = (((y2-y1)*mm*mm1)+(x1*mm1)-(x2*mm))/(mm1-mm);
			y3 = (((x3-x1)/mm)+y1);
		}
		else
		{
			if( (angle1==90 || angle1==270) && (angle2==90 || angle2==270) )
			{
			}
			else if( (angle1==90 || angle1==270) && (angle2!=90 && angle2!=270) )
			{
				y3=y1;
				x3=(mm1*(y3-y2))+x2;
			}
			else if( (angle1!=90 && angle1!=270) && (angle2==90 || angle2==270) )
			{
				y3=y2;
				x3=(mm*(y3-y1))+x1;
			}
		}
		/*if(angle1<=180)
			angle1=90-angle1;
		else if(angle1>180)
			angle1=270-angle1;

		if(angle2<=180)
			angle2=90-angle2;
		else if(angle2>180)
			angle2=270-angle2;

		if(angle1==90 || angle1== -90 || angle1==270 || angle1==-270)
			c1=x1;
		else
	 		c1=(y1)-(x1*tan(angle1));

		if(angle2==90 || angle2== -90 || angle2==270 || angle2==-270)
			c2=x2;
		else
	 		c2=(y2)-(x2*tan(angle2));


		x3=(-c1+c2)/(tan(angle1)-tan(angle2));
		y3=(c2*tan(angle1) - c1*(tan(angle2))) /(tan(angle1)-tan(angle2));*/
		printf("%lf %lf\n",x3,y3);

	}
}
