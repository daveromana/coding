#include<stdio.h>
#include<math.h>
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
	int c[n+1][101];
	for(i=0;i<=n;i++)
		for(j=0;j<101;j++)
			c[i][j]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		while(a[i]!=1)
		{
			if(a[i]%2==0)
			{
				a[i]/=2;
				c[i][2]++;
			}
			if(a[i]%3==0)
			{
				a[i]/=3;
				c[i][3]++;
			}
			if(a[i]%5==0)
			{
				a[i]/=5;
				c[i][5]++;
			}
			if(a[i]%7==0)
			{
				a[i]/=7;
				c[i][7]++;
			}
			if(a[i]%11==0)
			{
				a[i]/=11;
				c[i][11]++;
			}
			if(a[i]%13==0)
			{
				a[i]/=13;
				c[i][13]++;
			}
			if(a[i]%17==0)
			{
				a[i]/=17;
				c[i][17]++;
			}
			if(a[i]%19==0)
			{
				a[i]/=19;
				c[i][19]++;
			}
			if(a[i]%23==0)
			{
				a[i]/=23;
				c[i][23]++;
			}
			if(a[i]%29==0)
			{
				a[i]/=29;
				c[i][29]++;
			}
			if(a[i]%31==0)
			{
				a[i]/=31;
				c[i][31]++;
			}
			if(a[i]%37==0)
			{
				a[i]/=37;
				c[i][37]++;
			}
			if(a[i]%41==0)
			{
				a[i]/=41;
				c[i][41]++;
			}
			if(a[i]%43==0)
			{
				a[i]/=43;
				c[i][43]++;
			}
			if(a[i]%47==0)
			{
				a[i]/=47;
				c[i][47]++;
			}
			if(a[i]%53==0)
			{
				a[i]/=53;
				c[i][53]++;
			}
			if(a[i]%59==0)
			{
				a[i]/=59;
				c[i][59]++;
			}
			if(a[i]%61==0)
			{
				a[i]/=61;
				c[i][61]++;
			}
			if(a[i]%67==0)
			{
				a[i]/=67;
				c[i][67]++;
			}
			if(a[i]%71==0)
			{
				a[i]/=71;
				c[i][71]++;
			}
			if(a[i]%73==0)
			{
				a[i]/=73;
				c[i][73]++;
			}
			if(a[i]%79==0)
			{
				a[i]/=79;
				c[i][79]++;
			}
			if(a[i]%83==0)
			{
				a[i]/=83;
				c[i][83]++;
			}
			if(a[i]%89==0)
			{
				a[i]/=89;
				c[i][89]++;
			}
			if(a[i]%97==0)
			{
				a[i]/=97;
				c[i][97]++;
			}
		}
		c[i][2] = c[i][2] + c[i-1][2];
		c[i][3] = c[i][3] + c[i-1][3];
		c[i][5] = c[i][5] + c[i-1][5];
		c[i][7] = c[i][7] + c[i-1][7];
		c[i][11] = c[i][11] + c[i-1][11];
		c[i][13] = c[i][13] + c[i-1][13];
		c[i][17] = c[i][17] + c[i-1][17];
		c[i][19] = c[i][19] + c[i-1][19];
		c[i][23] = c[i][23] + c[i-1][23];
		c[i][29] = c[i][29] + c[i-1][29];
		c[i][31] = c[i][31] + c[i-1][31];
		c[i][37] = c[i][37] + c[i-1][37];
		c[i][41] = c[i][41] + c[i-1][41];
		c[i][43] = c[i][43] + c[i-1][43];
		c[i][47] = c[i][47] + c[i-1][47];
		c[i][53] = c[i][53] + c[i-1][53];
		c[i][59] = c[i][59] + c[i-1][59];
		c[i][61] = c[i][61] + c[i-1][61];
		c[i][67] = c[i][67] + c[i-1][67];
		c[i][71] = c[i][71] + c[i-1][71];
		c[i][73] = c[i][73] + c[i-1][73];
		c[i][79] = c[i][79] + c[i-1][79];
		c[i][83] = c[i][83] + c[i-1][83];
		c[i][89] = c[i][89] + c[i-1][89];
		c[i][97] = c[i][97] + c[i-1][97];
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
			if((c[r][2]-c[l-1][2])!=0)
			{
				dif = c[r][2] - c[l-1][2];
				zz = fast_pow(2,dif);
				b = (b*zz)%m;
			}
			if((c[r][3]-c[l-1][3])!=0)
			{
				dif = c[r][3] - c[l-1][3];
				zz = fast_pow(3,dif);
				b = (b*zz)%m;
			}
			if((c[r][5]-c[l-1][5])!=0)
			{
				dif = c[r][5] - c[l-1][5];
				zz = fast_pow(5,dif);
				b = (b*zz)%m;
			}
			if((c[r][7]-c[l-1][7])!=0)
			{
				dif = c[r][7] - c[l-1][7];
				zz = fast_pow(7,dif);
				b = (b*zz)%m;
			}
			if((c[r][11]-c[l-1][11])!=0)
			{
				dif = c[r][11] - c[l-1][11];
				zz = fast_pow(11,dif);
				b = (b*zz)%m;
			}
			if((c[r][13]-c[l-1][13])!=0)
			{
				dif = c[r][13] - c[l-1][13];
				zz = fast_pow(13,dif);
				b = (b*zz)%m;
			}
			if((c[r][17]-c[l-1][17])!=0)
			{
				dif = c[r][17] - c[l-1][17];
				zz = fast_pow(17,dif);
				b = (b*zz)%m;
			}
			if((c[r][19]-c[l-1][19])!=0)
			{
				dif = c[r][19] - c[l-1][19];
				zz = fast_pow(19,dif);
				b = (b*zz)%m;
			}
			if((c[r][23]-c[l-1][23])!=0)
			{
				dif = c[r][23] - c[l-1][23];
				zz = fast_pow(23,dif);
				b = (b*zz)%m;
			}
			if((c[r][29]-c[l-1][29])!=0)
			{
				dif = c[r][29] - c[l-1][29];
				zz = fast_pow(29,dif);
				b = (b*zz)%m;
			}
			if((c[r][31]-c[l-1][31])!=0)
			{
				dif = c[r][31] - c[l-1][31];
				zz = fast_pow(31,dif);
				b = (b*zz)%m;
			}
			if((c[r][37]-c[l-1][37])!=0)
			{
				dif = c[r][37] - c[l-1][37];
				zz = fast_pow(37,dif);
				b = (b*zz)%m;
			}
			if((c[r][41]-c[l-1][41])!=0)
			{
				dif = c[r][41] - c[l-1][41];
				zz = fast_pow(41,dif);
				b = (b*zz)%m;
			}
			if((c[r][43]-c[l-1][43])!=0)
			{
				dif = c[r][43] - c[l-1][43];
				zz = fast_pow(43,dif);
				b = (b*zz)%m;
			}
			if((c[r][47]-c[l-1][47])!=0)
			{
				dif = c[r][47] - c[l-1][47];
				zz = fast_pow(47,dif);
				b = (b*zz)%m;
			}
			if((c[r][53]-c[l-1][53])!=0)
			{
				dif = c[r][53] - c[l-1][53];
				zz = fast_pow(53,dif);
				b = (b*zz)%m;
			}
			if((c[r][59]-c[l-1][59])!=0)
			{
				dif = c[r][59] - c[l-1][59];
				zz = fast_pow(59,dif);
				b = (b*zz)%m;
			}
			if((c[r][61]-c[l-1][61])!=0)
			{
				dif = c[r][61] - c[l-1][61];
				zz = fast_pow(61,dif);
				b = (b*zz)%m;
			}
			if((c[r][67]-c[l-1][67])!=0)
			{
				dif = c[r][67] - c[l-1][67];
				zz = fast_pow(67,dif);
				b = (b*zz)%m;
			}
			if((c[r][71]-c[l-1][71])!=0)
			{
				dif = c[r][71] - c[l-1][71];
				zz = fast_pow(71,dif);
				b = (b*zz)%m;
			}
			if((c[r][73]-c[l-1][73])!=0)
			{
				dif = c[r][73] - c[l-1][73];
				zz = fast_pow(73,dif);
				b = (b*zz)%m;
			}
			if((c[r][79]-c[l-1][79])!=0)
			{
				dif = c[r][79] - c[l-1][79];
				zz = fast_pow(79,dif);
				b = (b*zz)%m;
			}
			if((c[r][83]-c[l-1][83])!=0)
			{
				dif = c[r][83] - c[l-1][83];
				zz = fast_pow(83,dif);
				b = (b*zz)%m;
			}
			if((c[r][89]-c[l-1][89])!=0)
			{
				dif = c[r][89] - c[l-1][89];
				zz = fast_pow(89,dif);
				b = (b*zz)%m;
			}
			if((c[r][97]-c[l-1][97])!=0)
			{
				dif = c[r][97] - c[l-1][97];
				zz = fast_pow(97,dif);
				b = (b*zz)%m;
			}
			printf("%lld\n",b);
		}
	}
	return 0;
}
