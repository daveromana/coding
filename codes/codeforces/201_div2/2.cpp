#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==i)
			count++;
	}
	int flag;
	for(i=0;i<n;i++)
	{
		flag=0;
		if(a[i]!=i)
		{
			if(a[a[i]]==i)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
		count+=2;
	else if(flag==0 && count!=n)
		count++;
	printf("%d\n",count);
	return 0;
}
