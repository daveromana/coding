#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,r,c,b,i,j,count,k,left,right,top,bottom,min,pri[500];
	pri[0]=0;pri[1]=0;
	count=0;
	for(k=2;k<=500;k++)
	{
		if(k==2 || k==3 || k==5 || k==7 || k==11 || k==13 || k==17 || k==19 || k==23 || k==29 || k==31 || k==37 || k==41 || k==43 || k==47 || k==53 || k==59 || k==61 || k==67 || k==71 || k==73 || k==79 || k==83 || k==89 || k==97 || k==101 || k==103 || k==107 || k==109 || k==113 || k==127 || k==131 || k==137 || k==139 || k==149 || k==151 || k==157 || k==163 || k==167 || k==173 || k==179 || k==181 || k==191 || k==193 || k==197 || k==199 || k==211 || k==223 || k==227 || k==229 || k==233 || k==239 || k==241 || k==251 || k==257 || k==263 || k==269 || k==271 || k==277 || k==281 || k==283 || k==293 || k==307 || k==311 || k==313 || k==317 || k==331 || k==337 || k==347 || k==349 || k==353 || k==359 || k==367 || k==373 || k==379 || k==383 || k==389 || k==397 || k==401 || k==409 || k==419 || k==421 || k==431 || k==433 || k==439 || k==443 || k==449 || k==457 || k==461 || k==463 || k==467 || k==479 || k==487 || k==491 || k==499)
		{
			count++;
		}
		pri[k]=count;
	}
	scanf("%d",&t);
	for(b=0;b<t;b++)
	{
		int l1[500][500],r1[500][500],t1[500][500],b1[500][500];
		left=0;right=0;top=0;bottom=0;
		count = 0;
		scanf("%d %d",&r,&c);
		char arr[r][c];
		for(i=0;i<r;i++)
		{
			scanf("%s",arr[i]);
		}
		for(i=0;i<500;i++)
		{
			for(j=0;j<500;j++)
			{
				l1[i][j]=0;
				r1[i][j]=0;
				t1[i][j]=0;
				b1[i][j]=0;
			}
		}
		int z=0;
		for(z=0;z<r;z++)
		{
			for(i=1;i<c;i++)
			{

				if(arr[z][i-1] == '^')
					l1[z][i] = l1[z][i-1] + 1;
				else
					l1[z][i] = 0;


				/*if(arr[z][i]!='#')
				{
					if(arr[z][i-1]=='^')
					{
						l1[z][i] = l1[z][i-1]+1;
					}
					else l1[z][i]=0;
				}
				else
				{
					l1[z][i]=0;
				}*/
			}
		}
		for(z=0;z<r;z++)
		{
			for(i=c-2;i>=0;i--)
			{
				if(arr[z][i+1] == '^')
					r1[z][i] = r1[z][i+1] + 1;
				else
					r1[z][i] = 0;
				/*if(arr[z][i]!='#')
				{
					if(arr[z][i+1]=='^')
					{
						r1[z][i] = r1[z][i+1]+1;
					}
					else r1[z][i]=0;
				}
				else
				{
					r1[z][i]=0;
				}*/
			}
		}
		for(z=0;z<c;z++)
		{
			for(i=1;i<r;i++)
			{
				if(arr[i-1][z] == '^')
					t1[i][z] = t1[i-1][z] + 1;
				else
					t1[i][z] = 0;
				/*if(arr[i][z]!='#')
				{
					if(arr[i-1][z]=='^')
					{
						t1[i][z] = t1[i-1][z]+1;
					}
					else t1[z][i]=0;
				}
				else
				{
					t1[z][i]=0;
				}*/
			}
		}
		for(z=0;z<c;z++)
		{
			for(i=r-2;i>=0;i--)
			{
				if(arr[i+1][z] == '^')
					b1[i][z] = b1[i+1][z] + 1;
				else
					b1[i][z] = 0;
				/*if(arr[i][z]!='#')
				{
					if(arr[i+1][z]=='^')
					{
						b1[i][z] = b1[i+1][z]+1;
					}
					else b1[z][i]=0;
				}
				else
				{
					b1[i][z]=0;
				}*/
			}
		}
		for(i=1;i<r-1;i++)
		{
			for(j=1;j<c-1;j++)
			{
				if(arr[i][j]!='#')
				{

					if(t1[i][j]<b1[i][j])
						min=t1[i][j];
					else min=b1[i][j];
					if(l1[i][j]<min)
						min=l1[i][j];
					if(r1[i][j]<min)
						min=r1[i][j];

					if(min>=2)
					{
						count=count+pri[min];
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
