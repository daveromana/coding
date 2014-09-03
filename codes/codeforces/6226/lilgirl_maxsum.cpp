#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int tree[300000];
void segment(int,int,int);
void query(int,int,int,int,int);
int query1(int,int,int,int);

int main()
{
	vector< pair<int,int> > v ;

	int n,m,*A,i,j,k,l,*B,*C,count;
	long long *D,sum;

	scanf("%d%d",&n,&m);

	A = (int*)malloc(sizeof(int)*n);
	B = (int*)malloc(sizeof(int)*m);
	C = (int*)malloc(sizeof(int)*m);
	D = (long long int*)malloc(sizeof(long long int)*n);

	for(i=0;i<n;i++)
		scanf("%d",&A[i]);

	sort(A,A+n);

	segment(1,0,n-1);


	for(i=0;i<m;i++)
	{
		scanf("%d%d",&B[i],&C[i]);
		B[i]--;C[i]--;
		query(1,0,n-1,B[i],C[i]);
	}

	for(i=0;i<n;i++)
	{
		count = query1(1,0,n-1,i);
		v.push_back(make_pair(count,i));
	}
	sort(v.begin(),v.end());
	for(i=n-1;i>=0;i--)
	{
		D[v[i].second] = A[i];
	}

	for(i=1;i<n;i++)
	{
		D[i] += D[i-1];
	}

	sum = 0;
	for(i=0;i<m;i++)
	{
		if(B[i] == 0)
			sum += D[C[i]];
		else
			sum += D[C[i]] - D[B[i]-1];
	}
	free(A);
	free(B);
	free(C);
	free(D);
	cout << sum << "\n";

	return 0;
}


void segment(int ind,int low,int high)
{
	int mid = (low+high)/2;

	if(low == high)
	{
		tree[ind] = 0;
		return ;
	}
	tree[ind] = 0;

	segment(2*ind,low,mid);
	segment(2*ind + 1,mid+1,high);
}



void query(int ind, int low, int high, int p, int q)
{
	int mid;
	mid = (low+high)/2;
	if(low == p && high == q)
	{
		tree[ind]++;
		return ;
	}
	else if(p > mid)
		query(2*ind + 1,mid+1,high,p,q);
	else if(q <= mid)
		query(2*ind,low,mid,p,q);

	else
	{
		query(2*ind,low,mid,p,mid);
		query(2*ind + 1,mid+1,high,mid+1,q);
	}
}

int query1(int ind,int low,int high,int i)
{
	int mid = (low+high)/2;
	if(low == i && high == i)
	{
		return tree[ind];
	}
	else if(i > mid)
		return query1(2*ind + 1,mid+1,high,i) + tree[ind];
	else if(i <= mid)
		return query1(2*ind,low,mid,i) + tree[ind];

}
