#include<stdio.h>

int main()
{
	int a = 200;

	if (a < 100) {
		printf("100보다 작군요\n");
		printf("참이라면 이 문장은 보일 겁니다.\n");
	}
	else {
		printf("100보다 크군요\n");
		printf("거짓이라면 이 문장은 보일 겁니다.\n");
	}
	printf("프로그램을 종료합니다!\n");
}

//만약 참일 때 실행할 문제도 여러 개이고 거짓일 때 실행할 문제도 여러 개라면 블록{}으로 묶는다.