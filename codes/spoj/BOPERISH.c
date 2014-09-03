#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*arr,i,j,c1,c2;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		arr = (int*)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<=n;i++)
		{
			c1=0;c2=0;
			for(j=0;j<n;j++)
			{
				if(arr[j]>i)
				{
					c1++;
				}
				if(arr[j]>=i)
				{
					c2++;
				}
			}
			if(c2==i)
			{
				printf("%d\n",i);
				break;
			}
			else if(c2>i && c1<=i)
			{
				printf("%d\n",i);
				break;
			}
		}
		free(arr);
	}
	return 0;
}
