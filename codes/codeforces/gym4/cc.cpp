#include<stdio.h>
#include<math.h>
#include<iostream>

#define PI 3.14159265359
using namespace std;
int main()
{
	int t,i;
	scanf("%d",&t);
	double x1,y1,x2,y2,x3,y3,c1,c2,angle1,angle2,a1,a2;
	for(i=0;i<t;i++)
	{
		scanf("%lf %lf %lf",&x1,&y1,&angle1);
		scanf("%lf%lf%lf",&x2,&y2,&angle2);
		a1=angle1;a2=angle2;
		if(angle1<=180)
			angle1=90-angle1;
		else if(angle1>180)
			angle1=270-angle1;

		if(angle2<=180)
			angle2=90-angle2;
		else if(angle2>180)
			angle2=270-angle2;

		angle1=angle1*(PI/180.0);
		c1=(y1)-(x1*tan(angle1));

		angle2 = angle2*(PI/180.0);
		c2=(y2)-(x2*tan(angle2));

		x3=(-c1+c2)/(tan(angle1)-tan(angle2));
		y3=(c2*tan(angle1) - c1*(tan(angle2))) /(tan(angle1)-tan(angle2));
		printf("%.4lf %.4lf\n",x3,y3);

	}
}
