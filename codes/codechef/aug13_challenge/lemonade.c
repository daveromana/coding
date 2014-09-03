#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,n,m,*p,i,z,j,c,*q,k,temp,res;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		res = 0;
		scanf("%d %d",&n,&m);
		p = (int*)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
			p[i]=0;
		for(i=0;i<m;i++)
		{
			scanf("%d",&z);
			p[z]++;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&c);
			q = (int*)malloc(sizeof(int)*c);
			for(j=0;j<c;j++)
			{
				scanf("%d",&q[j]);
			}
			for(j=0;j<c;j++)
			{
				for(k=j;k<c;k++)
				{
					if(q[k]>q[j])
					{
						temp = q[j];
						q[j] = q[k];
						q[k] = temp;
					}
				}
			}
			if(p[i]>c)
			{
				for(j=0;j<c;j++)
				{
					res = res + q[j];
				}
			}
			else
			{
				for(j=0;j<p[i];j++)
				{
					res = res + q[j];
				}
			}
			free(q);
		}
		printf("%d\n",res);
		free(p);
	}
	return 0;
}
