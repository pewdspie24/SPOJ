#include <stdio.h>
int main ()
{
	int m,n,k, tmpM=0, tmpN=0, max=0;
	scanf("%d%d%d", &m ,&n ,&k);
	for(int i=0; i <= k; i++)
	{
		tmpM = m-i;
		tmpN = n-(k-i);
		if(tmpM <= 0 || tmpN <= 0)
		continue;
		if(tmpM/2 >= tmpN)
		{
			if(max < tmpN)
			max = tmpN;
		}
		if(tmpM/2 < tmpN)
		{
			if(max < tmpM/2)
			max = tmpM/2;
		}
	}
	printf("%d", max);
	return 0;
}
