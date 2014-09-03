#include<stdio.h>
int main()
{
	int a,b,c,d,i,j,k,max,z=-1;
	scanf("%d%d",&a,&b);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>z)
			z=arr[i];
	}
	for(i=0;i<b;i++)
	{
		int count[z+1];
		for(j=0;j<=z;j++)
			count[j]=0;
		max=-1;
		z=-1;
		scanf("%d%d",&c,&d);
		for(j=c;j<=d;j++)
		{
			if(z<arr[j])
				z=arr[j];
			count[arr[j]]++;
		}
		for(j=0;j<=z;j++)
			if(max<count[j])
				max=count[j];
/*		k=0;
		max=-1;
		scanf("%d%d",&c,&d);
		int arr1[d-c+2],flag[100004]={0};
		for(j=0;j<=d-c;j++)
			arr1[j]=0;
		for(j=c;j<=d;j++)
		{
			if(flag[arr[j]]==0)
			{
				arr1[k]++;
				flag[arr[j]] = 1;
				k++;
			}
		}
		for(j=0;j<=d-c;j++)
			if(arr1[j]>max)
				max=arr1[j];*/
		printf("%d\n",max);
	}
	return 0;
}
