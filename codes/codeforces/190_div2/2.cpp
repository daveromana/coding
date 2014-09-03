#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	long long int ans1,ans2,r,g,b,r1,r2,r3;
	cin >> r >> g >> b;
	r1=r;r2=g;r3=b;
	ans1=((r1/3)+(r2/3)+(r3/3));
	int min;
	if((r1%3)<(r2%3))
		min=r1%3;
	else min=r2%3;
	if(min>(r3%3))
		min=r3%3;
	ans1+=min;

	ans2=0;
	if(r1>0 && r2>0 && r3>0)
	{
		ans2=1;
		r1--;
		r2--;
		r3--;

		ans2+=((r1/3)+(r2/3)+(r3/3));
		if((r1%3)<(r2%3))
			min=r1%3;
		else min=r2%3;
		if(min>(r3%3))
			min=r3%3;
		ans2+=min;
	}
	if(ans1>ans2)
		cout << ans1 << endl;
	else
		cout << ans2 << endl;
	return 0;
}
