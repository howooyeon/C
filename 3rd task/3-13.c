#include <stdio.h>

int main()
{
	int a, b;
	char c, d;

	a = 0x41;
	b = 0x50;

	printf("%c\n", b);

	c = a;
	printf("%c\n", c);

	d = '#';
	printf("%c의 ASCII값은 %d입니다\n", d, d);
}
