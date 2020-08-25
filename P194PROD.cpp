#include <stdio.h>
int main ()
{
	int a[1000];
	int i, n, max, min, gtmax, gtmin;
	scanf("%d", &n);
	if(n == 0 || n == 1)
	printf("0");
	else
	{
		for(i=0; i < n; i++)
		{
			scanf("%d", &a[i]);
//			printf("%d\n", a[i]);
			if(i == 0)
			{
				max = a[i];
				min = a[i];
				gtmax = i+1;
				gtmin = i+1;
			}
			else
			{
				if(max < a[i])
				{
					max = a[i];
					gtmax = i+1;
				}
				if(min > a[i])
				{
					min = a[i];
					gtmin = i+1;
				}
			}
		}
		if(gtmin >= gtmax)
		{
			if(n-gtmin>gtmax-1)
			printf("%d", n-gtmax);
			else
			printf("%d", gtmin-1);
		}	
		else
		{
			if(n-gtmax>gtmin-1)
			printf("%d", n-gtmin);
			else
			printf("%d", gtmax-1);
		}
	}
	return 0;
}
