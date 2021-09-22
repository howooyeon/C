#include<stdio.h>

int main()
{
	int a;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &a); // 정수를 입력받는다.

	if (a % 2 == 0) { //입력한 값을 2로 나눈 나머지 값이 0일 경우 짝수이면(2로 나눈 나머지 값이 0이면) 실행한다.
		printf("짝수를 입력했군요. .\n");
	}
	else {
		printf("홀수를 입력했군요. .\n");
	}
}