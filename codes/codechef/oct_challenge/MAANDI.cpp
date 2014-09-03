#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
	int T,n,i,j,a,arr[100000],flag;
	long long int count=0;
	scanf("%d",&T);
	while(T--)
	{
		count = 0;
		flag=0;
		j=0;
		scanf("%d",&n);
		a=sqrt(n);
		for(i=1;i<=a;i++)
		{
			if(n%i==0)
			{
				arr[j]=i;
				j++;
				arr[j]=n/i;
				j++;
			}
		}
		for(i=0;i<j;i++)
		{
			while(arr[i]!=0)
			{
				if(arr[i]%10==4 || arr[i]%10==7)
				{
					count++;
					break;
				}
				arr[i]/=10;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}
