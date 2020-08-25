#include <stdio.h>
#include <string.h>
int a[1000001];
int main ()
{
	int i, n, t, tom = 0, jerry = 0;
	scanf("%d%d", &n, &t);
	int temp = t;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(temp > 0)
		{
			temp = temp - a[i];
			if(temp >= 0)
			{
				tom++;
			}
		}
	}
	temp = t;
	for(i = n-1; i >= 0; i--)
	{
		if(temp > 0)
		{
			temp = temp - a[i];
			if(temp >= 0)
			{
				jerry++;
			}
		}
		else
		break;
	}
	if(tom == jerry)
	{
		printf("Equal");
	}
	else
	if(tom > jerry)
	{
		printf("Tom");
	}
	else
	printf("Jerry");
	return 0;
}

