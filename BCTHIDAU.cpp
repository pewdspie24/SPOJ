#include <stdio.h>
#include <string.h>
int main ()
{
	int i, j, n, max, min, slc;
	char s[100];
	char k[100];
	int a[100];
	int dem[100];
	int tg[100];
	scanf("%d", &n);
	for(i=0; i < n; i++)
	{
		dem[i]=0;
		tg[i]=0;
		scanf("%s", s);
		for(j=0; j < 8; j++)
		{
			scanf("%d", &a[j]);
		}
		for(j=1; j < 8; j=j+2)
		{
			if(a[j] != 0)
			{
				dem[i]++;
				tg[i]=tg[i]+a[j];
				if(a[j-1] != 1)
				tg[i]=tg[i]+(a[j-1]-1)*20;
			}
		}
		if(i == 0)
		{
			max = dem[i];
			min = tg[i];
			strcpy(k,s);
		}
		if(dem[i] > max)
		{
			max = dem[i];
			slc = i;
			strcpy(k,s);
		}
		if(dem[i] == max && tg[i] < min)
		{
			min = tg[i];
			slc = i;
			strcpy(k,s);
		}
	}
	printf("%s %d %d", k, max, min);
	return 0;
}
