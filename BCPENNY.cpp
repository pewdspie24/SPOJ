#include <stdio.h>
#include <string.h>
#include <iostream>
int main ()
{
	char s[1000];
	char a[1000];
	int clgt[1001];
	int i, j,k,n, tmp = 0;
	int TTT, TTH, THT, THH, HTT, HTH, HHT, HHH;
	scanf("%d", &n);
	for(k=0; k < n; k++)
	{
		TTT = 0;
		TTH = 0;
		THT = 0;
		THH = 0;
		HTT = 0;
		HTH = 0;
		HHT = 0;
		HHH = 0;
		scanf("%d", &clgt[k]);
		scanf("%s", s);
		for(i = 0; i < strlen(s)-2; i++)
		{
			for(j=i; j < i+3; j++)
			{
				a[tmp] = s[j];
				tmp++;
				if(tmp == 3)
				{
					if(strcmp(a,"TTT") == 0)
					{
						TTT++;
					}
					if(strcmp(a,"TTH") == 0)
					{
						TTH++;
					}
					if(strcmp(a,"THT") == 0)
					{
						THT++;
					}
					if(strcmp(a,"THH") == 0)
					{
						THH++;
					}
					if(strcmp(a,"HTT") == 0)
					{
						HTT++;
					}
					if(strcmp(a,"HTH") == 0)
					{
						HTH++;
					}
					if(strcmp(a,"HHT") == 0)
					{
						HHT++;
					}
					if(strcmp(a,"HHH") == 0)
					{
						HHH = HHH+1;
					}
					tmp = 0; 
				}
			}
		}
		printf("%d ", clgt[k]);	
		printf("%d %d %d %d %d %d %d %d\n", TTT, TTH, THT, THH, HTT, HTH, HHT, HHH);
	}
	return 0;
}
