#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main ()
{
	char a[100];
	int i, n, k=0;
	scanf("%d", &n);
	scanf("%s", a);
	if(n < 3)
	{
		printf("0");
	}
	else
	{
			for(i=0; i <= n-3; i++)
			{
				if(a[i] == '0' && a[i+1] == '1' && a[i+2] == '0')
				{
					a[i+2] = '1';
					k++;
				}
			}
			printf("%d", k);
	}
	return 0;
}
