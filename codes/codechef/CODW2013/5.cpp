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
	int T,pass;
	unsigned long long int a;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%llu",&a);
		pass=0;
		while((a>>1)!=0)
		{
			if((a&1)==0)
			{
				a = a>>1;
			}
			else
			{
				a = (a>>1) + 1;
				pass++;
			}
		}
		printf("%d\n",pass);
	}
	return 0;
}
