#include<stdio.h>
#include<math.h>
int main()
{
	long long int i,n,x,p,y,z,d,d1,d2,a,m,a1,a2,m1,m2;
	scanf("%lld",&n);
	while(n!=0)
	{
		scanf("%lld%lld%lld",&x,&y,&z);
	/*	p=(((5*x) + (7*y) - (2*z))*((5*x) + (7*y) - (2*z)))-(24*((y*y)-(x*x)));
		d1=((-1*sqrt(p))-((5*x) + (7*y) - (2*z)));
		d2=((1*sqrt(p))-((5*x) + (7*y) - (2*z)));
		if(d1%12==0)
			d=d1/12;
		else
			d=d2/12;
		a=x-(2*d);
		if(d==0)
		{
			p = (((7*x)+(5*y))*((7*x)+(5*y)))+(48*z);
			m = (-(7*x)-(5*y)+sqrt(p))/2;
		}
		else
		{
			m=((y-a)/d)+4;
		}
		printf("%lld\n",m);
		for(i=0;i<m;i++)
		{
			if(i==m-1)
				printf("%lld",a+(d*i));
			else
				printf("%lld ",a+(d*i));
		}
		printf("\n");*/

/*		p = (((7*x)+(5*y))*((7*x)+(5*y)))+(48*z);
		m = (-(7*x)-(5*y)+sqrt(p))/2;
		d = (m + x - y)/6;
		a = x-(2*d);
		printf("%lld\n",m);
		for(i=0;i<m;i++)
		{
			if(i==m-1)
				printf("%lld",a+(d*i));
			else
				printf("%lld ",a+(d*i));
		}
		printf("\n");*/


		p = (((2*z)-(11*x)-(7*y))*((2*z)-(11*x)-(7*y)))-(12*(((2*x)+y)*((3*x)+(2*y))-(2*x*z)));
	//	printf("p=%lld\n",a1);
		a1 = (((11*x)+(7*y)-(2*z))+sqrt(p))/6;
	//	printf("a1=%lld\n",a1);
		a2 = (((11*x)+(7*y)-(2*z))-sqrt(p))/6;
	//	printf("a2=%lld\n",a2);
		d1 = (x-a1)/2;
	//	printf("d1=%lld\n",d1);
		d2 = (x-a2)/2;
	//	printf("d2=%lld\n",d2);
		m1 = ((y-a1)/d1)+4;
	//	printf("m1=%lld\n",m1);
		m2 = ((y-a2)/d2)+4;
	//	printf("m2=%lld\n",m2);
		if(m1>=7)
		{
			a=a1;d=d1;m=m1;
		}
		else
		{
			a=a2;d=d2;m=m2;
		}
		printf("%lld\n",m);
		for(i=0;i<m;i++)
		{
			if(i==m-1)
				printf("%lld",a+(d*i));
			else
				printf("%lld ",a+(d*i));
		}
		printf("\n");
		n--;
	}
	return 0;
}
