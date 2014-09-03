#include<stdio.h>
int main()
{
	int i,a,b,c,count=0,arr[1000],flag=0;
	scanf("%d",&a);
	c=a;
	while(c!=1)
	{
		a=c;
		c=0;
		while(a!=0)
		{
			b=a%10;
			c=c+b*b;
			a=a/10;
		}
		for(i=0;i<count;i++)
		{
			if(arr[i]==c)
			{
				flag = 1;
				c = 1;
				break;
			}
		}
		arr[count] = c;
		count++;
	}
	if(flag==0)
		printf("%d\n",count);
	else printf("-1\n");
	return 0;
}
