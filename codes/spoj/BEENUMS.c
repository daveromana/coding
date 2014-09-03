#include<stdio.h>
int main()
{
	long int a,b,i;
	scanf("%ld",&a);
	while(a!=-1)
	{
		if(a==1)
			printf("Y\n");
		b=1;
		i=1;
		while(b<a)
		{
			b = b + 6*i;
			i++;
			if(b==a)
				printf("Y\n");
		}
		if(b!=a)
			printf("N\n");
		scanf("%ld",&a);
	}
	return 0;
}
