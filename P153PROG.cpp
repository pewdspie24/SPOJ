#include <bits/stdc++.h>
using namespace std;
int main ()
{
	long long n,k;
	cin>>n>>k;
	long long le=n/2+(n%2);
	if(k<=le){
		cout<<1+2*(k-1);
	}
	else{
		cout<<(k-le)*2;
	}
}
