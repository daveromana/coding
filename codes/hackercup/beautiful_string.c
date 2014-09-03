#include<stdio.h>
int main()
{
	int n,i,j,k,temp,count,result;
	char c;
	int arr[28];
	scanf("%d",&n);
	scanf("%c",&c);
	for(i=0;i<n;i++)
	{
		result = 0;
		for(j=0;j<27;j++)
		{
			arr[j]=0;
		}
		scanf("%c",&c);
		while(c!='\n')
		{
			if(c>=65 && c<=90)
			{
				arr[c-65]++;
			}
			else if(c>=97 && c<=122)
			{
				arr[c-97]++;
			}
			scanf("%c",&c);
		}
		for(j=0;j<26;j++)
		{
			for(k=j;k<26;k++)
			{
				if(arr[j]<=arr[k])
				{
					temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
				else{}
			}
		}
		count = 26;
		for(j=0;j<26;j++)
		{
			arr[j]=arr[j]*count;
			count--;
			result+=arr[j];
		}
		printf("Case #%d: %d\n",i+1,result);

	}
	return 0;
}
