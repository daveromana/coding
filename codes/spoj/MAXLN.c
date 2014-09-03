#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	long long int a;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a);
		printf("Case %d: %lld.25\n",i,4*a*a);
	}
	return 0;
}
