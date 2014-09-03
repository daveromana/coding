#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
	vector < pair < int,int > > v;
	int n,i,count=0;
	scanf("%d",&n);
	int x[n],y[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
		v.push_back(make_pair(x[i],y[i]));
		if(x[i]==0 || y[i]==0)
		{
			count+=4;
		}
		else count+=6;
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)
	{
		x[i]=v[i].first;y[i]=v[i].second;
	}
	printf("%d\n",count);
	for(i=0;i<n;i++)
	{
		if(x[i]==0 || y[i]==0)
		{
			if(x[i]==0)
			{
				if(y[i]>0)
					printf("1 %d U\n",y[i]);
				else
					printf("1 %d D\n",-y[i]);

				printf("2\n");

				if(y[i]>0)
					printf("1 %d D\n",y[i]);
				else
					printf("1 %d U\n",-y[i]);

				printf("3\n");

			}
			else if(y[i]==0)
			{
				if(x[i]>0)
					printf("1 %d R\n",x[i]);
				else
					printf("1 %d L\n",-x[i]);

				printf("2\n");

				if(x[i]>0)
					printf("1 %d L\n",x[i]);
				else
					printf("1 %d R\n",-x[i]);

				printf("3\n");
			}
		}
		else
		{
			if(x[i]>0)
				printf("1 %d R\n",x[i]);
			else
				printf("1 %d L\n",-x[i]);

			if(y[i]>0)
				printf("1 %d U\n",y[i]);
			else
				printf("1 %d D\n",-y[i]);

			printf("2\n");

			if(x[i]>0)
				printf("1 %d L\n",x[i]);
			else
				printf("1 %d R\n",-x[i]);

			if(y[i]>0)
				printf("1 %d D\n",y[i]);
			else
				printf("1 %d U\n",-y[i]);

			printf("3\n");
		}
	}
	return 0;
}
