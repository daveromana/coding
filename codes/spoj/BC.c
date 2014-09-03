#include<stdio.h>
int main()
{
	long long int n,i,a,b,c,d,count;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		count = 0;
		scanf("%lld %lld %lld",&a,&b,&c);
		d = a*b*c;
		printf("Case #%lld: %lld ",i+1,d-1);
		while(a!=1 || b!=1 || c!=1)
		{
			if(a!=1)
			{
				if(a%2!=0)
					a+=1;
				a/=2;
				count++;
			}
			if(b!=1)
			{
				if(b%2!=0)
					b+=1;
				b/=2;
				count++;
			}
			if(c!=1)
			{
				if(c%2!=0)
					c+=1;
				c/=2;
				count++;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}
