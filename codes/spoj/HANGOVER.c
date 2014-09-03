#include<stdio.h>
int main()
{
	float a,b,i;
	int c;
	scanf("%f",&a);
	while(a!=0.00)
	{
		c=0;
		i=2;
		b=0;
		while(1)
		{
			c++;
			b = b + 1/i;
			if(b>=a)
			{
				printf("%d card(s)\n",c);
				break;
			}
			i++;
		}
		scanf("%f",&a);
	}
	return 0;
}
