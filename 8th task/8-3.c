#include<stdio.h>
int main()
{
	int aa[4];
	int hap=0;
	int i;

	for (i = 0; i <= 3; i++)
	{
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf_s("%d", &aa[i], sizeof(aa));
	}
	hap = aa[0] + aa[1] + aa[2] + aa[3];

	printf("합계 ==> %d\n", hap);}