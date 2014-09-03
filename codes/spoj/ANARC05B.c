#include<stdio.h>
int main()
{
	int a,b,arr1[20002],arr2[20002],i,c,d,x,j,k;
	long long int res;
	while(1)
	{
		res=0;
		c=0;d=0;j=0;k=0;
		scanf("%d",&a);
		if(a==0)
		{
			break;
		}
		for(i=0;i<a;i++)
			scanf("%d",&arr1[i]);
		scanf("%d",&b);
		for(i=0;i<b;i++)
			scanf("%d",&arr2[i]);

		for(i=b;i<a+b;i++)
		{
			arr2[i]=10001;
		}
		for(i=a;i<a+b;i++)
		{
			arr1[i]=10001;
		}
		while(1)
		{
			if(arr1[j]>arr2[k])
			{
				if(k<b)
					c = c+arr2[k];
				k++;
			}
			else if(arr1[j]<arr2[k])
			{
				if(j<a)
					d = d+arr1[j];
				j++;
			}
			else if(arr1[j]==arr2[k])
			{
				if(c>d)
				{
					res = res+c+arr1[j];
					c=0;
					d=0;
				}
				else
				{
					res = res+d+arr2[k];
					c=0;
					d=0;
				}
				j++;k++;
			}
			if(j>=a && k>=b)
			{
				if(c>d)
				{
					res = res+c;
					c=0;
					d=0;
				}
				else
				{
					res = res+d;
					c=0;
					d=0;
				}
				j++;k++;
				break;
			}
		}
		printf("%lld\n",res);
	}
	return 0;
}
