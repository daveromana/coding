#include<stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	while(a!=-1)
	{
		if(a<b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		if(a%(b+1)==0)
			printf("%d\n",a/(b+1));
		else
			printf("%d\n",a/(b+1)+1);
		scanf("%d%d",&a,&b);
	}
	return 0;
}
