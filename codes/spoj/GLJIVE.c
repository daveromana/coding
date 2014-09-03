#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0;;
	for(i=0;i<10;i++)
	{
		scanf("%d",&n);
		sum=sum+n;
		if(sum>=100)
		{
			if(abs(sum-100)>abs(sum-n-100))
				sum = sum-n;
			break;
		}
	}
	printf("%d\n",sum);
	return 0;
}
