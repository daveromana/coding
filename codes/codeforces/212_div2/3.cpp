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
	int T,x,y,z,i,j,k,n,m,num,ans,res,min=100000000;
	S(n);
	int arr[n],arr1[n],count[n][n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		arr1[i]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			count[i][j] = 0;

			for(k=0;k<n;k++)
				arr1[k]=arr[k];

			x=arr1[i];
			arr1[i]=arr1[j];
			arr1[j]=x;
			for (k = 1; k < n; k = k + 1)
			{
				l = k; 
				while (l > 0 && arr1[l] < arr1[l - 1])
				{
				//	swap(arr1[l], arr1[l-1]); // swap elements a[j] and a[j - 1]
					y=arr1[l];
					arr1[l]=arr1[l-1];
					arr1[l-1]=y;
					count[i][j]++;
					l = l - 1;
				}
			}
			if(count[i][j]<min)
				min=count[i][j];
		}
	}
	ans=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(count[i][j]==min)
				ans++;
		}
	}
	printf("%d %d\n",min,ans);
	return 0;
}
