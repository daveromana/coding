#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,q,i,l,r,k,j;
	scanf("%d %d",&n,&q);
	int a[n],**b;
	b = (int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
	{
		b[i] = (int*)malloc(sizeof(int)*(n+1));
		for(j=0;j<=n;j++)
		{
			b[i][j]=0;
		}
	}
	int c = sqrt(n/2);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=1;j<=c+1;j++)
		{
			if(a[i]%j==0)
			{
				b[i][j]++;
				b[i][(a[i]/j)]++;
				if(i!=0)
				{
					b[i][j]=b[i-1][j]+b[i][j];
					b[i][(a[i]/j)]=b[i-1][(a[i]/j)]+b[i][(a[i]/j)];
				}
			}
		}
	}
	for(i=0;i<q;i++)
	{
		scanf("%d %d %d",&l,&r,&k);
		printf("%d\n",b[r-1][k]-b[l-1][k]);
	}

	return 0;
}
