#include <stdio.h>
int main ()
{
	int a[1001];
	int n, i, d, b, c, dem = 0;
	scanf("%d", &n);
	for(i=0; i < n ; i++)
	{
		scanf("%d%d%d", &b, &c, &d);
		if(c == 1 && b == 1)
		{
			dem ++;
			continue;
		}
		if(b == 1 && d == 1)
		{
			dem ++;
			continue;
		}
		if(c == 1 && d == 1)
		{
			dem ++;
			continue;
		}
	}
	printf("%d", dem);
}
