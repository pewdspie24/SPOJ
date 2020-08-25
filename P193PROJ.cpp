#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int i,a,b, n=3;
	int s[3];
	scanf("%d%d", &a, &b);
	for(i = 0; i < 3; i++)
	{
		scanf("%d", &s[i]);
	}
	sort(s,s+n);
	if(a>=b)
	{
		if(s[0] <= b && s[1] <= a && s[0]*s[0]+s[1]*s[1] == s[2]*s[2])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		if(s[0] <= a && s[1] <= b && s[0]*s[0]+s[1]*s[1] == s[2]*s[2])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
}
