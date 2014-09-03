#include<stdio.h>
int main()
{
	unsigned long long int test,run;
	scanf("%llu",&test);
	for(run=0;run<test;run++)
	{
		unsigned long long int n;
		scanf("%llu",&n);
		unsigned long long int  ct=n/4,ctt=n%4;
		unsigned long long int i[4]={942,192,442,692};
		if(ctt==0)
			ct=ct-1;
		if(ct)
			printf("%llu",ct);
		printf("%llu\n",i[ctt]);
	}
	return 0;
}
