#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
	char s[10001];
	int i, maxl=0, maxr=0, max=0, l=0, r=0;
	scanf("%s", s);
	for(i=0; i < strlen(s); i++)
	{
		if(s[i] == 'L')
		{
			maxl++;
			l++;
			if(maxl-r>max)
			max = maxl-r;
		}
		if(s[i] == 'R')
		{
			maxr++;
			r++;
			if(maxr-l>max)
			max = maxr-l;
		}
		if(s[i] == '?')
		{
			maxl++;
			if(maxl-r>max)
			{
				max = maxl-r;
			}
			maxr++;
			if(maxr-l>max)
			{
				max = maxr-l;
			}
		}	 
	}
	printf("%d", max);
	return 0;
}
