#include <stdio.h>
#include <string.h>
int main ()
{
	int n, k, kt;
	char a[101];
	char b[101];
	long long tong = 1;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		tong = 1;
		kt = 0;
		scanf("%d", &k);
		scanf("%s", a);
		scanf("%s", b);
		for(int j = 0; j < k; j++)
		{
			if(a[j] == '1' && b[j] == '0')
			{
				printf("Nope\n");
				kt = 1;
				break;
			}
			else
			if(a[j] == '0' && b[j] == '0')
			{
				continue;
			}
			else
			if(a[j] == '1' && b[j] == '1')
			{
				tong = (tong*2)%1000000007;
			}
			else
			if(a[j] == '0' && b[j] == '1')
			{
				continue;
			}
		}
		if(kt == 0)
		printf("%lld\n", tong);	
	}
	return 0;
}
