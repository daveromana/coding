#include<stdio.h>
int main()
{
	int a,sum,i,b,count;
	scanf("%d",&a);
	while(a != -1)
	{
		count = 0;
		int arr[a];
		sum = 0;
		for(i=0;i<a;i++)
		{
			scanf("%d",&arr[i]);
			sum = sum+arr[i];
		}
		if(sum%a!=0)
			printf("-1\n");
		else
		{
			b = sum/a;
			for(i=0;i<a;i++)
				if(arr[i]<b)
					count = count + b-arr[i];
			printf("%d\n",count);
		}
		scanf("%d",&a);
	}
	return 0;
}
