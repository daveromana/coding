#include<stdio.h>
int main()
{
	int a,b;
	long long int n,k,ans,i;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		i=1;
		ans = 1;
		scanf("%lld %lld",&n,&k);
		if(k>(n/2))
		{
			for(i=1;i<(n-k);i++)
			{
				ans = ans*(k+i);
			}
			for(i=1;i<(n-k);i++)
			{
				ans = ans/(n-k-i);
			}
		}
		else
		{
			for(i=1;i<k;i++)
			{
				ans = ans*(n-k+i);
			}
			for(i=1;i<k;i++)
			{
				ans = ans/(k-i);
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
