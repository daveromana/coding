#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i,n;
	char ss[6002];
	int ar[260];
	int count,flag;
	for(n=0;n<a;n++)
	{
		flag=0;
		count=0;
		for(i=0;i<260;i++)
		{
			ar[i] = 0;
		}
		scanf("%s",ss);
		for(i=0;i<strlen(ss);i++)
		{
			ar[ss[i]]++;
		}
		for(i=0;i<256;i++)
		{
			if(ar[i]%2!=0)
			{
				if(ar[i]==1)
				{
					count++;
				}
				else
				{
					if(flag == 0)
					{
						flag=1;
					}
					else
					{
						count++;
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
