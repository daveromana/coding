#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(const unsigned long long a,const unsigned long long b)
{
	return a>b;
}
bool cmp1(const unsigned long long a,const unsigned long long b)
{
	return a<b;
}
int main()
{
	unsigned long long n;
	scanf("%llu",&n);
	while(n!=0)
	{
		unsigned long long x[n],y[n];
		for(int i=0;i<n;i++)
			scanf("%llu",&x[i]);
		for(int i=0;i<n;i++)
			scanf("%llu",&y[i]);
		sort(x,x+n,cmp1);
		sort(y,y+n,cmp);
		unsigned long long sum=0;
		for(int i=0;i<n;i++)
			sum+=x[i]*y[i];
		printf("%llu\n",sum);
		scanf("%llu",&n);
	}
	return 0;
}
