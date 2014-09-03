#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int i,n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	sort(a,a+n);
	sort(b,b+m);

	int flag=0;
	int v=a[n-1];
	if(b[0]<=v)
		printf("-1\n");
	else
	{
		for(i=0;i<n;i++)
		{
			if((a[i]*2)<=v)	
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("%d\n",v);
		else
			printf("%d\n",-1);
	}
	return 0;
}
