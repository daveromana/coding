
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

int arr[100000];

int primeFactors(long long int n)
{
	int k=0;
	// Print the number of 2s that divide n
	while (n%2 == 0)
	{
		arr[k]=2;
		k++;
//		printf("%d ", 2);
		n = n/2;
	}

	// n must be odd at this point.  So we can skip one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			arr[k]=i;
			k++;
		//	printf("%d ", i);
			n = n/i;
		}
	}

	// This condition is to handle the case whien n is a prime number
	// greater than 2
	if (n > 2)
	{
		arr[k]=n;
		k++;
	//	printf ("%lld ", n);
	}
	return k;
}

int main()
{
	int T,x,y,z,i,j,flag,k,m,num,ans,count,res;
	long long int n;
	S(T);
	while(T--)
	{
		Sll(n);
		m=primeFactors(n);
		count=0;
		flag=0;
		for(i=0;i<m-1;i++)
		{
			if(arr[i]==arr[i+1])
			{
				count++;
			}
			else
			{
				if(count%2!=0)
				{
				}
				else
				{
					flag=1;
					break;
				}
				count=0;
			}
		}
		if(count==m-1 && m>2)
		{
			printf("YES\n");
			continue;
		}
		if(flag==1 || m%2==1)
		{
			printf("NO\n");
		}
		else
			printf("YES\n");
	}
	return 0;
}
