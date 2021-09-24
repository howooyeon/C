#include<stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a,&b,&c); // 정수를 입력받는다.

	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c) * (b % c)) % c);

}