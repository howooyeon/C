#include <stdio.h>

int main()
{
	int a, b, c, d;
	int result;
	int k;
	
	printf("첫번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &a);
	printf( "<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==>");
	scanf_s("%d", &k);
	printf("두번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &b);

	if (k==1)
	{
		result = a + b;
		printf("%d+%d=%d\n", a, b, result);
	}
	
	if (k == 2)
	{
		result = a - b;
		printf("%d-%d=%d\n", a, b, result);
	}
	
	if (k == 3)
	{
		result = a * b;
		printf("%d*%d=%d\n", a, b, result);

	if (k == 4 )
		{
			result = a / b;
			printf("%d/%d=%d\n", a, b, result);
		}
	}
}
