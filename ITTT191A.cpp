#include <stdio.h>
int main ()
{
	int y, b, p, i;
	scanf("%d%d%d", &y, &b, &p);
//	int min = y;
//	if(min > b)
//	{
//		min = b;
//	}
//	if(min > p)
//	{
//		min = p;
//	}
//	if(min == y)
//	{
//		if(y+1 <= b && y+2 <= p)
//		{
//			printf("%d", y*3+3);
//		}
//		else
//		if(y == b && y+2 <= p)
//		{
//			printf("%d", y*3);
//		}
//		else
//		if(y + 1 <= b && y +2 > p)
//		{
//			printf("")
//		}
//	}
	for(i=1; i <= 100; i++)
	{
		if(i == y && i == b && i == p)
		{
			printf("%d", i*3-3);
			break;
		}
		else
		if(i == y)
		{
			if(i+1 <= b && i+2 <= p)
			printf("%d", y+y+1+y+2);
			else
			if(y == b && i+2 <= p)
			printf("%d", y-1+y+y+1);
			else
			if(y+1 == p)
			printf("%d", y-1+y+1+y);
			else
			if(y == p)
			printf("%d", y-2+y-1+y);
			break;
		}
		if(i == b)
		{
			if(i-1 <= y && i+1 <= p)
			printf("%d", b+b-1+b+1);
			else
			if(b == p)
			printf("%d", b-2+b-1+b);
			break;
		}
		if(i == p && i-2 <= y && i-1 <= b)
		{
			printf("%d", p+p-1+p-2);
			break;
		}
	}
	return 0;
}
