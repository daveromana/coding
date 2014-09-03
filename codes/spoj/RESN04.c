#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	while(n!=0)
	{
		scanf("%d",&a);
		while(a!=0)
		{
			scanf("%d",&b);
			a--;
		}
		printf("ALICE\n");
		n--;
	}
	return 0;
}
