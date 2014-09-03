#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;
int main()
{
	long long int n,i,j=0;
	scanf("%lld",&n);
	long long int arr[n],x,arr1[n];
	for(i=0;i<n;i++)
		arr[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		/*if(x<0)
		{
			arr[j]=x;
			j++;
		}*/
	}
	scanf("%lld",&x);
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
			j++;
		else break;
	}
	arr1[0]=arr[0];
	for(i=1;i<j;i++)
		arr1[i]=arr[i]+arr1[i-1];

	long long int min = (abs(arr[0]))*x,aa;
	for(i=1;i<j;i++)
	{
		aa = ((abs(arr[i]))*x) + ((abs(arr1[i-1]))-(i*abs(arr[i])));
		if(aa<min)
			min=aa;
	}
	if((abs(arr1[j-1]))<min)
		min=abs(arr1[j-1]);
	printf("%lld\n",min);

	
	return 0;
}
