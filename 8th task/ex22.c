#include <stdio.h>

int main()
{
	int gugu[9][9];
	int i, k;

	for (i = 0; i < 9; i++)
		for (k = 0; k < 9; i++)
			gugu[i][k] = (i+1) * (k+1);

	for (i = 0; i < 9; i++) 
	{
		for (k = 0; k < 9; k++)
		{
			printf("%dX%d = %2d  ", k+1, i+1, gugu[i][k]);
		}
			printf("\n");
		}
	}
