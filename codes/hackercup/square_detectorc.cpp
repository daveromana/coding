
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
	int T,x,y,z,i,j,k,n,m,num,ans,count,res,s,t,s1,t1,s2,t2,flag;
	S(T);
	char arr[30][30];
	for(x=1;x<=T;x++)
	{
		m=0;
		S(n);
		for(i=0;i<n;i++)
			scanf("%s",arr[i]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(arr[i][j]=='#')
				{
					s=i;
					t=j;
					m=1;
					break;
				}
			}
			if(m==1)
				break;
		}
		for(i=s;i<s+1;i++)
		{
			for(j=t;j<n;j++)
			{
				if(i==s && j==t)
				{
				}
				else
				{
					if((arr[i][j]=='.' && arr[i][j-1]=='#') || (arr[i][j]=='#' && j==n-1))
					{

						if((arr[i][j]=='.' && arr[i][j-1]=='#'))
						{
							s1=i;
							t1=j;
						}
						else
						{
							s1=i;
							t1=j+1;
						}
						break;
					}
				}
			}
		}
		for(i=t;i<t+1;i++)
		{
			for(j=s;j<n;j++)
			{
				if(i==t && j==s)
				{
				}
				else
				{
					if((arr[j][i]=='.' && arr[j-1][i]=='#') || (arr[j][i]=='#' && j==n-1))
					{
						if((arr[j][i]=='.' && arr[j-1][i]=='#'))
						{
							s2=j;
							t2=i;
						}
						else
						{
							s2=j+1;
							t2=i;
						}
						break;
					}
				}
			}
		}
		flag=0;
		for(i=s;i<s2;i++)
		{
			for(j=t;j<t1;j++)
			{
				if(arr[i][j]=='.')
				{
					printf("Case #%d: NO\n",x);
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}
		if(flag==1)
			continue;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(arr[i][j]=='#' && (i<s || i>s2 || j<t || j>t1))
				{
					printf("Case #%d: NO\n",x);
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}
		if(flag==1)
			continue;
		if((s2-s)!=(t1-t))
		{
			printf("Case #%d: NO\n",x);
			flag=1;
		}
		if(flag==1)
			continue;
		printf("Case #%d: YES\n",x);
	}
	return 0;
}
