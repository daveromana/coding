#include<stdio.h>
int main()
{
	int a,b,c,temp,b1,c1;
	scanf("%d%d%d",&a,&b,&c);
	while(a!=0 && b!=0 && c!=0)
	{
		if(a>b && a>c)
		{
			temp=a;
			b1=b;
			c1=c;
		}
		else if(b>a && b>c)
		{
			temp=b;
			b1=a;
			c1=c;
		}
		else if(c>a && c>b)
		{
			temp=c;
			b1=a;
			c1=b;
		}
		if((temp*temp)==((b1*b1)+(c1*c1)))
			printf("right\n");
		else printf("wrong\n");
		scanf("%d%d%d",&a,&b,&c);
	}
	return 0;
}
