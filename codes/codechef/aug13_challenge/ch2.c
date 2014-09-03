#include<stdio.h>
#include<stdlib.h>
long long int mod;
long long fast_pow(int a,int n)
{
	long long result = 1;
	long long power = n;
	long long value = a;
	while(power>0)
	{
		if(power&1){
			result = result*value;
			result = result%mod;
		}
		value = value*value;
		value = value%mod;
		power >>= 1;
	}
	return result;
}

int main()
{
	int n,t,i,l,r,j,dif;
	long long int zz,m,b=1;;
	scanf("%d",&n);
	int a[n+1];
	int c[n+1][26];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<26;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		while(a[i]!=1)
		{
			if(a[i]%2==0)
			{
				a[i]/=2;
				c[i][0]++;
			}
			if(a[i]%3==0)
			{
				a[i]/=3;
				c[i][1]++;
			}
			if(a[i]%5==0)
			{
				a[i]/=5;
				c[i][2]++;
			}
			if(a[i]%7==0)
			{
				a[i]/=7;
				c[i][3]++;
			}
			if(a[i]%11==0)
			{
				a[i]/=11;
				c[i][4]++;
			}
			if(a[i]%13==0)
			{
				a[i]/=13;
				c[i][5]++;
			}
			if(a[i]%17==0)
			{
				a[i]/=17;
				c[i][24]++;
			}
			if(a[i]%19==0)
			{
				a[i]/=19;
				c[i][6]++;
			}
			if(a[i]%23==0)
			{
				a[i]/=23;
				c[i][7]++;
			}
			if(a[i]%29==0)
			{
				a[i]/=29;
				c[i][8]++;
			}
			if(a[i]%31==0)
			{
				a[i]/=31;
				c[i][9]++;
			}
			if(a[i]%37==0)
			{
				a[i]/=37;
				c[i][10]++;
			}
			if(a[i]%41==0)
			{
				a[i]/=41;
				c[i][11]++;
			}
			if(a[i]%43==0)
			{
				a[i]/=43;
				c[i][12]++;
			}
			if(a[i]%47==0)
			{
				a[i]/=47;
				c[i][13]++;
			}
			if(a[i]%53==0)
			{
				a[i]/=53;
				c[i][14]++;
			}
			if(a[i]%59==0)
			{
				a[i]/=59;
				c[i][15]++;
			}
			if(a[i]%61==0)
			{
				a[i]/=61;
				c[i][16]++;
			}
			if(a[i]%67==0)
			{
				a[i]/=67;
				c[i][17]++;
			}
			if(a[i]%71==0)
			{
				a[i]/=71;
				c[i][18]++;
			}
			if(a[i]%73==0)
			{
				a[i]/=73;
				c[i][19]++;
			}
			if(a[i]%79==0)
			{
				a[i]/=79;
				c[i][20]++;
			}
			if(a[i]%83==0)
			{
				a[i]/=83;
				c[i][21]++;
			}
			if(a[i]%89==0)
			{
				a[i]/=89;
				c[i][22]++;
			}
			if(a[i]%97==0)
			{
				a[i]/=97;
				c[i][23]++;
			}
		}
		c[i][0] = c[i][0] + c[i-1][0];
		c[i][1] = c[i][1] + c[i-1][1];
		c[i][2] = c[i][2] + c[i-1][2];
		c[i][3] = c[i][3] + c[i-1][3];
		c[i][4] = c[i][4] + c[i-1][4];
		c[i][5] = c[i][5] + c[i-1][5];
		c[i][24] = c[i][24] + c[i-1][24];
		c[i][6] = c[i][6] + c[i-1][6];
		c[i][7] = c[i][7] + c[i-1][7];
		c[i][8] = c[i][8] + c[i-1][8];
		c[i][9] = c[i][9] + c[i-1][9];
		c[i][10] = c[i][10] + c[i-1][10];
		c[i][11] = c[i][11] + c[i-1][11];
		c[i][12] = c[i][12] + c[i-1][12];
		c[i][13] = c[i][13] + c[i-1][13];
		c[i][14] = c[i][14] + c[i-1][14];
		c[i][15] = c[i][15] + c[i-1][15];
		c[i][16] = c[i][16] + c[i-1][16];
		c[i][17] = c[i][17] + c[i-1][17];
		c[i][18] = c[i][18] + c[i-1][18];
		c[i][19] = c[i][19] + c[i-1][19];
		c[i][20] = c[i][20] + c[i-1][20];
		c[i][21] = c[i][21] + c[i-1][21];
		c[i][22] = c[i][22] + c[i-1][22];
		c[i][23] = c[i][23] + c[i-1][23];
	}
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %lld",&l,&r,&m);
		mod = m;
		b = 1;
		if(mod==1)
		{
			printf("0\n");
		}
		else
		{
			if((c[r][0]-c[l-1][0])!=0)
			{
				dif = c[r][0] - c[l-1][0];
				zz = fast_pow(2,dif);
				b = (b*zz)%m;
			}
			if((c[r][1]-c[l-1][1])!=0)
			{
				dif = c[r][1] - c[l-1][1];
				zz = fast_pow(3,dif);
				b = (b*zz)%m;
			}
			if((c[r][2]-c[l-1][2])!=0)
			{
				dif = c[r][2] - c[l-1][2];
				zz = fast_pow(5,dif);
				b = (b*zz)%m;
			}
			if((c[r][3]-c[l-1][3])!=0)
			{
				dif = c[r][3] - c[l-1][3];
				zz = fast_pow(7,dif);
				b = (b*zz)%m;
			}
			if((c[r][4]-c[l-1][4])!=0)
			{
				dif = c[r][4] - c[l-1][4];
				zz = fast_pow(11,dif);
				b = (b*zz)%m;
			}
			if((c[r][5]-c[l-1][5])!=0)
			{
				dif = c[r][5] - c[l-1][5];
				zz = fast_pow(13,dif);
				b = (b*zz)%m;
			}
			if((c[r][24]-c[l-1][24])!=0)
			{
				dif = c[r][24] - c[l-1][24];
				zz = fast_pow(17,dif);
				b = (b*zz)%m;
			}
			if((c[r][6]-c[l-1][6])!=0)
			{
				dif = c[r][6] - c[l-1][6];
				zz = fast_pow(19,dif);
				b = (b*zz)%m;
			}
			if((c[r][7]-c[l-1][7])!=0)
			{
				dif = c[r][7] - c[l-1][7];
				zz = fast_pow(23,dif);
				b = (b*zz)%m;
			}
			if((c[r][8]-c[l-1][8])!=0)
			{
				dif = c[r][8] - c[l-1][8];
				zz = fast_pow(29,dif);
				b = (b*zz)%m;
			}
			if((c[r][9]-c[l-1][9])!=0)
			{
				dif = c[r][9] - c[l-1][9];
				zz = fast_pow(31,dif);
				b = (b*zz)%m;
			}
			if((c[r][10]-c[l-1][10])!=0)
			{
				dif = c[r][10] - c[l-1][10];
				zz = fast_pow(37,dif);
				b = (b*zz)%m;
			}
			if((c[r][11]-c[l-1][11])!=0)
			{
				dif = c[r][11] - c[l-1][11];
				zz = fast_pow(41,dif);
				b = (b*zz)%m;
			}
			if((c[r][12]-c[l-1][12])!=0)
			{
				dif = c[r][12] - c[l-1][12];
				zz = fast_pow(43,dif);
				b = (b*zz)%m;
			}
			if((c[r][13]-c[l-1][13])!=0)
			{
				dif = c[r][13] - c[l-1][13];
				zz = fast_pow(47,dif);
				b = (b*zz)%m;
			}
			if((c[r][14]-c[l-1][14])!=0)
			{
				dif = c[r][14] - c[l-1][14];
				zz = fast_pow(53,dif);
				b = (b*zz)%m;
			}
			if((c[r][15]-c[l-1][15])!=0)
			{
				dif = c[r][15] - c[l-1][15];
				zz = fast_pow(59,dif);
				b = (b*zz)%m;
			}
			if((c[r][16]-c[l-1][16])!=0)
			{
				dif = c[r][16] - c[l-1][16];
				zz = fast_pow(61,dif);
				b = (b*zz)%m;
			}
			if((c[r][17]-c[l-1][17])!=0)
			{
				dif = c[r][17] - c[l-1][17];
				zz = fast_pow(67,dif);
				b = (b*zz)%m;
			}
			if((c[r][18]-c[l-1][18])!=0)
			{
				dif = c[r][18] - c[l-1][18];
				zz = fast_pow(71,dif);
				b = (b*zz)%m;
			}
			if((c[r][19]-c[l-1][19])!=0)
			{
				dif = c[r][19] - c[l-1][19];
				zz = fast_pow(73,dif);
				b = (b*zz)%m;
			}
			if((c[r][20]-c[l-1][20])!=0)
			{
				dif = c[r][20] - c[l-1][20];
				zz = fast_pow(79,dif);
				b = (b*zz)%m;
			}
			if((c[r][21]-c[l-1][21])!=0)
			{
				dif = c[r][21] - c[l-1][21];
				zz = fast_pow(83,dif);
				b = (b*zz)%m;
			}
			if((c[r][22]-c[l-1][22])!=0)
			{
				dif = c[r][22] - c[l-1][22];
				zz = fast_pow(89,dif);
				b = (b*zz)%m;
			}
			if((c[r][23]-c[l-1][23])!=0)
			{
				dif = c[r][23] - c[l-1][23];
				zz = fast_pow(97,dif);
				b = (b*zz)%m;
			}
			printf("%lld\n",b);
		}
	}
	return 0;
}
