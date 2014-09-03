#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	while(n!=0)
	{
		scanf("%d",&a);
		if(a==1)
			printf("poor conductor\n");
		else if(a%10==1)
			printf("%d W L\n",2*(a/10));
		else if(a%10==2)
			printf("%d W L\n",2*(a/10)+1);
		else if(a%10==3)
			printf("%d A L\n",2*(a/10)+1);
		else if(a%10==4)
			printf("%d A R\n",2*(a/10)+1);
		else if(a%10==5)
			printf("%d M R\n",2*(a/10)+1);
		else if(a%10==6)
			printf("%d W R\n",2*(a/10)+1);
		else if(a%10==7)
			printf("%d W R\n",2*(a/10+1));
		else if(a%10==8)
			printf("%d M R\n",2*(a/10+1));
		else if(a%10==9)
			printf("%d A R\n",2*(a/10+1));
		else if(a%10==0)
			printf("%d A L\n",2*a/10);
		n--;
	}
	return 0;
}
