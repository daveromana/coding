#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,flag=0;
	scanf("%d",&n);
	int arr[n],i,sum=0,aa[3];
	aa[0]=0;aa[1]=0;aa[2]=0;
	scanf("%d",&arr[0]);
	if(arr[0]==25)
		aa[0]++;
	if(arr[0]==50 || arr[0]==100)
		flag=1;
	if(flag==0)
	{
		for(i=1;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if(arr[i]==100)
			{
				if(aa[1]>0 && aa[0]>0)
				{
					aa[1]--;aa[0]--;
				}
				else if(aa[1]<=0 && aa[0]>=3)
				{
					aa[0]=aa[0]-3;
				}
				else break;
				aa[2]++;
			}
			else if(arr[i]==50)
			{
				if(aa[0]>0)
				{
					aa[0]--;
				}
				else break;
				aa[1]++;
			}
			else if(arr[i]==25)
				aa[0]++;
		}
	}
	if(i==n)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}
