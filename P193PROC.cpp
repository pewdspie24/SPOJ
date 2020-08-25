#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
char s[100000];
int c[1000];
int main ()
{
	int i, j, kt=0, tmp=0, tong=0;
	scanf("%s", s);
	for(i=97; i <= 122; i++)
	{
		c[i] = 0;
	}
	for(i=0; i < strlen(s); i++)
	{
		if(c[s[i]] == 0)
		{
			c[s[i]] = 1;
			kt++;
		}
		else
		{
			c[s[i]]++;
		}
	}
	if(kt <= 2)
	printf("0");
	else
	{
		sort(c+97,c+123);
		i=0;
		for(i=97; i <= 122; i++)
		{
			if(c[i] != 0)
			{
				tmp = i;
				break;
			}
		}
		while(kt > 2)
		{
			tong = tong+c[tmp];
			kt--;
			tmp++;
			if(kt == 2)
			break;
		}
		printf("%d", tong);
	}
	return 0;
}	
