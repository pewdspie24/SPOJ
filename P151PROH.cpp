#include <stdio.h>
int main ()
{
	int s[15];
	int kt=0, kt1 = 0, k = 0, i, n;
	scanf("%d", &n);
	while (n>0)
	{
		s[k] = n%10;
		n = n/10;
		if (s[k] != 1 && s[k] != 4)
		{
			kt = 1;
			break;
		}
		k = k + 1;
	}
	if (s[k-1] != 1)
	{
		kt = 1;
	}
	if (kt == 0)
	{
		if (k>=3)
		for (i=k-1; i>=2; i--)
		{
			if (s[i] == 4 && s[i-1] == 4 && s[i-2] == 4)
			{
				kt1 = 1;
				break;
			}
		}
		else
		{
			if(s[0] != 1 && s[0] != 4)
			{
				kt1 = 1;
			}
		}
	}
	if (kt == 0  && kt1 == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
