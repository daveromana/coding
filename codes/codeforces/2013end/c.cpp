
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
#include <malloc.h>
#include <limits.h>

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

typedef struct node
{
	int a;
	int b;
}node;


void merge(int A[], int p, int q, int r){
	int *L, *R;
	int i, j, k;
	int lsize = q-p+1, rsize = r-q;
	L=(node*)malloc(sizeof(node)*lsize+1);
	R=(node*)malloc(sizeof(node)*rsize+1);
	for(i=0; i<lsize; i++){
		L[i] = A[i+p];
	}
	L[i] = INT_MAX;
	for(j=0; j<rsize; j++){
		R[j] = A[j+q+1];
	}
	R[j].a = INT_MAX;
	i=0;
	j=0;
	for(k=p;k<=r;){
		if(L[i] <= R[j]){
			A[k] = L[i];
			k++;
			i++;
		}
		else {
			A[k] = R[j];
			k++;
			j++;
		}
	}
}

void mergeSort(int A[], int p, int r){
	int q;
	if(p<r){
		q = (p+r)/2;
		mergeSort(A, p, q);
		mergeSort(A, q+1, r);
		merge(A, p, q, r);
	}
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
void sort_array_index(int a[],int start,int end,int b[]){
	int mid;
	if(start>end)
		return;
	mid=start+(end-start)/2;
	sort_array_index(a,start,mid,b);
	sort_array_index(a,mid+1,end,b);
	merge_index(a,start,end,b);
}

bool cmp(int i,int j)
{
	return i.a<j.a;
}

int main()
{
	int T,x,y,z,i,j,k,n,m,num,ans,count,res;
	S(n);
	node A[n];
	for(i=0;i<n;i++)
	{
		S(A[i].a);
		A[i].b=i;
	}
	sort(A,A+n,cmp);
	//sort_array_index(a,0,sizeof(a)/sizeof(int)-1,b);
	//mergeSort(A,0,n-1,cmp);
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",A[i].a,A[i].b);
	}
	printf("\n");
	return 0;
}
