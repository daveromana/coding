
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


void sort_array_index(int a[],int start,int end,int b[]);
void merge_index(int a[],int start,int end,int b[]);

int main(){
	int a[]={3,6,2,7,1,9,8,5};
	int b[sizeof(a)/sizeof(int)];
	int i=0;
	for(i=0;i<sizeof(a)/sizeof(int);i++)
		printf("%d ",a[i]);
	printf("\n");
	sort_array_index(a,0,sizeof(a)/sizeof(int)-1,b);
	for(i=0;i<sizeof(a)/sizeof(int);i++)
		printf("%d  %d\n",b[i],a[b[i]]);

}
void sort_array_index(int a[],int start,int end,int b[]){
	int mid;
	if(start>end)
		return;
	mid=start+(end-start)/2;
	sort_array_index(a,start,mid,b);
	sort_array_index(a,mid+1,end,b);
	merge_index(a,start,end,b);
}
void merge_index(int a[],int start,int end,int b[]){
	int i,j,k=0,mid,tmp[end-start+1];
	i=start;
	mid=start+(end-start)/2;
	j=mid+1;
	while(i<=mid && j<=end){
		if(a[b[i]] <=a[b[j]])
			tmp[k++]=b[i++];
		else
			tmp[k++]=b[j++];
	}
	while(i<=mid)
		tmp[k++]=b[i++];
	while(j<=end)
		tmp[k++]=b[j++];
	j=start;
	for(i=0;i<sizeof(tmp)/sizeof(int);i++)
		b[j++]=tmp[i];
}
