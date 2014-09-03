#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[105],b[105];
	int a1[105],b1[105],c1[105],d1[105],e1[105],i,y,z,p,q,r,flag,flag1,m;
	for(m=0;m<10;m++)
	{
		for(i=0;i<105;i++)
		{
			a1[i] = 0;
			b1[i] = 0;
			c1[i] = 0;
			d1[i] = 0;
			e1[i] = 0;
		}
		e1[104] = 1;
		scanf("%s %s",a,b);
		y = strlen(a);
		p = strlen(a);
		z = strlen(b);
		q = strlen(b);
		flag = 0;
		flag1 = 0;
		r = 104;
		for(i=104;i>=(105-strlen(a));i--)
		{
			a1[i] = a[y-1] - 48;
			y--;
		}
		for(i=104;i>=(105-strlen(b));i--)
		{
			b1[i] = b[z-1] - 48;
			z--;
		}
		//if(a1[104]%2!=0 && b1[104]%2==0)
		//	a1[104]-=1;
		//if(b1[104]%2!=0 && a1[104]%2==0)
		//	b1[104]+=1;
		if(p<q)
			p=q;
		for(i=104;i>=104-p;i--)
		{
			c1[i] = (c1[i] + (a1[i] + b1[i]))%10;
			c1[i-1] = (a1[i] + b1[i])/10;
		}
		for(i=0;i<105;i++)
		{
			if(c1[i]%2 != 0)
			{
				c1[i+1] = c1[i+1] + 10;
			}
			c1[i]/=2;
		}
		for(i=104;i>=0;i--)
		{
			if(a1[i]>=c1[i])
			{
				d1[i] = a1[i] - c1[i];
			}
			else
			{
				d1[i] = 10 + a1[i] - c1[i];
				a1[i-1] = a1[i-1] - 1;
			}
		}
		if((a1[104]+b1[104])%2!=0)
		{
			if(d1[104]>=1)
			{
				d1[104] = d1[104]-1;
			}
			else
			{
				for(i=104;i>=0;i--)
				{
					if(d1[i]>=e1[i])
					{
						d1[i] = d1[i] - e1[i];
					}
					else
					{
						d1[i] = 10 + d1[i] - e1[i];
						d1[i-1] = d1[i-1] - 1;
					}
				}
			}
		}
		for(i=0;i<105;i++)
		{
			if(flag == 1)
				printf("%d",c1[i]);
			if(c1[i] != 0)
			{
				if(flag == 0)
				{
					flag = 1;
					printf("%d",c1[i]);
				}
			}
		}
		printf("\n");
		for(i=0;i<105;i++)
		{
			if(flag1 == 1)
				printf("%d",d1[i]);
			if(d1[i] != 0)
			{
				if(flag1 == 0)
				{
					flag1 = 1;
					printf("%d",d1[i]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
