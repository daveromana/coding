#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[505], b[505],c[2] = "*";
	int i,count;
	scanf("%s %s",a,b);
	while((strcmp(a,c))!=0)
	{
		count = 0;
		i = 0;
		for(i=0;i<strlen(a);i++)
		{
			if(a[i] != b[i] && a[i+1] == b[i+1])
			{
				count++;
			}
		}
		if(count == 0)
		{
			if(strcmp(a,b)==0)
				count = 0;
			else
				count = 1;
		}
		if(strcmp(a,b)==0)
			count = 0;
		printf("%d\n",count);
		scanf("%s %s",a,b);
	}
	return 0;
}
