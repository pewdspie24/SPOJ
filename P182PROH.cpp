#include <bits/stdc++.h>
#include <string>
using namespace std;
int main ()
{
	string s;
	getline(cin,s);
	if(s[8] == 'A')
	{
		if(s[0] == '1' && s[1] == '2')
		{
			s[0] = '0';
			s[1] = '0';
		}
		for(int i=0; i < 8; i++)
		cout<<s[i];	
	}
	else
	{
		if(s[0] == '1' && s[1] == '2')
		{
			for(int i=0; i < 8; i++)
			cout<<s[i];	
		}
		else
		{ 	
			s[1]=s[1]+2;
			s[0] = s[0]+1;
			if(s[1] > '9')
			{
				s[1] = s[1]-10;
				s[0] = s[0]+1;
			}
			for(int i=0; i < 8; i++)
			cout<<s[i];
		}
	}
	return 0;
}
