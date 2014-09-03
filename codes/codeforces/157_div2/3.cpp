#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char ss[100005];
	scanf("%s",ss);
	int a=strlen(ss);
	int i,flag=0;
	for(i=0;i<a-1;i++)
	{
		if(ss[i]=='0' && flag==0)
		{
			flag=1;
		}
		else
		{
			printf("%c",ss[i]);
		}
	}
	if(flag==0)
	{
	}
	else
		printf("%c",ss[a-1]);
	printf("\n");
	return 0;
}
