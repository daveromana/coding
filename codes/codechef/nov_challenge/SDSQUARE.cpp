
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
#define Sll(n) scanf("%lld",&n)
#define Pll(n) printf("%lld\n",n)
#define sortv(v) sort(v.begin(),v.end())
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
#define rep2(i,a,b) for(i=a;i<b;i++)
#define MP make_pair
#define PB push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define vi vector<int>
#define vl vector<long long int>
#define si set<int>
#define sl set<long long int>
#define Si size()
#define mod 1000000007
//for gcd use __gcd(); // inbuilt function

#define sieve(a) ({int b=ceil(sqrt(a));vector<int> d(a,0);vector<int> e;int f=2;e.push_back(2);e.push_back(3);for(int x=1;x<b+1;x++){for(int y=1;y<b+1;y++){int n=(4*x*x)+(y*y);if(n<=a&&(n%12==1||n%12==5)){d[n]^=1;}n=(3*x*x)+(y*y);if(n<=a&&n%12==7){d[n]^=1;}n=(3*x*x)-(y*y);if(x>y&&n<=a&&n%12==11){d[n]^=1;}}}for(int r=5;r<b+1;r++){if(d[r]){for(int i=r*r;i<a;i+=(r*r)){d[i]=0;}}}for(int c=5;c<a;c++){if(d[c]){e.push_back(c);}}e;})



int main()
{
	int T;
	S(T);
	long long int a,b,i=0,j=0,c,d;
	long long int arr[100002];
	int flag=0;
	while(1)
	{
		flag=0;
		if((i*i)>10000000000LL)
			break;
		c=i*i;
		while(c!=0)
		{
			d=c%10;
			if(d==0 || d==1 || d==4 || d==9)
			{
			}
			else
			{
				flag=1;
				break;
			}
			c/=10;
		}
		if(flag==0)
		{
			arr[j]=i*i;
			j++;
		}
		i++;
	}
	long long int n=j,count;
	while(T--)
	{
		count=0;
		Sll(a);
		Sll(b);
		for(i=0;i<n;i++)
		{
			if(arr[i]>=a && arr[i]<=b)
				count++;
		}
		Pll(count);
	}
	return 0;
}