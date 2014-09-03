#include<stdio.h>
int dist(int,int,int,int);
int main()
{
	int a,b,i,x1,y1,x2,y2,x3,y3,p,q,r,count;
	scanf("%d",&a);
	count = 0;
	for(b=0;b<a;b++)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		p = dist(x1,y1,x2,y2);
		q = dist(x1,y1,x3,y3);
		r = dist(x3,y3,x2,y2);
		if((p+q)==r || (p+r)==q || (q+r)==p)
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
int dist(int x1,int y1,int x2,int y2)
{
	int a,b,c;
	a = (x2-x1)*(x2-x1);
	b = (y2-y1)*(y2-y1);
	c = a+b;
	return c;
}
