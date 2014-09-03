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
	double a=sqrt(2);
	int T,r;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&r);
		printf("%lf\n",((1.0*r)*sqrt(2)));
	}
	return 0;
}
