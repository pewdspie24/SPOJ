#include <stdio.h>
int main ()
{
	int a,s,i,j,k,l,m,n,g,h,o,z,y;
	scanf("%d", &z);
	for (y=1; y <=z; y++)
	{
		scanf("%d", &a);
		i = a/500;
		j = (a-i*500)/200;
		k = (a-i*500-j*200)/100;
		l = (a-i*500-j*200-k*100)/50;
		m = (a-i*500-j*200-k*100-l*50)/20;
		n = (a-i*500-j*200-k*100-l*50-m*20)/10;
		g = (a-i*500-j*200-k*100-l*50-m*20-n*10)/5;
		h = (a-i*500-j*200-k*100-l*50-m*20-n*10-g*5)/2;
		o = (a-i*500-j*200-k*100-l*50-m*20-n*10-g*5-h*2);
		s = i+j+k+l+m+n+g+h+o;
		printf("%d", s);
	}
	return 0;
}
