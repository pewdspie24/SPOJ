#include <stdio.h>
int main ()
{
	int n,m,i,j, dem=0;
	int a[10001];
	scanf("%d%d", &n, &m);
	for(i=0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i < n; i++)
	for(j=i+1; j< n; j++)
	{
		if(a[i]+a[j] == m)
		dem++;
	}
	printf("%d", dem);
	return 0;
}
