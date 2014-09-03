#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	int a,b,j,k;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%d %d",&a,&b);
		if((a+b)%2 != 0 || abs(a-b)>2 || b>a)
			printf("No Number\n");
		else
			if(a%2 == 0)
				printf("%d\n",a+b);
			else
				printf("%d\n",a+b-1);
	}
	return 0;
}
