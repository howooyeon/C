#include <stdio.h>

int main()
{
	int type, data;

	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf_s("%d", &type);

	printf("값 입력 : ");

	if (type == 1)
	{ scanf_s("%d",&data);}
	
	if (type == 2)
	{scanf_s("%x",&data);}

	if (type == 3)
	{scanf_s("%o",&data);}

	printf("10진수 ==> %d \n", data); ---> 여기에 오류 뜸
	printf("16진수 ==> %x \n", data);
	printf("8진수 ==> %o \n", data);
}