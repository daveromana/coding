
#include<stdio.h>
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<map>
#include<list>

using namespace std;

#define S(n) scanf("%d",&n)
#define SS(s) scanf("%s",s)
#define P(n) printf("%d\n",n)
#define PS(s) printf("%s\n",s)
#define sortv(v) sort(v.begin(),v.end())
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep2(i,a,b) for(i=a;i<b;i++)
#define MP make_pair
#define PB push_back
#define pii pair<int,int>
#define vi vector<int>
#define si set<int>
#define Si size()
#define mod 1000000007
//for gcd use __gcd(); // inbuilt function

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})



int main()
{
	int T,x,y,z,i,j,k,n,m,num,ans,count,res;
	S(x);
	char ss[1000001];
	int arr[x],arr1[x];
	for(i=0;i<x;i++)
	{
		S(arr[i]);
		arr1[i]=0;
	}
	k=0;
	for(i=0;i<x;i++)
	{
		while(arr1[i]<arr[i])
		{
			if(i!=x-1)
			{
				ss[k]='P';
				k++;
				ss[k]='R';
				k++;
				arr1[i]++;
				if(arr1[i+1]<arr[i+1])
				{
					ss[k]='P';
					k++;
					ss[k]='L';
					k++;
					arr1[i+1]++;
				}
				else
				{
					ss[k]='L';
					k++;
				}
			}
			else
			{
				ss[k]='P';
				k++;
				ss[k]='L';
				k++;
				arr1[i]++;
				if(arr1[i-1]<arr[i-1])
				{
					ss[k]='P';
					k++;
					ss[k]='R';
					k++;
					arr1[i-1]++;
				}
				else
				{
					ss[k]='R';
					k++;
				}
			}
		}
		if(i!=x-1)
		{
			ss[k]='R';
			k++;
		}
	}
	for(i=0;i<k-2;i++)
	{
		printf("%c",ss[i]);
	}
	printf("\n");
	return 0;
}
