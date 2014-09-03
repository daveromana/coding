#include<stdio.h>
int main()
{
	long int a,b,c,d,e;
	scanf("%ld %ld",&a,&b);
	c=a;
	d=b;
	if(a<0)
	{
		c = -1*a;
	}
	if(b<0)
	{
		d = -1*b;
	}
	e = c+d;
	if(a>=0 && b>=0)
	{
		printf("0 %ld %ld 0\n",e,e);
	}
	else if(a>=0 && b<=0)
	{
		printf("0 %ld %ld 0\n",-e,e);
	}
	else if(a<=0 && b>=0)
	{
		printf("%ld 0 0 %ld\n",-e,e);
	}
	else if(a<=0 && b<=0)
	{
		printf("%ld 0 0 %ld\n",-e,-e);
	}
	return 0;
}
