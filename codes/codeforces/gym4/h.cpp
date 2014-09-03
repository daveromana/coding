#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;
typedef struct point
{
	int x;
	int y;
}point;

bool IsOverLap(point atop1,point abuttom1, point atop2, point abuttom2)
{
	if ((atop1.x <= atop2.x && abuttom2.x <= abuttom1.x) &&(atop1.y >= atop2.y && abuttom2.y >= abuttom1.y))
	{
		return true;
	}
	else
	{
		if ((atop2.x<= atop1.x && abuttom1.x <= abuttom2.x) &&(atop2.y >= atop1.y && abuttom1.y >= abuttom2.y))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int fx,fy;
	int nt;
	point top1,top2,buttom1,buttom2;
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&fx,&fy);
		scanf("%d",&nt);
		int tlxx[nt],tlyy[nt],trxx[nt],tryy[nt];
		for(j=0;j<nt;j++)
			scanf("%d %d %d %d",&tlxx[j],&tlyy[j],&trxx[j],&tryy[j]);

		int flag=0;
		for(j=0;j<nt;j++)
		{
			for(k=0;k<nt;k++)
			{
				if(j!=k)
				{
					int RectAX1=tlxx[j];
					int RectBX2=trxx[k];
					int RectAX2=trxx[j];
					int RectBX1=tlxx[k];
					int RectAY1=tlyy[j];
					int RectBY2=tryy[k];
					int RectAY2=tryy[j];
					int RectBY1=tlyy[k];


					if (RectAX1 < RectBX2 && RectAX2 > RectBX1 && RectAY1 < RectBY2 && RectAY2 > RectBY1)
					{
						flag=1;
						break;
					}
				}

				/*if( (tlxx[j]>tlxx[k] && tlxx[j]<trxx[k]) && (tlyy[j]>tlyy[k] && tlyy[j]<tryy[k]) )
				{
					flag=1;
					break;
				}
				if( (trxx[j]>tlxx[k] && trxx[j]<trxx[k]) && (tryy[j]>tlyy[k] && tryy[j]<tryy[k]) )
				{
					flag=1;
					break;
				}

				if( (tlxx[k]>tlxx[j] && tlxx[k]<trxx[j]) && (tlyy[k]>tlyy[j] && tlyy[k]<tryy[j]) )
				{
					flag=1;
					break;
				}
				if( (trxx[k]>tlxx[j] && trxx[k]<trxx[j]) && (tryy[k]>tlyy[j] && tryy[k]<tryy[j]) )
				{
					flag=1;
					break;
				}*/

			}
			if(flag==1)
			{
				break;
			}
		}
		if(flag==1)
		{
			printf("NONDISJOINT\n");
			continue;
		}
		for(j=0;j<nt;j++)
		{
			if( tlxx[j]<0 || tlyy[j]<0 || trxx[j]>fx || tryy[j]>fy )
			{
				flag=2;
				break;
			}
		}
		if(flag==2)
		{
			printf("NONCONTAINED\n");
			continue;
		}
		long long int area=0,aaa=fx*fy;
		for(j=0;j<nt;j++)
		{
			area=area+( (fabs(trxx[j]-tlxx[j])) * (fabs(tryy[j]-tlyy[j])) );
		}
		if(area!=(aaa))
		{
			printf("NONCOVERING\n");
		}
		else
		{
			printf("OK\n");
		}
	}
	return 0;
}
