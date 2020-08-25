#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int n, i, j, k, temp;
	string s;
	char tmp;
	scanf("%d", &n);
	cin.ignore();
	for(i = 0; i < n; i++)
	{
		getline(cin,s);
		temp = s.length()-1;
		if(s.length() == 1)
		{
			cout<<s<<"ee"<<endl;
			continue;
		}
		else
		{
			for(j = 0; j <= temp; j++)
			{
				if(j == 0)
				{
					tmp = s[0]+32;
					if(s[j+1] == ' ')
					{
						s[j] = s[j+2]-32;
					}
					else
					{
						s[j] = s[j+1]-32;
					}
				}
				else
				if(j == temp)
				{
					s[j] = tmp;
					break;
				}
				else
				if(s[j] == ' ')
				{
					continue;
				}
				else
				{
					if(s[j+1] == ' ')
					{
						s[j] = s[j+2];
					}
					if(s[j+1] != ' ')
					{
						s[j] = s[j+1];
					}
				}
			}
			cout<<s<<"ee"<<endl;
		}
	}
}
