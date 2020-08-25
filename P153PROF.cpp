#include <bits/stdc++.h>
#define N 100000000
using namespace std;
int a[N];
int b[N];
int main ()
{
	int j;
	long long n;
	int dem=0;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	j = 0;
	for(int i = 0; j < n; i++)
	{
		if(b[j] > a[i])
		{
			dem++;
//			cout<<i<<endl;
			j++;
			continue;
		}
		else
		{
			while(b[j] <= a[i])
			j++;
			if(j == n-1 && b[j] <= a[i])
			break;
			else
			{
				dem++;
				j++;
			}
		}
	}
	cout<<dem;
}
