#include<stdio.h>
#include<string.h>
int main()
{
	char aa[1001],flag[2005][2005];
	int b,i,j,x,y,count;
	while(1)
	{
		scanf("%s",aa);
		count = 0;
		b=0;
		if(strcmp(aa,"Q")==0)
			break;
		for(i=0;i<(2*strlen(aa)+2);i++)
		{
			for(j=0;j<(2*strlen(aa)+2);j++)
			{
				flag[i][j] = '0';
			}
		}
		x=strlen(aa);
		y=strlen(aa);
		flag[x][y]='1';
		while(1)
		{
			if(aa[b]=='Q')
				break;
			if(aa[b]=='U')
			{
				y+=1;
			}
			if(aa[b]=='D')
			{
				y-=1;
			}
			if(aa[b]=='L')
			{
				x-=1;
			}
			if(aa[b]=='R')
			{
				x+=1;
			}
			if(flag[x][y]=='1')
			{
				count++;
			}
			flag[x][y]='1';
			b++;
		}
		printf("%d\n",count);
	}
	return 0;
}
