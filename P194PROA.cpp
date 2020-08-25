#include <stdio.h>
int a[1000001];
int b[1000001];
int c[1000001];
int main ()
{
	int n, i, d=0;
	scanf("%d", &n);
	for(i=0; i < n; i++)
	{
		scanf("%d%d%d", &a[i], &b[i], &c[i]);
		if(a[i] == 1 && b[i] == 1)
		d++;
		else if(a[i] == 1 && c[i] == 1)
		d++;
		else if(b[i] == 1 && c[i] == 1)
		d++;
	}
	printf("%d", d);
	return 0;
}
