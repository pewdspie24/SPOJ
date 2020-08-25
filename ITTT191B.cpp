#include <stdio.h>
int main ()
{
	int n, i, j;
	char a[1001][1001];
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(i == 1 || i == (n/2+1) || i == n)
			{
				printf("* ");
			}
			else
			{
				if(j == 1 || j == n)
				{
					printf("* ");
				}
				else
				if(i == j || j == (n/2+1) || j == n-i+1)
				{
					printf("* ");
				}
				else
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
