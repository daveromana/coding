#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

double Distance(double dX0, double dY0, double dX1, double dY1)
{
	return sqrt((dX1 - dX0)*(dX1 - dX0) + (dY1 - dY0)*(dY1 - dY0));
}

int main()
{
	int n,i,min,max;
	int x1,x2,x3,y1,y2,y3;
	double min_area=1000000000.0,max_area=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
		double a = Distance(x1,y1,x2,y2);
		double b = Distance(x2,y2,x3,y3);
		double c = Distance(x3,y3,x1,y1);

		double s,area;
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));

		if(area<=min_area)
		{
			min_area=area;
			min=i;
		}
		if(area>=max_area)
		{
			max_area=area;
			max=i;
		}
	}
	printf("%d %d\n",min+1,max+1);
	return 0;
}
