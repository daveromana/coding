#include<stdio.h>
#include<math.h>

long long int func(long long int a,long long int b)
{
	if(a%b==0)
		return b;
	func(b,a%b);
}


int main()
{
	long long int t,n,i,j,a,count,b,k,aa;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		count=0;
		scanf("%lld",&n);
		a=n;
		k=1;
		count = n;
		aa=n-1;
		for(j=2;j<=sqrt(n);j++)
		{
			b=n/j;
			count = count+b+((a-b)*k);
			aa--;
			aa=aa-(a-b);
			k++;
			a=b;
		}
		long long int aaa=sqrt(n);
		count = count + aa*aaa;
		aa=func(count,n*n);
		printf("%lld/%lld\n",count/aa,n*n/aa);
	}

	return 0;
}
