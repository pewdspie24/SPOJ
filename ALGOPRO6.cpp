#include <stdio.h>
int main ()
{
	int n, i, nam;
	scanf("%d", &n);
	int a = n%10;
	int b = (n/10)%10;
	int c = (n/100)%10;
	int d = (n/1000)%10;
	if(n == 1900 || n == 2100 || n%4 != 0)
	{
		nam = (a+b+c+d)*365+2072+1302+210;
		printf("%d", nam);
	}
	else
	{
		nam = (a+b+c+d)*366+2072+1302+223;
		printf("%d", nam);
	}
}
