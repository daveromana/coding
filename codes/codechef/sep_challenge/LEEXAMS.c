#include<stdio.h>
#include<math.h>
int a[50],b[50],p[50],m;
int check[17],selected[17],ch[17];
double ans;
void func(int c);

int main()
{
	int z,t,n,i;
	scanf("%d",&t);
	for(z=0;z<t;z++)
	{
		ans=0.0;
		scanf("%d",&n);
		m=n;
		for(i=0;i<n;i++)
		{
			scanf("%d %d %d",&p[i],&a[i],&b[i]);
		}
		if(n>16)
		{
			printf("0.000000000\n");
		}
		else
		{
			func(0);
			printf("%.10lf\n",ans);
		}

	}
	return 0;
}

void func(int c)
{
	int i,j;
	if(c==m)
	{
		int flag=0;
		for(i=0;i<m;i++)
		{
			for(j=i+1;j<m;j++)
			{
				if(check[i]==check[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}

		double ans1=1.0;
		if(flag==0)
		{
			for(i=0;i<m;i++)
			{
				if(selected[i]==0)
				{
					ans1=ans1*p[i]/100.0;
				}
				else
				{
					ans1=ans1*(100-p[i])/100.0;
				}
			}
			ans=ans+ans1;
		}
		return;
	}
	check[c]=a[c];
	selected[c]=0;
	func(c+1);
	check[c]=b[c];
	selected[c]=1;
	func(c+1);
	return;
}
