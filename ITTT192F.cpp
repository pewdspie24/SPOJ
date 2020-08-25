#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
	char s[101][101];
	int r,c,i, j, k, o;
	char n;
	int r1,c1,r2,c2;
	scanf("%d%d%d", &r, &c, &i);
	for(j = 1; j <= r; j++)
	for(k = 1; k <= c; k++)
	{
		s[j][k] = '.';
	}
	for(j = 0; j < i; j++)
	{
		scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
		cin.ignore();
		scanf("%c", &n);
		cin.ignore();
		for(k = r1; k <= r2; k++)
		for(o = c1; o <= c2; o++)
		{
			s[k][o] = n;
		}
	}
	for(j = 1; j <= r; j++)
	{
		for(k = 1; k <= c; k++)
		{
			printf("%c", s[j][k]);
		}
		printf("\n");
	}
	return 0;
}
