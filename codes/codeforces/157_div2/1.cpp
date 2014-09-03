#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	char chess[8][8];
	int i,j;
	for(i=0;i<8;i++)
	{
		scanf("%s",chess[i]);
	}
	int flag=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<7;j++)
		{
			if(chess[i][j]==chess[i][j+1])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==1)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
