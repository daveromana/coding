#include<stdio.h>
int main()
{
	int a,b;
	long long int n,x,y,z,x1,y1,z1,sumx,sumy,sumz;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%lld",&n);
		if(n>3)
		{
			if((n-1)%3==0)
			{
				x=n-1;
			}
			else if((n-2)%3==0)
			{
				x=n-2;
			}
			else if((n-3)%3==0)
			{
				x=n-3;
			}
			x1 = ((x-3)/3)+1;
			sumx = (x1*(3+x))/2;
		}
		else
		{
			sumx=0;
		}
		if(n>5)
		{
			if((n-1)%5==0)
			{
				y=n-1;
			}
			else if((n-2)%5==0)
			{
				y=n-2;
			}
			else if((n-3)%5==0)
			{
				y=n-3;
			}
			else if((n-4)%5==0)
			{
				y=n-4;
			}
			else if((n-5)%5==0)
			{
				y=n-5;
			}
			y1 = ((y-5)/5)+1;
			sumy = (y1*(5+y))/2;
		}
		else
		{
			sumy=0;
		}
		if(n>15)
		{
			if((n-1)%15==0)
			{
				z=n-1;
			}
			else if((n-2)%15==0)
			{
				z=n-2;
			}
			else if((n-3)%15==0)
			{
				z=n-3;
			}
			else if((n-4)%15==0)
			{
				z=n-4;
			}
			else if((n-5)%15==0)
			{
				z=n-5;
			}
			else if((n-6)%15==0)
			{
				z=n-6;
			}
			else if((n-7)%15==0)
			{
				z=n-7;
			}
			else if((n-8)%15==0)
			{
				z=n-8;
			}
			else if((n-9)%15==0)
			{
				z=n-9;
			}
			else if((n-10)%15==0)
			{
				z=n-10;
			}
			else if((n-11)%15==0)
			{
				z=n-11;
			}
			else if((n-12)%15==0)
			{
				z=n-12;
			}
			else if((n-13)%15==0)
			{
				z=n-13;
			}
			else if((n-14)%15==0)
			{
				z=n-14;
			}
			else if((n-15)%15==0)
			{
				z=n-15;
			}
			z1 = ((z-15)/15)+1;
			sumz = (z1*(15+z))/2;
		}
		else
		{
			sumz = 0;
		}
		printf("%lld\n",sumx+sumy-sumz);
	}
	return 0;
}
