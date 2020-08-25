#include <stdio.h>
#include <string.h>
char a[1000001];
int main ()
{
	int i, j, n, tmp = 0;
	scanf("%d", &n);
	for(i=0; i < n; i++)
	{
		scanf("%s", a);
		for(j=0; j < strlen(a); j++)
		{
			if(j == 0)
			{
				tmp = 1;
				continue;
			}
			if(j != 0)
			{
				if(a[j] == a[j-1])
				{
					tmp++;
				}
				else
				{
					printf("%d%c", tmp, a[j-1]);
					tmp = 1;
				}
			}
			if(j == strlen(a)-1)
			printf("%d%c", tmp, a[j]);
		}
		if(strlen(a) == 1)
		printf("1%c", a[0]);
		if(i != n-1)
		printf("\n");
	}
}
