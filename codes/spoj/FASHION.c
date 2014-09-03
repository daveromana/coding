#include<stdio.h>
void merge(int arr[],int l,int m,int h)
{
	int arr1[1001],arr2[1001]; // Two temporary arrays to hold the two arrays to be merged
	int n1,n2,i,j,k;
	n1=m-l+1;
	n2=h-m;
	for(i=0; i<n1; i++)
		arr1[i]=arr[l+i];
	for(j=0; j<n2; j++)
		arr2[j]=arr[m+j+1];
	arr1[i]=9999; // To mark the end of each temporary array
	arr2[j]=9999;
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
	int n,a,i,sum;
	scanf("%d",&n);
	while(n!=0)
	{
		sum = 0;
		scanf("%d",&a);
		int m[a],f[a];
		for(i=0;i<a;i++)
			scanf("%d",&m[i]);
		for(i=0;i<a;i++)
			scanf("%d",&f[i]);
		merge_sort(m, 0, a-1);
		merge_sort(f, 0, a-1);
		for(i=0;i<a;i++)
			sum = sum + m[i]*f[i];
		printf("%d\n",sum);
		n--;
	}
	return 0;
}
