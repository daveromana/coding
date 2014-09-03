#include<stdio.h>
int main()
{
	int testcase,vo,vn,noc,i,min,j;
	scanf("%d",&testcase);
	while(testcase>0)
	{
		min = 1700;
		scanf("%d%d",&vo,&vn);
		scanf("%d",&noc);
		int o[noc],n[noc],w[noc];
		for(i=0;i<noc;i++)
			scanf("%d%d%d",&o[i],&n[i],&w[i]);
		for(i=0;i<noc;i++)
		{
			for(j=i+1;j<noc;j++)
			{
				if(o[i]+o[j]>=vo && n[i]+n[j]>=vn)
				{
					if(min>w[i]+w[j])
						min = w[i] + w[j];
				}
			}
		}
		printf("%d\n",min);
		testcase--;
	}
	return 0;
}
