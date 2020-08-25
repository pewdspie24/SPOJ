#include <bits/stdc++.h>
#include <string>
#include <string.h>

#define N9 100000000
#define N5 100000
#define FOR(i,a,b) for(long long i = a; i < b; i++)
#define F0R(i,a,b) for(long long i = a; i <= b; i++)
#define TEST(n) for(long long SoTest = 0; SoTest < n; SoTest++)
#define pub push_back
#define pob pop_back

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

const double pi = 2*acos(0);
const double euler = 2.7182818284;

int n;
int a[N9];

void init(){
	 cin>>n;
	 for(int i=0; i < n; i++){
	 		 cin>>a[i];
	 }
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//	init();
	string s;
	ll tong;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>s;
		tong = 0;
		for(int j = 0; j < s.length(); j++)
		tong += s[j]-48;
		if(((s[s.length()-2]-48)*10+s[s.length()-1]-48) % 4 == 0 && tong % 9 == 0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}

