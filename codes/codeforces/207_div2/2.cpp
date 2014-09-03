#include <iostream>
#include <algorithm>
#include <cstring>
#include<stdio.h>

using namespace std;


int MM[100010]={0},x[100001],y[100001],z[100001];

int main()
{
	int i,m,n;
	scanf("%d%d",&n,&m);

	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}

	MM[y[0]] = 2;
	MM[z[0]] = 3;
	MM[x[0]] = 1;

	for(i=1;i<m;i++)
	{
		if(MM[x[i]] + MM[y[i]] + MM[z[i]] == 0)
		{
			MM[x[i]] = 1;
			MM[y[i]] = 2;
			MM[z[i]] = 3;
		}

		else if(MM[x[i]] != 0)
		{
			if(MM[x[i]] == 1)
			{
				MM[y[i]] = 2;
				MM[z[i]] = 3;
			}
			else if(MM[x[i]] == 2)
			{
				MM[y[i]] = 1;
				MM[z[i]] = 3;
			}
			else if(MM[x[i]] == 3)
			{
				MM[y[i]] = 1;
				MM[z[i]] = 2;
			}
		}

		else if(MM[y[i]] != 0)
		{
			if(MM[y[i]] == 1)
			{
				MM[x[i]] = 2;
				MM[z[i]] = 3;
			}
			else if(MM[y[i]] == 2)
			{
				MM[x[i]] = 1;
				MM[z[i]] = 3;
			}
			else if(MM[y[i]] == 3)
			{
				MM[x[i]] = 1;
				MM[z[i]] = 2;
			}
				
		}

		else if(MM[z[i]] != 0)
		{
			if(MM[z[i]] == 1)
			{
				MM[y[i]] = 2;
				MM[x[i]] = 3;
			}
			else if(MM[z[i]] == 2)
			{
				MM[y[i]] = 1;
				MM[x[i]] = 3;
			}
			else if(MM[z[i]] == 3)
			{
				MM[y[i]] = 1;
				MM[x[i]] = 2;
			}
		}

	}
	for(i=1;i<=n;i++)
	{
		if(i == n)
		{
			printf("%d\n",MM[i]);
			break;
		}
		printf("%d ",MM[i]);
	}
	return 0;
}
