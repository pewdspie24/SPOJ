#include <bits/stdc++.h>
using namespace std;
int SumDiv (int Test)
{
	long long j,Sum;
	Sum = 0;
	for(j=1; j<=sqrt(Test); j++)
	{
		if(Test % j == 0)
		{
			Sum = Sum+j+Test/j;
			if(j*j == Test) Sum=Sum-j;
		}
	}
	return Sum;
}
int main ()
{
	long long i;
	long long n;
	cin>>n;
	for(i=1; i <= n; i++)
	{
		if(SumDiv(i) - i == i)
		cout<<i<<" ";
	}
	return 0;
}

