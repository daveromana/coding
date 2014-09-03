#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int m,int h)
{
	int arr1[h],arr2[h]; // Two temporary arrays to hold the two arrays to be merged
	int n1,n2,i,j,k;
	n1=m-l+1;
	n2=h-m;

	for(i=0; i<n1; i++)
		arr1[i]=arr[l+i];
	for(j=0; j<n2; j++)
		arr2[j]=arr[m+j+1];

	arr1[i]=9999999; // To mark the end of each temporary array
	arr2[j]=9999999;

	i=0;
	j=0;
	for(k=l; k<=h; k++) { //process of combining two sorted arrays
		if(arr1[i]<=arr2[j])
			arr[k]=arr1[i++];
		else
			arr[k]=arr2[j++];
	}
	return;
}
void merge_sort(int arr[],int low,int high)
{
	int mid;
	if(low<high) {
		mid=(low+high)/2;
		// Divide and Conquer
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		// Combine
		merge(arr,low,mid,high);
	}
	return;
}
int main()
{
	int n,i,flag,c;
	scanf("%d",&n);
	int arr[n];
	while(n!=0)
	{
		c=0;
		flag=0;
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		merge_sort(arr,0,n-1);
		for(i=1;i<n;i++)
		{
			if(arr[i]-arr[i-1]>200)
			{
				flag=1;
				break;
			}
			if(2*(1422-arr[n-1])>200 && i==n-1)
				flag=1;
		}
		if(flag==1)
			printf("IMPOSSIBLE\n");
		else printf("POSSIBLE\n");
		scanf("%d",&n);
	}
	return 0;
}
