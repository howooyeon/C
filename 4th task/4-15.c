#include <stdio.h>

int main()
{
	int a = 100, result;
	int i;

	for (i = 1; i <= 5; i++)
	{
		result = a << i;
		printf("%d << %d = %d\n", a, i, result);
	}
	for (i = 1; i <= 5; i++)
	{
		result = a >> i;
		printf("%d >> %d = %d\n", a, i, result);
	}
}