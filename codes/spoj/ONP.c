/*#include<stdio.h>
#include<string.h>
int main()
{
	char a[405],a1[405];
	int b,i,k,n;
	scanf("%d",&n);
	while(n!=0)
	{
		k=0;
		scanf("%s",a);
		b=strlen(a);
		for(i=0;i<b;i++)
		{
			if(a[i]>=97 && a[i]<=122)
				printf("%c",a[i]);
			else if(a[i]==')')
			{
				k--;
				while(a1[k]!='(')
				{
					printf("%c",a1[k]);
					k--;
				}
			}
			else
			{
				a1[k]=a[i];
				k++;
			}
		}
		printf("\n");
		n--;
	}
	return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[405],a1[405];
	int b,i,k,n;
	scanf("%d",&n);
	while(n!=0)
	{
		k=0;
		scanf("%s",a);
		b=strlen(a);
		for(i=0;i<b;i++)
		{
			if(a[i]>=97 && a[i]<=122)
				printf("%c",a[i]);
			else
			{
				if(a[i]==')')
				{
					printf("%c",a1[k-1]);
					k-=2;
				}
				else
				{
					a1[k]=a[i];
					k++;
				}
			}
		}
		printf("\n");
		n--;
	}
	return 0;
}
