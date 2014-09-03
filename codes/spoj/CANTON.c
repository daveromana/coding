#include<stdio.h>
int main()
{
	long int i,sum,n,j,a,x,y;
	scanf("%ld",&n);
	for(j=0;j<n;j++)
	{
		sum = 0;
		scanf("%ld",&a);
		for(i=1;sum<a;i++)
			sum += i;
		if(i&1)
		{
			x = (a+i)-(sum+1);
			y = i-x;
		}
		else
		{
			y = (a+i)-(sum+1);
			x = i-y;
		}
		printf("TERM %ld IS %ld/%ld\n",a,x,y);
	}
	return 0;
}
