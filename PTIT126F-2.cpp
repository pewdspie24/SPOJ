//#include<conio.h>
#include<iostream>
//#include<fstream>
#include<string.h>
using namespace std;
//ifstream fi("5.in");
long dem2=0,maxx=0,tinh=0;
char s[500];
main(){
	cin>>s;
	long h=strlen(s);
	//cout<<h;
	long mmax=0,dem1=0;
	for(int i=0;i<h;i++)
	{
	if(s[i]=='L')dem1++;	
	if(s[i]=='R')dem2++;
	if(s[i]=='?') tinh++;
//	if(dem1>0&&dem1>mmax)mmax=dem1;
//	else if(dem1<0&&dem1<mmax)mmax=dem1;	
		}
	mmax=dem1-dem2;
	if(mmax>0)mmax=mmax+tinh;	
	else mmax=mmax*-1+tinh;			
	 cout<<mmax;
	
	
//	getch();
	return 0;
	}
