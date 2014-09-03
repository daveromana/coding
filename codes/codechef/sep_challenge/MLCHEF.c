#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	long long int H[n+1];
	int S[n+1];
	for(i=1;i<=n;i++)
	{
		scanf("%lld %d",&H[i],&S[i]);
	}
	char **I;
	I=(char**)malloc(sizeof(char*)*(n+1));
	for(i=0;i<n+1;i++)
	{
		I[i]=(char*)malloc(sizeof(char)*n+1);
		for(j=0;j<n+1;j++)
		{
			I[i][j]='0';
		}
	}
	for(i=1;i<=n;i++)
	{
		I[S[i]][i]='1';
	}
	for(i=1;i<=n;i++)
	{
		if(I[S[i]][i]=='1')
		{
			for(j=1;j<=n;j++)
			{
				if(I[i][j]=='1')
				{
					I[S[i]][j]='1';
				}
			}
		}
	}
	int q,a,x,type,count=0;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		count=0;
		scanf("%d",&type);
		if(type==1)
		{
			scanf("%d %d",&a,&x);
			for(j=1;j<=n;j++)
			{
				if(I[a][j]=='1')
				{
					if(H[j]>0)
					{
						H[j]=H[j]-x;
					}
				}
			}
		}
		else if(type==2)
		{
			scanf("%d",&a);
			for(j=1;j<=n;j++)
			{
				if(I[a][j]=='1')
				{
					if(H[j]>0)
						count++;
				}
			}
			printf("%d\n",count);
		}
	}
	free(I);
	return 0;
}
