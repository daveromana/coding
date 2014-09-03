#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int T,z,n,*arr,i,j;
	long long int count,ans;
	scanf("%d",&T);
	for(z=0;z<T;z++)
	{
		count = 1;
		ans=0;
		scanf("%d",&n);
		arr=(int*)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+n);
		for(i=0;i<n;i++)
		{
			if(arr[i+1]==arr[i])
			{
				count++;
				continue;
			}
			else
			{
				ans=ans+((count*(count+1))/2);
				count = 1;
			}
		}
		printf("%lld\n",ans);
		free(arr);
	}
	return 0;
}
