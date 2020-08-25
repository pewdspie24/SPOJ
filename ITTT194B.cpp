#include <stdio.h>
#include <string.h>
int main ()
{
	char s[1001];
	int i, dem=1, n;
	scanf("%d", &n);
	for(int j = 0; j < n; j++)
	{
		scanf("%s", s);
		for(i=0; i < strlen(s); i++)
		{
			if(s[i] == s[i+1])
			dem++;
			else
			{
	//			dem = 1;
				printf("%d%c", dem, s[i]);
				dem = 1;
			}
		}
		printf("\n");
	}
	return 0;
}

