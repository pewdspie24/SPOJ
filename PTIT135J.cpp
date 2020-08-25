#include <stdio.h>
int main ()
{
	int k, i, nam;
	double tmp, n, l, m;
	scanf("%d", &k);
	for(i=0; i < k; i++)
	{
		scanf("%lf%lf%lf", &n, &l, &m);
		nam = 0;
		tmp = n;
		while(1)
		{
			if(tmp >= m)
			{
				break;
			}
			else
			{
				nam++;
				tmp = tmp+tmp*l/100;
			}
		}
		printf("%d\n", nam);
	}
	return 0;
}
