#include<stdio.h>
int main()
{
	int n,k,a,i,j,b;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		j = 0;
		scanf("%d",&a);
		for(i=1;i*i<=a;i++)
		{
			if(a%i == 0 && i*i != a)
				j = j + i + a/i;
			if(i*i == a)
				b = i;
		}
		if(a==1)
			printf("0\n");
		else if((b*b) == a)
			printf("%d\n",j+b-a);
		else
			printf("%d\n",j-a);
	}
	return 0;
}
