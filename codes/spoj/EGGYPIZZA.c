#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,i=0,j=0,k=0,result;
	char c;
	while(n!=0)
	{
		scanf("%d%c%d",&a,&c,&b);
		if(a==1 && b==4)
			i++;
		if(a==1 && b==2)
			j++;
		if(a==3 && b==4)
			k++;
		n--;
	}
	if(j%2!=0)
		i-=2;
	i=i-k;
	if(i<0)
		i=0;
	if(i>4)
		i=i/4+1;
	result = ((j+1)/2) + i + k + 1;
	printf("%d\n",result);
	return 0;
}
