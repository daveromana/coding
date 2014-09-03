#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,q,i,l,r,k,j;
	scanf("%d %d",&n,&q);
	int a[n],b[n][50001]={{0}};
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
		for(j=1;j<=n/2;j++)
		{
			if(a[i]%j==0)
			{
				b[i][j]++;
				b[i][j]=b[i-1][j]+b[i][j];
			}
		}
	}
	for(i=0;i<q;i++)
	{
		scanf("%d %d %d",l,r,k);
		printf("%d\n",b[r][k]-b[l][k]);
	}

	return 0;
}
