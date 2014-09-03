#include<stdio.h>
int main()
{
	int e,f,s,m,e1,f1,s1,m1;
	int max1,max2,max3,max4,max;
	scanf("%d%d%d%d%d%d%d%d",&e,&f,&s,&m,&e1,&f1,&s1,&m1);
	while(e!=-1)
	{
		if(e%e1==0)
			max1 = e/e1;
		else
			max1 = e/e1+1;
		if(f%f1==0)
			max2 = f/f1;
		else
			max2 = f/f1+1;
		if(s%s1==0)
			max3 = s/s1;
		else
			max3 = s/s1+1;
		if(m%m1==0)
			max4 = m/m1;
		else
			max4 = m/m1+1;
		if(max1>=max2 && max1>=max3 && max1>=max4)
			max = max1;
		else if(max2>=max1 && max2>=max3 && max2>=max4)
			max = max2;
		else if(max3>=max1 && max3>=max2 && max3>=max4)
			max = max3;
		else if(max4>=max1 && max4>=max2 && max4>=max3)
			max = max4;
		printf("%d %d %d %d\n",max*e1-e,max*f1-f,max*s1-s,max*m1-m);
		scanf("%d%d%d%d%d%d%d%d",&e,&f,&s,&m,&e1,&f1,&s1,&m1);
	}
	return 0;
}
