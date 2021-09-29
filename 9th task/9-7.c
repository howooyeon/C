#include <stdio.h>

int main()
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;

	*q = 'Z';

	printf("ch가 가지고 있는 값: 초 ==> %c\n\n", ch);

}
