#include<stdio.h>
#include<stdlib.h>
void merge(unsigned long long arr[],unsigned long long l,unsigned long long m,unsigned long long h)
{
	unsigned long long arr1[h],arr2[h]; // Two temporary arrays to hold the two arrays to be merged
	unsigned long long n1,n2,i,j,k;
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
void merge_sort(unsigned long long arr[],unsigned long long low,unsigned long long high)
{
	unsigned long long mid;
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
	unsigned long long *arr1,*arr2,a,i,j,temp,sum,k,m;
	scanf("%llu",&a);
	while(a != 0)
	{
		//arr1 = (long long *)malloc((a+1) * sizeof(long long));
		//arr2 = (long long *)malloc((a+1) * sizeof(long long));
		unsigned long long int arr1[a];
		unsigned long long int arr2[a];
		k = a;
		sum = 0;
		for(i=0;i<a;i++)
		{
			scanf("%llu",&m);
			arr1[i] = m;
		}
		for(i=0;i<a;i++)
		{
			scanf("%llu",&m);
			arr2[i] = m;
		}
		merge_sort(arr1,0,k-1);
		merge_sort(arr2,0,k-1);
		for(i=0;i<a;i++)
		{
			sum = sum + arr1[i]*arr2[k-1];
			k--;
		}
		printf("%llu\n",sum);
		scanf("%llu",&a);
	}
	return 0;
}
