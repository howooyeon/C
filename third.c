#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	char ch;

	printf(" ������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &ch, &b);

	switch (ch)
	{


	case '+':
		printf("%d + %d = %d �Դϴ�.\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d �Դϴ�.\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d �Դϴ�.\n", a, b, a*b);
		break;
	case '/':
		printf("%d / %d = %f �Դϴ�.\n", a, b, a/b);
		break;
	case '%':
		printf("%d %% %d = %d �Դϴ�.\n", a, b, a % b);
		break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}
