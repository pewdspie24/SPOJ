#include <bits/stdc++.h>
#include <string>
using namespace std;
int main ()
{
	string s1,s2;
	int n1,n2,k=0, kt=0;
	int a1[100],a2[100];
	while(1)
	{
		kt = 0;
		for(int i = 0; i < 30; i++)
		{
			a1[i] = 0;
			a2[i] = 0;
		}
		k++;
		cin>>s1>>s2;
//		cout<<s1<<" "<<s2;
		n1=s1.length();
		n2=s2.length();
		if(n1 != n2)
		{
			cout<<"Case "<<k<<": different"<<endl;
			continue;
		}
		else if(n1 == 3)
		{
			if(s1[0] == 'E' && s1[1] == 'N' && s1[2] == 'D' && s2[0] == 'E' && s2[1] == 'N' && s2[2] == 'D')
			break;
		}
		for(int i = 0; i < n1; i++)
		{	
			a1[s1[i]-97]++;
			a2[s2[i]-97]++;
		}
		for(int i = 0; i < 30; i++)
		{
			if(a1[i] != a2[i])
			{
				kt=1;
				break;
			}
		}
		if(kt == 1)
		cout<<"Case "<<k<<": different"<<endl;
		else
		cout<<"Case "<<k<<": same"<<endl;
	}
}
