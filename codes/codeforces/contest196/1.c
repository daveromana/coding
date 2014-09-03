#include<stdio.h>
int main()
{
	int a,b,i,j,temp,min;
	scanf("%d %d",&a,&b);
	int arr[b];
	for(i=0;i<b;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<b;i++)
	{
		for(j=i;j<b;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	min = 10000000;
	for(i=0;i<=b-a;i++)
	{
		if(arr[a-1+i]-arr[i]<min)
		{
			min = arr[a-1+i]-arr[i];
		}
	}
	printf("%d\n",min);
	return 0;
}
