#include<stdio.h>
#include<string.h>
int main()
{
	char in1[1000],in2[1000],out[1000],temp;
	int i,j,a,b,k;
	while( scanf("%s\n%s",in1,in2) != EOF )
	{
		k=0;
		out[k]='\0';
		a=strlen(in1);
		b=strlen(in2);
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				if(in1[i]==in2[j])
				{
					out[k] = in1[i];
					out[k+1] = '\0';
					k++;
					in2[j] = '1';
					break;
				}
			}
		}
		a = strlen(out);
		for(i=0;i<a;i++)
		{
			for(j=i;j<a;j++)
			{
				if(out[i]>out[j])
				{
					temp = out[i];
					out[i] = out[j];
					out[j] = temp;
				}
			}
		}
		printf("%s\n",out);
	}
	return 0;
}
