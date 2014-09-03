#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int a,b,n,i,j;
	char **arr;
	char temp[10];
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&n);
		arr = (char**)malloc(sizeof(char*)*(n));
		for(i=0;i<n;i++)
		{
			arr[i] = (char*)malloc(sizeof(char)*10);
			scanf("%s",arr[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(strcmp(arr[i],arr[j])>0)
				{
					strcpy(temp,arr[i]);
					strcpy(arr[i],arr[j]);
					strcpy(arr[j],temp);
				}
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%s\n",arr[i]);
		}
		free(arr);
	}
}
