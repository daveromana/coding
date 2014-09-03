#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int T,n,i,j,k,l,m;
	char a[50][4],b[50][4],c[50][4];
	char a1[50][4],b1[50][4],c1[50][4];
	char a2[50][4],b2[50][4],c2[50][4];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s %s %s",a[i],b[i],c[i]);
			strcpy(a1[i],a[i]);
			strcpy(b1[i],b[i]);
			strcpy(c1[i],c[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				int s1=strlen(a1[i]);
				int s2=strlen(a1[j]);
				if(lexicographical_compare(a1[i],a1[i]+s1,a1[j],a1[j]+s2))
				{
				}
				else
				{
					char temp[4];
					strcpy(temp,a1[i]);
					strcpy(a1[i],a1[j]);
					strcpy(a1[j],temp);
				}
				s1=strlen(b1[i]);
				s2=strlen(b1[j]);
				if(lexicographical_compare(b1[i],b1[i]+s1,b1[j],b1[j]+s2))
				{
				}
				else
				{
					char temp[4];
					strcpy(temp,b1[i]);
					strcpy(b1[i],b1[j]);
					strcpy(b1[j],temp);
				}
			}
		}
		strcpy(a2[0],a1[0]);
		strcpy(b2[0],b1[0]);
		int count1=0,count2=0;
		for(i=0;i<n-1;i++)
		{
			if(strcmp(a1[i],a1[i+1])!=0)
			{
				count1++;
				strcpy(a2[count1],a1[i+1]);
			}
			if(strcmp(b1[i],b1[i+1])!=0)
			{
				count2++;
				strcpy(b2[count2],b1[i+1]);
			}
		}
		for(i=0;i<=count2+1;i++)
		{
			printf("+---");
		}
		printf("+\n|   ");
		for(i=0;i<=count2;i++)
		{
			printf("|%s",b2[i]);
			if(strlen(b2[i])!=3)
			{
				for(j=0;j<3-strlen(b2[i]);j++)
					printf(" ");
			}
		}
		printf("|\n");
		for(i=0;i<=count1;i++)
		{
			for(j=0;j<=count2+1;j++)
			{
				printf("+---");
			}
			printf("+\n|%s",a2[i]);
			if(strlen(a2[i])!=3)
			{
				for(k=0;k<3-strlen(a2[i]);k++)
					printf(" ");
			}
			for(j=0;j<=count2;j++)
			{
				int flag=0;
				for(k=0;k<n;k++)
				{
					if(strcmp(a[k],a2[i])==0 && strcmp(b[k],b2[j])==0)
					{
						flag=1;
						printf("|%s",c[k]);
						if(strlen(c[k])!=3)
						{
							for(l=0;l<3-strlen(c[k]);l++)
								printf(" ");
						}
						break;
					}
				}
				if(flag==0)
					printf("|   ");
			}
			printf("|");
			printf("\n");
		}
		for(i=0;i<=count2+1;i++)
		{
			printf("+---");
		}
		printf("+\n");
	}
	return 0;
}
