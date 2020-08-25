#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
void SXHV(int n)
{
	int a[10001];
	int i, j;
	for(i=0; i < n; i++)
	{
		a[i] = i+1;
		printf("%d", a[i]);
	}
	printf("\n");
	i = n -1;
	while(i != 0)
	{
		i = n - 1;
		while(a[i] < a[i-1])
		{
			i--;
		}
		if(i > 0)
		{
			for(j = n-1; j >= i; j--)
			{
				if(a[j] > a[i-1])
				break;
			}
			swap(a[j], a[i-1]);
			sort(a+i,a+n);
			for(j=0; j < n; j++)
			printf("%d", a[j]);
			printf("\n");
		}
	}
}
int main ()
{
	int n;
	scanf("%d", &n);
	SXHV(n);
	return 0;
}
