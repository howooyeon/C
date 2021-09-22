#include<stdio.h>

int main()
{
	int a;

	printf("나이를 입력하시오: ");
	scanf_s("%d", &a); // 정수를 입력받는다.

	if (a > 19) { //성별이 남성일 때
		printf("당신은 성인입니다.\n");
			{
				if (a < 50)
				{
					printf("당신은 아직 50세보다 나이가 적습니다.\n");
				}
				else
				{
					printf("당신은 쉰보다 나이가 많습니다.\n");
				}
			}
	}
	else {
		printf("당신은 아직 미성년자입니다.\n");
	}
}

//중첩 if문을 사용한 미성년자인지 성인인지 구별하는 프로그램