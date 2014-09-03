#include<stdio.h>
#include<string.h>
int main()
{
	char *ref[20];
	ref[0]="S\0";
	ref[1]=".\0";
	ref[2]="..\0";
	ref[3]="...\0";
	ref[4]="....\0";
	ref[5]="-\0";
	ref[6]=". -\0";
	ref[7]=".. -\0";
	ref[8]="... -\0";
	ref[9]=".... -\0";
	ref[10]="- -\0";
	ref[11]=". - -\0";
	ref[12]=".. - -\0";
	ref[13]="... - -\0";
	ref[14]=".... - -\0";
	ref[15]="- - -\0";
	ref[16]=". - - -\0";
	ref[17]=".. - - -\0";
	ref[18]="... - - -\0";
	ref[19]=".... - - -\0";
	int i;
	int n;
	scanf("%d",&n);
	int dec[7]={1,20,360,7200,144000,2880000,57600000};
	while(n!=0)
	{
		int ct=n;
		long long int num=0;
		char a;
		scanf("%c",&a);
		while(ct!=0)
		{
			ct--;
			char strng[20];
			scanf("%[^\n]",strng);
			scanf("%c",&a);
			for(i=0;i<20;i++)
			{
				if(strcmp(ref[i],strng)==0)
				{break;}
			}
			num=num+dec[ct]*i;
		}
		printf("%lld\n",num);
		scanf("%c",&a);
		scanf("%d",&n);
	}
	return 0;
}
