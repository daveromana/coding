#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char arr[11];
	scanf("%s",arr);
	int a=strlen(arr),i;
	if(arr[0]!='1')
	{
		printf("NO\n");
		return 0;
	}
	int flag=0;
	for(i=1;i<a-1;i++)
	{
		if(arr[i]=='1' && (arr[i+1]=='4' || arr[i+1]=='1') &&  (arr[i-1]=='4' || arr[i-1]=='1') )
		{
			flag=0;
		}
		else if(arr[i]=='4')
		{
			if((arr[i-1]=='4' && arr[i+1]=='1') || (arr[i+1]=='4' && arr[i-1]=='1') || (arr[i-1]=='1' && arr[i+1]=='1'))
			//if(arr[i-1]=='4' && arr[i-2]=='4' && i>1)
			{
				flag=0;
			//	break;
			}
			else
			{
				flag=1;
				break;
			}
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
	if(arr[a-1]=='1' || arr[a-1]=='4')
		flag=0;
	else
		flag=1;
	}
	if(flag==1)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
