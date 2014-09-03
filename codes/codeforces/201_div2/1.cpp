#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	sort(a,a+n);
	swap(a[0],a[n-1]);
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		{
			printf("%d\n",a[i]);
		}
		else
		{
			printf("%d ",a[i]);
		}
	}

	return 0;
}
