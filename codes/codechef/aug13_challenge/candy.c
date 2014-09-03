#include<stdio.h>
int main()
{
	int a,b;
	long long int n,k,s;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%lld %lld",&n,&k);
		if(k!=0)
		{
			s = n/k;
		}
		else
		{
			s = 0;
		}
		printf("%lld %lld\n",s,n-(s*k));
	}
	return 0;
}
