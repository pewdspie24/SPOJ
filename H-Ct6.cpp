#include <stdio.h>
#include <string.h>
int main ()
{
	char s[600];
	int i, n, j, tong;
	scanf("%d", &n);
	for(j=0; j < n; j++)
	{
		tong = 0;
		scanf("%s", s);
		if(s[0] != '8' || s[strlen(s)-1] != '8')
		{
			printf("NO\n");
			continue;
		}
		for(i=0; i < strlen(s)/2; i++)
		{
			if(s[i] != s[strlen(s)-i-1])
			{
				printf("NO\n");
				break;
			}
			tong += s[i]+s[strlen(s)-i-1]-48*2;
			if(i == strlen(s)/2-1)
			{
				if(strlen(s) % 2 == 0 && tong%10 == 0)
				printf("YES\n");
				else if(strlen(s) % 2 == 0 && tong%10 != 0)
				printf("NO\n");
				else if(strlen(s) % 2 == 1)
				{
					tong += s[strlen(s)/2]-48;
					if(tong%10 == 0)
					printf("YES\n");
					else
					printf("NO\n");
				}
			}
		}
	}
}
