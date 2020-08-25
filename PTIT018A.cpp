#include <bits/stdc++.h>
#define N 9999999
int f[N];
using namespace std;
void era() 
{
	for(int i = 2; i < N; i++)
	{
		f[i] = 1;
	}
	for(int i = 2; i < sqrt(N); i++)
	{
		if( f[i] == 1)
		{
			for (int j = i*i; j < N; j = j+i )
			{
				f[j] = 0;
			}
		}
	}
}
int main ()
{
	int n,l,r;
	cin>>n;
	era();
	for(int i = 0; i < n; i++)
	{
		int dem = 0;
		cin>>l>>r;
		for(int j = l; j <= r-6; j++)
		{
			if(f[j] == 1 && f[j+6] == 1)
			dem++;
		}
		cout<<dem<<endl;
	}
}
