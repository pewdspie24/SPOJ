#include <stdio.h>
int main ()
{
	int kt,i, m, n, k ,t, tmp;
	float clgt, kq;
	scanf("%d%d%d%d", &m ,&n, &k, &t);
	tmp = k/n;
	clgt = m*1.0/100;
	printf("%d\n", tmp);
	if(tmp == 0)
	{
		kq = t*1.0+t*clgt*k*1.0;
		printf("%f", kq);
	}
	else
	{
		kt = k;
		for(i = 1; i <= tmp; i++)
		{
			t += t*clgt*n;
			kt -= n;
		}
		printf("%f", t+t*kt*clgt);
	}
	return 0;
}
