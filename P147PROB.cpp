#include <bits/stdc++.h>
#include <string>
using namespace std;
int main ()
{
	double a[1000], tong,n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		tong += a[i];
	}
//	cout.precision(14);	cout<<tong/n<<endl;
	printf("%.12lf", tong/n);
}
