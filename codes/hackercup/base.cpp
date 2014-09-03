
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
	int l,T,x,y,z,i,j,k,n,m,p,num,ans,count,res;
	S(T);
	char name[40][40];
	int shot[40],height[40];
	char team1[40][40];
	char team2[40][40];
	int time1[40],time2[40],play1[40],play2[40];
	int draft1[40],draft2[40];
	int shot1[40],height1[40];
	int shot2[40],height2[40];
	for(x=1;x<=T;x++)
	{
		S(n);
		S(m);
		S(p);
		for(i=0;i<n;i++)
		{
			scanf("%s %d %d",name[i],&shot[i],&height[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(shot[i]<shot[j])
				{
					int temp=shot[i];
					shot[i]=shot[j];
					shot[j]=temp;

					temp=height[i];
					height[i]=height[j];
					height[j]=temp;

					char aa[40];
					strcpy(aa,name[i]);
					strcpy(name[i],name[j]);
					strcpy(name[j],aa);
				}
				if(shot[i]==shot[j])
				{
					if(height[i]<height[j])
					{
						int temp=shot[i];
						shot[i]=shot[j];
						shot[j]=temp;

						temp=height[i];
						height[i]=height[j];
						height[j]=temp;

						char aa[40];
						strcpy(aa,name[i]);
						strcpy(name[i],name[j]);
						strcpy(name[j],aa);
					}
				}
			}
		}
		/*for(i=0;i<n;i++)
		{
			printf("%s ",name[i]);
		}
		printf("\n");*/
		if(n%2==0)
		{
			y=n/2;
			z=y;
		}
		else
		{
			y=n/2+1;
			z=n/2;
		}
		for(i=0;i<y;i++)
		{
			time1[i]=0;
			play1[i]=0;
		}
		for(i=0;i<z;i++)
		{
			time2[i]=0;
			play2[i]=0;
		}
		for(i=0;i<y;i++)
		{
			strcpy(team1[i],name[i*2]);
			shot1[i]=shot[i*2];
			height1[i]=height[i*2];
			draft1[i]=i;
		}
		for(i=0;i<z;i++)
		{
			strcpy(team2[i],name[(i*2)+1]);
			shot2[i]=shot[(i*2)+1];
			height2[i]=height[(i*2)+1];
			draft2[i]=i;
		}
		/*for(i=0;i<y;i++)
			printf("%s ",team1[i]);
		printf("\n");
		for(i=0;i<z;i++)
			printf("%s ",team2[i]);
		printf("\n");*/
		for(i=0;i<p;i++)
		{
			play1[i]=1;
			play2[i]=1;
		}
		for(i=0;i<m-1;i++)
		{
			/*for(j=0;j<p;j++)
			{
				time1[j]++;
				play[j]=1;
			}*/
			/*for(j=0;j<y;j++)
			{
				time11[j]=time1[j];
				draft11[j]=draft11[j];
				}*/
			for(k=0;k<y;k++)
			{
				for(l=k;l<y;l++)
				{
					if(play1[k]>play1[l])
					{
						int temp=play1[k];
						play1[k]=play1[l];
						play1[l]=temp;

						temp=time1[k];
						time1[k]=time1[l];
						time1[l]=temp;

						temp=draft1[k];
						draft1[k]=draft1[l];
						draft1[l]=temp;

						char aa[22];
						strcpy(aa,team1[k]);
						strcpy(team1[k],team1[l]);
						strcpy(team1[l],aa);
					}
					if(play1[k]==play1[l])
					{
						if(time1[k]>time1[l])
						{
							int temp=play1[k];
							play1[k]=play1[l];
							play1[l]=temp;

							temp=time1[k];
							time1[k]=time1[l];
							time1[l]=temp;

							temp=draft1[k];
							draft1[k]=draft1[l];
							draft1[l]=temp;

							char aa[22];
							strcpy(aa,team1[k]);
							strcpy(team1[k],team1[l]);
							strcpy(team1[l],aa);
						}
						if(time1[k]==time1[l])
						{
							if(draft1[k]>draft1[l])
							{
								int temp=play1[k];
								play1[k]=play1[l];
								play1[l]=temp;

								temp=time1[k];
								time1[k]=time1[l];
								time1[l]=temp;

								temp=draft1[k];
								draft1[k]=draft1[l];
								draft1[l]=temp;

								char aa[22];
								strcpy(aa,team1[k]);
								strcpy(team1[k],team1[l]);
								strcpy(team1[l],aa);

								/*char aa[22];
								  strcpy(aa,team1[k]);
								  strcpy(team1[k],team1[l]);
								  strcpy(team1[l],aa);*/
							}
						}
					}
				}
			}
			for(j=0;j<y;j++)
			{
				if(play1[j]==1)
				{
					time1[j]++;
				}
			}
			play1[0]=1;
			play1[y-1]=0;
			for(k=0;k<z;k++)
			{
				for(l=k;l<z;l++)
				{
					if(time2[k]>time2[l])
					{
						int temp=time2[k];
						time2[k]=time2[l];
						time2[l]=temp;

						temp=draft2[k];
						draft2[k]=draft2[l];
						draft2[l]=temp;

						char aa[22];
						strcpy(aa,team2[k]);
						strcpy(team2[k],team2[l]);
						strcpy(team2[l],aa);
					}
					if(time2[k]==time2[l])
					{
						if(draft2[k]>draft2[l])
						{
							int temp=time2[k];
							time2[k]=time2[l];
							time2[l]=temp;

							temp=draft2[k];
							draft2[k]=draft2[l];
							draft2[l]=temp;

							char aa[22];
							strcpy(aa,team2[k]);
							strcpy(team2[k],team2[l]);
							strcpy(team2[l],aa);
						}
					}
				}
			}
			for(j=0;j<p;j++)
			{
				time2[j]++;
			}
		}
		printf("Case #%d: ",x);
		for(j=0;j<p;j++)
		{
			printf("%s %s ",team1[j],team2[j]);
		}
		printf("\n");
	}
	return 0;
}
