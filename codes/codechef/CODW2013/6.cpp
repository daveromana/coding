#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,i;
	scanf("%d",&n);
	int customer[n+1];
	for(i=0;i<=n;i++)
		customer[i]=0;
	int q;
	scanf("%d",&q);
	char s[10];
	int a,b,c;
	for(i=0;i<q;i++)
	{
		scanf("%s",s);
		if(strcmp(s,"UPDATE")==0)
		{
			scanf("%d %d",&a,&b);
		}
		else
		{
			scanf("%d",&c);
			printf("%d\n",customer[c]);
		}
	}
	return 0;
}
