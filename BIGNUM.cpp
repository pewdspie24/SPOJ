#include <stdio.h>
#include <math.h>
#include <string.h>
int main ()
{
	int i, Tmpi, IsABiggerThanB=2,dem=0;
	char A[1000], B[1000], Sum[1001];
	scanf("%s%s", A, B);
	if (strlen(A) == strlen(B))
	{
		for(i=0; i<strlen(A); i++)
		{
			if(A[i]-B[i] > 0)
			{
				IsABiggerThanB = 1;
				Tmpi = i;
				break;
			}
			if(A[i]-B[i] < 0)
			{
				IsABiggerThanB = 0;
				Tmpi = i;
				break;
			} 
		}
		
	}
	if (strlen(A) > strlen(B))
	IsABiggerThanB = 1;
	if (strlen(A) < strlen(B))
	IsABiggerThanB = 0;
	if (IsABiggerThanB == 1 && strlen(A) != strlen(B))
	{
		for(i=0; i<strlen(A); i++)
		{
			if(strlen(B)-1>=i)
			{
				if(A[i]+B[i]+dem-48>57)
				{
					Sum[i]= A[i]+B[i]-48+dem;
					dem = 1;printf("%c\n", Sum[i]);
					continue;
				}
				if(A[i]+B[i]+dem<10)
				{
					Sum[i]= A[i]+B[i]-48+dem;
					dem = 0;printf("%c", Sum[i]);
					continue;
				}
			}
			else
			{
				Sum[i]=A[i]+dem;
				dem = 0;printf("%c", Sum[i]);
			}
		}
	}
	if (IsABiggerThanB == 1 && strlen(A) == strlen(B))
	{
		for(i=0; i<strlen(A); i++)
		{
			if(strlen(B)-1>i)
			{
				if(A[i]+B[i]+dem>=10)
				{
					Sum[i]= A[i]+B[i]-10+dem;
					dem = 1;
				}
				if(A[i]+B[i]+dem<10)
				{
					Sum[i]= A[i]+B[i]+dem;
					dem = 0;
				}
			}
			else
			{
				if(A[i]+B[i]+dem>=10)
				{
					Sum[i]= A[i]+B[i]-10+dem;
					dem = 1;
				}
				if(A[i]+B[i]+dem<10)
				{
					Sum[i]= A[i]+B[i]+dem;
					dem = 0;
				}
				if(dem != 0)
				Sum[i+1] = 1;
			}
		}
	}
//	for(i=strlen(Sum)-1; i >= 0; i--)
//	printf("%c", Sum[i]);
}
