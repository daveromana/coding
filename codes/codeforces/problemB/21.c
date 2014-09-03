#include<stdio.h>
#include<math.h>
int main()
{
	int m,r;
	long i,u,v;
	double ans,ans1;
	scanf("%d %d",&m,&r);
	ans  = 2.0 + (1.0*(1.0*(m-1)/(1.0*2))*1.0*sqrt(2));
	ans1 = r*ans;
/*	for(i=0;i<m*m;i++)
	{
		v = (i/m) + 1;
		u = m+1+(i%m);
		if((u<=m && v<=m) || (u>m && v>m))
		{
			ans = 1.0*(v-u);
			if(ans<0)
				ans = -1.0*ans;
			ans1 = ans1+(ans*r);
		//	printf("%lf\n",ans*2.0*r);
		}
		else if(u<=m && v>m)
		{
			if((v-m)==u)
			{
				ans = 2.0;
			}
			else
			{
				ans = 1.0*(v-u-m);
				if(ans<0)
					ans = -1.0*ans;
				ans = (2.0*ans) + sqrt(2);
			}
			ans1 = ans1+(ans*r);
		//	printf("%lf\n",ans*r);
		}
		else if(v<=m && u>m)
		{
			if((u-m)==v)
			{
				ans = 2.0;
			}
			else
			{
				ans = 1.0*(u-v-m);
				if(ans<0)
					ans = -1.0*ans;
				ans = (2.0*ans) + sqrt(2);
			}
			ans1 = ans1+(ans*r);
		//	printf("%lf\n",ans*r);
		}
	}*/
	printf("%lf\n",ans1);
	return 0;
}
