#include<stdio.h>
#include<string.h>
main(){
	char s[71],i,dp,dy,dn,da,t;
	while(1){
		dp=0;
		dy=0;
		dn=0;
		da=0;
		t=0;
		scanf("%s", s);
		if(s[0]=='#') break;
		t++;
		int n=strlen(s);
		for(i=0;i<n;i++){
			if(s[i]=='Y'){
				dy++;
			}
			if(s[i]=='N'){
				dn++;
			}
			if(s[i]=='A'){
				da++;
			}
		}
		if(strlen(s) %2 == 0 && da>=n/2) 
		{
			printf("need quorum\n");
		}
		else
		{
		if(strlen(s) %2 == 1 && da > n/2)
		{
			printf("need quorum\n");
		}
		else{
			if(dy>dn) printf("yes\n");
			if(dy<dn) printf("no\n");
			if(dy==dn) printf("tie\n");
		}
		}
	}
		
}
