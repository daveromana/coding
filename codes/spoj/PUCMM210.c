#include<stdio.h>
int main()
{
/*	long long int n,a,i;
	long long int sum;
	scanf("%lld",&n);
	while(n!=0)
	{
		sum=0;
		scanf("%lld",&a);
		for(i=1;i<=a;i++){}
			sum=(sum+(((((i*i)%1000000003)*(((i+1)*(i+1))%1000000003))%1000000003)/4)%1000000003)%1000000003;
		printf("%lld\n",sum);
		n--;
	}*/
	long long int sum = 0,n,a;
	scanf("%lld",&n);
	long long int ar[1000001];
	long long int i,j;
//	for(j=1;j<=1000000;j++)//0000;j++)
//	{
	/*	sum = 0;
		for(i=1;i<=1000000;i++)
		{
			sum=(sum+(((((i*(i+1)/2)%1000000003)*(((i)*(i+1)/2)%1000000003))%1000000003))%1000000003)%1000000003;
			ar[i] = sum;
			printf("ar[%lld] = %lld;",i,sum);
		}*/
//	}
	while(n!=0)
	{
		scanf("%lld",&a);
		printf("%lld\n",ar[a]);
		n--;
	}
	return 0;
}
