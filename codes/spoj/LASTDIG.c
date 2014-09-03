#include<stdio.h>
int main()
{
	int n,i,a,b,c,arr[11];
	scanf("%d",&n);
	while(n!=0)
	{
		i=0;
		scanf("%d%d",&a,&b);
		arr[0] = a%10;
		c = arr[0]*arr[0];
		i++;
		arr[i] = c%10;
		while(arr[i]!=arr[0])
		{
			i++;
			c=c*arr[0];
			arr[i] = c%10;
		}
		if(b==0)
			printf("1\n");
		else if(i>1)
		{
			if(b%i!=0)
				printf("%d\n",arr[b%i-1]);
			else
				printf("%d\n",arr[i-1]);
		}
		else
			printf("%d\n",arr[i]);
		n--;
	}
	return 0;
}
