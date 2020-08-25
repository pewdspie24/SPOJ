#include <stdio.h>
int main()
{
    int n,sbt,k,xxx; 
	int a[100000],i,j,m;
	long long r,q,kt;
	scanf("%d", &sbt);
	for(k=1; k<=sbt; k++)
	{
		kt = 0;
		r = 0;
		kt = 0;
		m = 1;
		scanf("%d",&n);
		scanf("%d", &xxx);
	    a[0]=1;
	    for(i=2;i<=n;i++)
		{
	    	for(j=0;j<m;j++)
			{
	        	q=r;
	        	r=(a[j]*i+r)/10;
	        	a[j]=(a[j]*i+q)%10;
	   		}
	     	while(r>0)
			{
	          	a[m]=r%10;
	          	m++;
	          	r=r/10;
	   		}
	 	}
	    for(i=m-1;i>=0;i--) 
		{
			if(a[i] == xxx)
			kt = kt+1;
		}
		printf("%llu\n", kt);
	}
	return 0;
}
