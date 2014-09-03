#include<stdio.h>
int main()
{
	int i,a;
	int n=1000000;
	printf("%d\n",n);
	for(i=1;i<=n;i++)
	{
		a=i;
		if(i==n)
			printf("%d",a%10000);
		else
			printf("%d ",a%10000);
	}
	return 0;
}
