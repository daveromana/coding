#include<stdio.h>
int main()
{
	long long int a,b,n,i,m,sum;
	char aa[1000];
	scanf("%lld",&a);
	for(b=0;b<a;b++)
	{
		sum = 0;
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%s %lld",aa,&m);
		//	printf("%s %lld\n",aa,m);
			if(m!=i)
			{
				if(m>i)
				{
					sum = sum + m-i;
				}
				else
				{
					sum = sum + i-m;
				}
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
