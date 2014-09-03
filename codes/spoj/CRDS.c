#include<stdio.h>
int main()
{
	long long int a,i,b,n,j;
	scanf("%lld",&n);
	for(j=0;j<n;j++)
	{
		scanf("%lld",&a);
		b = (a*(a+1) + (a*(a-1))/2)%1000007;
		printf("%lld\n",b);
	}
	return 0;
}
