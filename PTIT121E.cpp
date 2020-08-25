#include <stdio.h>
#include <string.h>
int main ()
{
	char s[101];
	int Sum,SumTmp[101], j=1,Tmp;
	scanf("%s", s);
	for(int i=0; i < strlen(s); i++)
	{
		if(s[i] == 'C')
		SumTmp[j] += 12;
		if(s[i] == 'H')
		SumTmp[j] += 1;
		if(s[i] == 'O')
		SumTmp[j] += 16;
		if(s[i] != 'C' && s[i] != 'H' && s[i] != 'O' && s[i] != '(' && s[i] != ')' && s[i-1] != ')')
		{
			if(s[i-1] == 'C')
			SumTmp[j] += 12*(s[i]-48);
			if(s[i-1] == 'H')
			SumTmp[j] += 1*(s[i]-48);
			if(s[i-1] == 'O')
			SumTmp[j] += 16*(s[i]-48);
		}
		if(s[i] == '(')
		{
			i++;
			j++;
			while(j != 1)
			{
				if(s[i] == 'C')
				SumTmp[j] += 12;
				if(s[i] == 'H')
				SumTmp[j] += 1;
				if(s[i] == 'O')
				SumTmp[j] += 16;
				if(s[i] != 'C' && s[i] != 'H' && s[i] != 'O' && s[i] != '(' && s[i] != ')' )
				{
					if(s[i-1] == 'C')
					SumTmp[j] += 12*(s[i]-49);
					if(s[i-1] == 'H')
					SumTmp[j] += 1*(s[i]-49);
					if(s[i-1] == 'O')
					SumTmp[j] += 16*(s[i]-49);
				}
				if (s[i] == '(')
				{
					j++;
					i++;
					continue;
				}
				if (s[i] == ')')
				{
					i++;
					if(s[i] != 'C' && s[i] != 'H' && s[i] != 'O' && s[i] != '(' && s[i] != ')')
					{
						SumTmp[j-1] += SumTmp[j]*(s[i]-48);
						SumTmp[j] = 0;
						i++;
					}
					else
					{
						SumTmp[j-1] += SumTmp[j];
						SumTmp[j] = 0;
					}
					j--;
					continue;
				}
				i++;
			}
		}
	}
	printf("%d", SumTmp[1]);
}
