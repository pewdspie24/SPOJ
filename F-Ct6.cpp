#include <stdio.h>
#include <string.h>
int main ()
{
	char s[200];
	int i, n, j, k=0, dem = 0, c;
	scanf("%d", &n);
	fflush(stdin);
	for(i=0; i < n; i++)
	{
		k = 0;
		gets(s);
		for(j=0; j < strlen(s); j++)
		{
			if(k==0 && s[j] == ' ')
			{
				continue;
			}
			else
			if(s[j] != ' ' && k == 0)
			{
				k=1;
			}
			if(k == 1 && s[j] == ' ')
			{
				for(c=j; c < strlen(s); c++)
				{
					if(s[c] != ' ')
					{
						dem++;
//						printf("%d", j);
						while(1)
						{
							if(s[j+1] == ' ')
							j++;
							else
							break;
						}
						break;
					}
				}
			}
		}
		printf("%d\n", dem+1);
		dem = 0;
	}
}
