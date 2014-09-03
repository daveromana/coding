#include<stdio.h>
int main()
{
	int n,m,i;
	scanf("%d %d",&n,&m);
	printf("%d\n",n+m-1);
	int c1=1,c2=1;
	for(i=0;i<m;i++)
	{
		printf("%d %d\n",1,i+1);
	}
	for(i=1;i<n;i++)
		printf("%d %d\n",i+1,1);
	return 0;
}
