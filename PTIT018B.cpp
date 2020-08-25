#include <bits/stdc++.h>
#include <string>
using namespace std;
int a[10000],b[10000];
int main ()
{
	int n,num_array,kt=0;
	cin>>n;
	for(int v = 0; v < n; v++)
	{
		cin>>num_array;
		for(int i = 0; i < num_array; i++)
		{
			cin>>a[i];
		}
		for(int i = 0; i < num_array; i++)
		{
			cin>>b[i];
		}
		sort(a,a+num_array);
		cin>>n
		sort(b,b+num_array);
		for(int i = 0; i < num_array; i++)
		{
			if(b[i] < a[i])
			{
				kt = 1;
				break;
			}
		}
		if(kt == 0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}	
}
