#include<stdio.h>
#include<vector>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	vector <long long> aa;
	int T;
	long long int z,m,n,i,sq,a,*arr,count;
	scanf("%d",&T);
	while(T--)
	{
		count=0;
		scanf("%lld %lld %lld",&z,&m,&n);
		sq=sqrt(z);
		for(i=1;i<=sq;i++)
		{
			if(z%i==0)
			{
				aa.push_back(i);
				if(sq*sq==z && i==sq)
				{
				}
				else
				{
					aa.push_back(z/i);
				}
			}
		}
		a=aa.size();
		arr=(long long int*)malloc(sizeof(long long int)*a);
		for(i=0;i<a;i++)
			arr[i]=aa[i];
		aa.erase(aa.begin(),aa.end());
		sort(arr,arr+a);
		
		for(i=0;i<a;i++)
		{
			if(arr[i]<=m && (z/arr[i])<=n)
			{
				count++;
			}
		}
		printf("%lld\n",count);
		free(arr);
	}
	return 0;
}
