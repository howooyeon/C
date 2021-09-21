#include <stdio.h>

int main()
{
int a = 200;

if (a<100)
printf("100보다 작군요..\n"); 

printf("거짓이므로 이 문장은 안 보이겠죠?\n"); //행바꿈의 함정을 조심하자. 수정해도 안됨
printf("프로그램 끝!\n")
}