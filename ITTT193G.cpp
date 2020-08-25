#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main ()
{
	char s[100];
	int i, kt=0, dem;
	scanf("%s", s);
	for(i=0; i < strlen(s); i++)
	{
		if(s[i] >= 53)
		{
			s[i] = 57-s[i]+48;
		}
		if(s[i] == '0')
		{
			dem++;
		}
	}
	if(dem == strlen(s))
	printf("0");
	else
	for(i=0; i < strlen(s); i++)
	{
		if(kt == 0 && s[i] == '0')
		{
			continue;
		}
		else
		if(kt == 0)
		{
			kt = 1;
//			printf("%d\n", i);	
		}
		else
		int a;
		printf("%c", s[i]);
	}
	return 0;
}
