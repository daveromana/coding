#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[20010],b[20010];
	int a1[20010],b1[20010],c1[20010],d1[20010],i,y,z,j,k,s,flag,m,n;
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%s %s",a,b);
		y = strlen(a);
		z = strlen(b);
		flag = 0;
		for(i=0;i<20010;i++)
		{
			a1[i] = 0;
			b1[i] = 0;
			d1[i] = 0;
			c1[i] = 0;
		}
		for(i=20009;i>=(20010-strlen(a));i--)
		{
			a1[i] = a[y-1] - 48;
			y--;
		}
		for(i=20009;i>=(20010-strlen(b));i--)
		{
			b1[i] = b[z-1] - 48;
			z--;
		}
		k = 20009; s = 0;
		if(strlen(a)<strlen(b))
		{
			for(i=20009;i>=(20010-strlen(a));i--)
			{
				for(j=20009;j>=(20010-strlen(b));j--)
				{
					c1[j] = c1[j] + (a1[i]*b1[j])%10;
					c1[j-1] = (a1[i]*b1[j])/10;
				}
				for(j=k;j>=k-strlen(b);j--)
				{
					d1[j-1] = d1[j-1] + (d1[j] + c1[j+s])/10;
					d1[j] = (d1[j] + c1[j+s])%10;
				}
				for(j=20009;j>=(20010-strlen(b));j--)
				{
					c1[j] = 0;
				}
				k--;
				s++;
			}
		}
		else
		{
			for(i=20009;i>=(20010-strlen(b));i--)
			{
				for(j=20009;j>=(20010-strlen(a));j--)
				{
					c1[j] = c1[j] + (b1[i]*a1[j])%10;
					c1[j-1] = (b1[i]*a1[j])/10;
				}
				for(j=k;j>=k-strlen(a);j--)
				{
					d1[j-1] = d1[j-1] + (d1[j] + c1[j+s])/10;
					d1[j] = (d1[j] + c1[j+s])%10;
				}
				for(j=20009;j>=(20010-strlen(a));j--)
				{
					c1[j] = 0;
				}
				k--;
				s++;
			}
		}
		for(i=0;i<20010;i++)
		{
			if(flag == 1)
				printf("%d",d1[i]);
			if(d1[i] != 0)
			{
				if(flag == 0)
				{
					flag = 1;
					printf("%d",d1[i]);
				}
			}
		}
		if(flag == 0)
			printf("0");
		printf("\n");
	}
	return 0;
}
