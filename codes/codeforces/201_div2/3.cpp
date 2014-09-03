#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;
int main()
{
	int n,i;
	scanf("%d",&n);
	long long int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	long long int ans=a[n-1]-n;
	if(ans%2==0)
	{
		printf("Bob\n");
	}
	else
		printf("Alice\n");
	return 0;
}
