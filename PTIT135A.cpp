#include <stdio.h>
int main ()
{
	int a,b,c, max;
	int s[1001];
	int i, min, tmp, tong;
	scanf("%d%d%d", &a, &b, &c);
	for(i=1; i <= 6; i++)
	{
		scanf("%d", &s[i]);
		if(i == 1)
		{
			min = s[1];
			max = s[1];
		}
		if(s[i] < min)
		{
			min = s[i];
		}
		if(s[i] > max)
		{
			max = s[i];
		}
	}
	for(i = min+1; i <= max; i++)
	{
		tmp = 0;
		if(i > s[1] && i <= s[2])
		tmp++;
		if(i > s[3] && i <= s[4])
		tmp++;
		if(i > s[5] && i <= s[6])
		tmp++;
		if(tmp == 3)
		{
			tong += 3*c;
		}
		if(tmp == 2)
		{
			tong += 2*b;
		}
		if(tmp == 1)
		{
			tong += a;
		}
	}
	printf("%d", tong);
	return 0;
}
