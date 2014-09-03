#include<stdio.h>
#include<vector>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
	vector <int> a;
	vector <int> b;
	vector <int> c;
	int T,i,l,a1,b1,c1,min,max,m;
	long long int ans;
	char S[1000005];
	scanf("%d",&T);
	while(T--)
	{
		ans=0;
		a1=0;b1=0;c1=0;
		scanf("%s",S);
		l=strlen(S);
		for(i=0;i<l;i++)
		{
			if(S[i]=='a')
			{
				a.push_back(i+1);
			}
			if(S[i]=='b')
			{
				b.push_back(i+1);
			}
			if(S[i]=='c')
			{
				c.push_back(i+1);
			}
		}
		min=0;max=0;
		if(a.size()>0 && b.size()>0 && c.size()>0)
		{
			m=a[a.size()-1];
			if(b[b.size()-1]<m)
				m=b[b.size()-1];
			if(c[c.size()-1]<m)
				m=c[c.size()-1];
			while(1)
			{
				if(min==m)
					break;
				min=1000005;max=-1;
				if(a[a1]<min)
					min=a[a1];
				if(b[b1]<min)
					min=b[b1];
				if(c[c1]<min)
					min=c[c1];
				if(a[a1]>max)
					max=a[a1];
				if(b[b1]>max)
					max=b[b1];
				if(c[c1]>max)
					max=c[c1];
				ans=ans+max-min;
				if(min==a[a1])
					a1++;
				if(min==b[b1])
					b1++;
				if(min==c[c1])
					c1++;
			}
		}
		ans=ans+(((l-min)*(l-min+1))/2);
		printf("%lld\n",ans);
		a.erase(a.begin(),a.end());
		b.erase(b.begin(),b.end());
		c.erase(c.begin(),c.end());
	}
	return 0;
}
