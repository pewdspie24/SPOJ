#include <stdio.h>
int main ()
{
	int x[1001];
	int s[10001];
	int kt,i, j, n, min,max,tong, stt;
	while (1)
	{
		kt = 0;
		scanf("%d", &tong);
		if(tong == 0)
		{
			break;
		}
		for(i=0; i < (tong*6); i++)
		{
			scanf("%d", &x[i]);
			if (i == 0)
			{
				max = x[i];
			}
			if (x[i]>=max)
			{
				max = x[i];
			}
		}
		for (j = 0;j < tong*6; j++)
		{
			for (i = 0; i < tong*6; i++)
			{
				if (i == 0)
				{
					min = x[i];
					stt = 0;
				}
				if (x[i]<=min)
				{
					min = x[i];
					stt = i;
				}
			}
			x[stt] = max + 1;
			s[j] = min;
			if (j >=1)
			{
				if (s[j] != s[j-1])
				{
					if(s[j] != (s[j-1] +1))
					{
						kt = 1;
						break;
					}
				}
			}
		}
		if (max < 49)
		{
			printf("No\n");
		}
		else
		{
			if (kt == 0)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}
	return 0;
}
