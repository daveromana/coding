#include<stdio.h>
#include<string.h>
int main()
{
	int error,q,o,i,j,n,k,t,l,l2,a[105],b[105],d[105],s[105];
	char c[105];
	for(t=0;t<10;t++)
	{
		scanf("%s",c);
		l=strlen(c);
		for(i=0;i<l;i++)
			a[i]=c[i]-48;
		scanf("%s",c);
		l2=strlen(c);
		for(i=0;i<l-l2;i++)
			b[i]=0;
		for(i=0;i<l2;i++)
			b[i+l-l2]=c[i]-48;
		o=0;
		for(i=l-1;i>=0;i--)
		{
			s[i]=(a[i]+b[i]+o)%10;
			o=(a[i]+b[i]+o)/10;
		}
		q=0;
		for(i=l-1;i>=0;i--)
		{
			d[i]=a[i]-b[i]-q;
			if(d[i]<0)
			{
				q=1;
				d[i]=10+d[i];
			}
			else
				q=0;
		}
		for(i=0;i<l;i++)
		{
			a[i]=(s[i]+(o*10))/2;
			o=s[i]%2;
		}
		o=0;
		for(i=0;i<l;i++)
		{
			b[i]=(d[i]+(o*10))/2;
			o=d[i]%2;
		}
		o=0;
		error=1;
		for(i=0;i<l;i++)
		{
			if(a[i]!=0)
				error=0;
			if(error!=1)
				printf("%d",a[i]);
		}
		printf("\n");
		error=1;
		for(i=0;i<l;i++)
		{
			if(b[i]!=0)
				error=0;
			if(error!=1)
				printf("%d",b[i]);
		}
		if(error==1)
			printf("0");
		printf("\n");
	}
	return 0;
}
