#include<stdio.h>
#include<string.h>
int main()
{
	char ss[100];
	char tt[100];
	int count, i;

	printf("문자열을 입력하세요 : ");
	scanf_s("%s", ss, sizeof(ss));
	
	count = strlen(ss);

	for (i = 0; i < count; i++)
	{
		tt[i] = ss[count - (i + 1)];
	}
	tt[count] = '\0';

	printf("내용을 거꾸로 출력 ==> %s\n", tt);
}