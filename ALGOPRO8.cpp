#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b;
	scanf("%d%d",&a, &b);
	if(a>b)
	{
		printf("%d %d", b, (a-b)/2 );
	}
	if(a<b)
	printf("%d %d", a, (b-a)/2);
	if(a==b)
	printf("%d 0", a);
	return 0;
}
