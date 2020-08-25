#include <stdio.h>
int main ()
{
	int a;
	scanf("%d", &a);
	if(a <= 2 || a%2 == 1)
	{
		printf("NO");
	}
	else
	if(a >2 && a%2 == 0)
	{
		printf("YES");
	}
	return 0;
}
