#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int v;
	scanf("%d",&v);
	int a[10],b[10],i,min=1000000,s,sec_min,s1;
	for(i=1;i<=9;i++)
	{
		scanf("%d",&a[i]);
		b[i-1]=a[i];
	}
	for(i=1;i<=9;i++)
	{
		if(min>=a[i])
		{
			min=a[i];
			s=i;
		}
	}
	if(v%min==0)
	{
		for(i=0;i<(v/min);i++)
			printf("%d",s);
	}
	else
	{
		sort(b,b+9);
		sec_min = b[1];
		for(i=0;i<9;i++)
		{
			if(b[i]==sec_min)
				s1=i+1;
		}
		if(s1>s)
		{
			printf("%d",s1);
			for(i=0;i<(v/min)-1;i++)
			{
				printf("%d",s);
			}
		}
		else
		{
			for(i=0;i<(v/min)-1;i++)
			{
				printf("%d",s);
			}
			printf("%d",s1);
		}
	}
	printf("\n");
	return 0;
}
