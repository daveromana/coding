#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,d,w,i;
	while (1)
	{
		scanf("%lld %lld",&n,&d);
		if (n == 0 && d == 0)
			break;
		w = 0;
		for (i=1;i<n;i++)
		{
			w = (w + d)%(i+1);
		}
		w+=1;
		printf("%lld %lld %lld\n", n,d,w);
	}
	return 0;
}
