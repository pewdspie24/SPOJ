#include <stdio.h>
int main ()
{
	int s[3001];
	int x[3001];
	int i, j, n, min,max, stt,kt=0;
	scanf("%d", &n);
	for (i = 1;i <=n;i++)
	{
		scanf("%d", &x[i]);
		if (i == 1)
		{
			max = x[i];
		}
		if (x[i]>=max)
		{
			max = x[i];
		}
	}
	for (j = 1;j <= n; j++)
	{
		for (i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				min = x[i];
				stt = 1;
			}
			if (x[i]<=min)
			{
				min = x[i];
				stt = i;
			}
		}
		x[stt] = max + 1;
		s[j] = min;
	}
	if(s[1] != 1)
	{
		printf("1");
	}
	else
	{
		for(j=1; j <= n; j++)
		{
			if((s[j]+1) != s[j+1] && (s[j]) != s[j+1])
			{
				printf("%d", s[j]+1);
				kt = 1;
				break;
			}
		}
		if(kt == 0)
		{
			printf("%d", n+1);
		}
	}
	return 0;
}
