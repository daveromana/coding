#include<stdio.h>
int main()
{
	int a,b,i,j,temp,ans;
	scanf("%d %d",&a,&b);
	int arr[a];
	for(i=0;i<a;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<a;i++)
	{
		for(j=i;j<a;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	ans = arr[b-1] - arr[0];
	printf("%d\n",ans);
	return 0;
}
