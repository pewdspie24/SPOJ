#include <stdio.h>
#include <string.h>
char a[100001];
int main ()
{
	int i, j=0, kt=0;
	long long tong=0, tmp1 = 0, tmp2 = 0;
	scanf("%s", a);
	if(strlen(a) == 1)
	{
		printf("0");
		kt = 1;
	}
	if(kt != 1)
	{
		for(i=0; i < strlen(a); i++)
		{
			tong = tong+(a[i]-48);
		}
		if(tong < 10)
		{
			printf("%lld", tong);
		}
		else
		{
			while(1)
			{
				if(j == 0)
				{
					tmp2 = tong;
					j++;
				}
				else
				{
					tmp2 = tmp1;
				}
				while(tmp2 != 0)
				{
					tmp1 = tmp1+tmp2%10;
					tmp2 = tmp2/10;
				}
				if(tmp1 < 10)
				break;
			}
			printf("%lld", tmp1);
		}
	}
	return 0;
}
