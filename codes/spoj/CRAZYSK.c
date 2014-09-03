#include<stdio.h>
int main()
{
	int a,b;
	long long int n,x,ans;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%lld %lld",&n,&x);
		if((n)%(x-1)!=0)
		{
			ans = (n)/(x-1);
			ans = ans + n;
		}
		else
		{
			ans = (n)/(x-1);
			ans = ans + n - 1;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
