#include <stdio.h>
#include <string.h>
int main ()
{
	char s[600];
	int i, n, j;
	scanf("%d", &n);
	for(j=0; j < n; j++)
	{
		scanf("%s", s);
		for(i=0; i < strlen(s); i++)
		{
			if(s[i] % 2 == 1)
			{
				printf("NO\n");
				break;
			}
			if(i == strlen(s)-1)
			printf("YES\n");
		}
	}
}
