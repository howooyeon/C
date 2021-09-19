#include <stdio.h>

int main()
{
	char a = 'A', b, c;

	char mask = 0x0F;

	printf("%X & %X = %X\n", a, mask, a & mask);
	printf("%X | %X = %X\n", a, mask, a | mask);

	mask = 'a' - 'A';

	b = a ^ mask;
	printf(" %c^ %d = %c\n", a, mask, b);
	a = b ^ mask;
	printf(" %c^ %d =%c\n", b, mask, a);

