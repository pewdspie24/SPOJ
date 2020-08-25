#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main ()
{
	int i, n, m, j, k, l, tmp=0, min;
	int a[1001];
	scanf("%d%d", &n, &m);
	for(i=0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	min = 0;
	sort(a,a+n);
	for(i= n-1; i >=2 ; i--)
	{
		if(a[i] <= m)
		{
			for(j=i; j >= 2; j--)
			{
				for(k=j-1; k >= 1; k--)
				{
					for(l=k-1; l >=0; l-- )
					{
						if(a[j]+a[k]+a[l] <= m && min <= a[j]+a[k]+a[l])
						{
							min = a[j]+a[k]+a[l];
						}
						if(min == m)
						tmp=1;
					}
					if(tmp == 1)
					break;
				}
				if(tmp==1)
				break;
			}
		}
		if(tmp == 1)
		break;
	}
	printf("%d", min);
	return 0;
}
