#include<bits/stdc++.h>
#include<string>
#include<string.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define N9 100000000
#define N5 100000
#define FOR(i,a,b) for(long long i = a; i < b; i++)
#define F0R(i,a,b) for(long long i = a; i > b; i++)
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

int ABS(int n){
	if(n < 0)
	return 0-n;
	else
	return n;
}

int main(){
	faster();
	//init();
	string s1;
	int kt;
	cin>>n;
	TEST(n)
	{
		kt = 0;
		cin>>s1;
		for(int i = s1.length()-1; i > 0; i--)
		{
//			cout<<s1[s1.length()-i]<<" ";
			if(ABS(s1[i] - s1[i-1]) != ABS(s1[s1.length()-1-i] - s1[s1.length()-i]))
			{
				kt=1;
				break;
			}
		}
		if(kt == 1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	return 0;
}

