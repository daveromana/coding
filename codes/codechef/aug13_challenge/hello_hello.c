#include<stdio.h>
int main()
{
	int a,b,i,u,n,m,c,count,res;
	float d,r,d1,d2;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%f %d %d",&d,&u,&n);
		d1 = d*(1.0*u);
		count = 0;
		for(i=1;i<=n;i++)
		{
			scanf("%d %f %d",&m,&r,&c);
			d2 = ((1.0*m)*r*(1.0*u) + (1.0*c))/(1.0*m);
			if(d2<d1)
			{
				d1 = d2;
				res = i;
				count++;
			}
		}
		if(count==0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n",res);
		}
	}
	return 0;
}
