#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n,z,c,x,d,e,arr[1000005],count,j;
	char a[1000005],b[1000005];
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		arr[0] = -1;
		e = 0;
		scanf("%s",a);
		d = strlen(a);
		for(i=0;i<d;i++)
		{
			arr[i+1] = a[i] - 48;
		//	printf("<<<%d>>>\n",arr[i]);
		}
		while(e==0)
		{
			x=0;
			c = strlen(a);
			count = strlen(a);
		//	printf("arr[c] = %d\n",arr[c]);
			if(arr[c]==9)
			{
				while(arr[c]==9)
				{
					arr[c] = 0;
					c--;
				}
				if(c==0)
					arr[c] = arr[c] + 2;
				else arr[c] = arr[c] + 1;
			}
			else
				arr[c] = arr[c] + 1;
//			for(i=0;i<=d;i++)
//				printf("%d",arr[i]);
//			printf("\n");
			if(arr[0] == -1)
			{
				for(i=1;i<=d/2;i++)
				{
					if(arr[i] == arr[count])
					{
						x++;
						count--;
					}
					else break;
				}
				if(x==(d/2))
				{
					for(j=1;j<=d;j++)
						printf("%d",arr[j]);
					printf("\n");
					e=1;
				}
				else e=0;
			}
			else
			{
				for(i=0;i<=d/2;i++)
				{
					if(arr[i] == arr[count])
					{
						x++;
						count--;
					}
					else break;
				}
				if(x==(d/2)+1)
				{
					for(j=0;j<=d;j++)
						printf("%d",arr[j]);
					printf("\n");
					e=1;
				}
				else e=0;
			}
		}
	}
	return 0;
}
