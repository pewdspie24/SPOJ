#include <bits/stdc++.h>
#include <string>
using namespace std;
int main ()
{
	string s1,s2,s3,s4;
	int nho = 0;
	cin>>s1>>s2;
	if(s1.length()-s2.length() >0)
	{
		for(int i = 0; i < s1.length(); i++)
		{
			if(i < s1.length()-s2.length())
			s4[i] = '0';
			else
			s4[i] = s2[i-(s1.length()-s2.length())];
		}
		for(int i = s1.length()-1; i >= 0; i--)
		{
			if(s1[i] - s4[i] - nho < 0)
			{
				s3[i] = s1[i]-s4[i]-nho+10;
				nho=1;
			}
			else
			{
				s3[i] = s1[i]-s4[i]-nho;
				nho=0;
			}
		}
		for(int i = s1.length()-1; i >= 0; i--)
		cout<<s4[i];
	}
}
