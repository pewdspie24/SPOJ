#include <stdio.h>
#include <string.h>
int main ()
{
	int n,tong,lol,i,j,k;
	char s[10001];
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d%d", &lol, &tong);
		scanf("%s", s);
		printf("%d ", lol);
		for(j=0; j<strlen(s); j++)
		{
			for(k=1; k<= tong; k++)
			printf("%c", s[j]);
		}
		printf("\n");
	}
	return 0;
}
