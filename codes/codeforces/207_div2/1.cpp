#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

 using namespace std;

 int main()
{
	int i,j,n,m,num,x,y;
	scanf("%d",&m);
	int arr[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
		if(i!=0)
			arr[i]=arr[i-1]+arr[i];
	}

	scanf("%d%d",&x,&y);
	int flag=0;
	int total=arr[m-1];
	for(i=0;i<m;i++)
	{
		if(arr[i]>=x && arr[i]<=y)
		{
			if(total-arr[i]>=x && total-arr[i]<=y)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
		printf("%d\n",0);
	else
		printf("%d\n",i+2);

	return 0;
}

