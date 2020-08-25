#include <stdio.h>
#include <math.h>
int main ()
{
	long long NumTest, i;
	long long Test, j, Sum, Tmp;
	scanf("%lld", &NumTest);
	for(i=1; i<=NumTest; i++)
	{
		Sum = 0;
		scanf("%lld", &Test);
		Tmp = Test;
		for(j=1; j<=sqrt(Test); j++)
		{
			if(Test % j == 0)
			{
				Sum = Sum+j+Test/j;
				if(j*j == Test) Sum=Sum-j;
			}
		}
		printf("%lld\n", Sum);
	}
	return 0;
}

