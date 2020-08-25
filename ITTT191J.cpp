#include <stdio.h>
#include <string.h>
char s[1000001];
int main ()
{
	int i, a=0, b=0, kt=0;
	scanf("%s", s);
	for(i=0; i < strlen(s); i++)
	{
		if(i == 0 && s[i] == 'B')
		{
			printf("NO");
			kt= 1;
			break;
		}
		else
		if(i == strlen(s)-1 && s[i] == 'A')
		{
			printf("NO");
			kt = 1;
			break;
		}
		else
		if(s[i] == 'A')
		{
			a++;
		}
		if(s[i] == 'B')
		{
			b++;
		}
	}
	if(kt == 0)
	for(i=0; i < strlen(s); i++)
	{
		if(s[i] == 'A')
		{
			b--;
		}
		if(b < 0)
		{
			printf("NO");
			kt = 1;
			break;
		}
	}
	if(kt == 0)
	for(i=strlen(s)-1; i >= 0; i--)
	{
		if(s[i] == 'B')
		{
			a--;
		}
		if(a < 0)
		{
			printf("NO");
			kt = 1;
			break;
		}
	}
	if(kt == 0)
	{
		printf("YES");
	}
	return 0;
}
