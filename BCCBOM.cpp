#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
//	using namespace std;
	char a[101][101];
	int dem,i, j, m, n; //n la cot, m la hang
	while (1)
	{
		scanf("%d%d", &n, &m);
		if (n == 0 && m == 0)
		break;
		for(i = 0; i < n; i++)
		{	
			cin.ignore();
			for(j = 0; j < m; j++)
			{
				scanf("%c", &a[i][j]);
			}
		}
		for(i = 0; i < n; i++)
		{
			if(i != 0)
			printf("\n");
			{
				for(j = 0; j < m; j++)
				{
					dem = 0;
					if(a[i][j] == '.')
					{
						if(a[i-1][j-1] == '*' && j >= 1 && i >= 1)
						dem += 1;
						if(a[i-1][j] == '*' && i >= 1)
						dem += 1; 
						if(a[i][j-1] == '*' && j >= 1)
						dem += 1;
						if(a[i+1][j+1] == '*' && i+1 <= n && j+1 <= m)
						dem += 1; 
						if(a[i+1][j] == '*' && i+1 <= n)
						dem += 1;
						if(a[i][j+1] == '*' && j+1 <= m)
						dem += 1;
						if(a[i-1][j+1] == '*' && i >= 1 && j+1 <=m)
						dem += 1;
						if(a[i+1][j-1] == '*' && j >= 1 && i+1 <=n)
						dem += 1;
						printf("%d", dem);
					}
					if(a[i][j] == '*')
					printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
