#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,r,c,b,i,j,count,k,left,right,top,bottom,min;
	char **arr;
	scanf("%d",&t);
	for(b=0;b<t;b++)
	{
		left=0;right=0;top=0;bottom=0;
		count = 0;
		scanf("%d %d",&r,&c);
		arr = (char**)malloc(sizeof(char*)*r);
		for(i=0;i<r;i++)
		{
			arr[i] = (char*)malloc(sizeof(char)*c);
			scanf("%s",arr[i]);
		}
		for(i=1;i<r-1;i++)
		{
			for(j=1;j<c-1;j++)
			{
				left=0;right=0;top=0;bottom=0;
				if(arr[i][j]!='#')
				{
					for(k=i-1;k>=0;k--)
					{
						if(arr[k][j]=='^')
						{
							top++;
						}
						else break;
					}
					for(k=i+1;k<r;k++)
					{
						if(arr[k][j]=='^')
						{
							bottom++;
						}
						else break;
					}
					for(k=j-1;k>=0;k--)
					{
						if(arr[i][k]=='^')
						{
							left++;
						}
						else break;
					}
					for(k=j+1;k<c;k++)
					{
						if(arr[i][k]=='^')
						{
							right++;
						}
						else break;
					}
					if(top<bottom)
						min=top;
					else min=bottom;
					if(left<min)
						min=left;
					if(right<min)
						min=right;
				//	printf("l=%d r=%d t=%d b=%d min=%d\n",min,left,right,top,bottom);
					if(min>=2)
					{
						for(k=2;k<=min;k++)
						{
							if(k==2 || k==3 || k==5 || k==7 || k==11 || k==13 || k==17 || k==19 || k==23 || k==29 || k==31 || k==37 || k==41 || k==43 || k==47)
							{
					//			printf("i=%d j=%d\n",i,j);
								count++;
								break;
							}
						}
					}
				}
			}
		}
		printf("%d\n",count);
		free(arr);
	}
	return 0;
}
