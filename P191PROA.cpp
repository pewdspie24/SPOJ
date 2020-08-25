#include <stdio.h>
int main ()
{
	int i,n,k, den=0, trang=0, ttd, tmptrang=0, tmpden=0, c=0, tmpc=0;
	int a[10001];
	scanf("%d%d", &n, &k);
	for(i=1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] == 1)
		den++;
		if(a[i] == -1)
		trang++;
	}
	tmptrang = trang;
	tmpden = den;
	for(i=1; i <= n; i++)
	{
		if(i <= k)
		{
			c = i;
			trang = tmptrang;
			den = tmpden;
			while(c <= n)
			{
				if(a[c] == -1)
				trang--;
				if(a[c] == 1)
				den--;
				c = c+k;
			}
		}
		if(i > k)
		{
			c = i;
			trang = tmptrang;
			den = tmpden;
			tmpc = c;
			while(tmpc <= n)
			{
				if(a[tmpc] == -1)
				trang--;
				if(a[tmpc] == 1)
				den--;
				tmpc = tmpc+k;
			}
			tmpc = c-k;
			while(tmpc > 0)
			{
				if(a[tmpc] == -1)
				trang--;
				if(a[tmpc] == 1)
				den--;
				tmpc = tmpc-k;
			}
		}
		if(i == 1)
		{
			if(den-trang >= 0)
			{
				ttd = den-trang;
			}
			else
			{
				ttd = trang-den;
			}
		}
		if(trang-den > ttd)
		ttd = trang-den;
		if(den-trang > ttd)
		ttd = den-trang;
	}
	printf("%d", ttd);
}
