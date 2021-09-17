#include <stdio.h>

int main()
{
    int a, b;
    int result;
    char k;

    printf("첫번째 계산할 값 ==>");
    scanf_s("%d", &a);
    printf("+ - * / % ==>");
    scanf_s(" %c", &k);
    printf("두번째 계산할 값 ==>");
    scanf_s("%d", &b);

    if (k == '+')
    {
        result = a + b;
        printf("%d + %d = %d\n", a, b, result);
    }

    if (k == '-')
    {
        result = a - b;
        printf("%d - %d = %d\n", a, b, result);
    }

    if (k == '*')
    {
        result = a * b;
        printf("%d * %d = %d\n", a, b, result);
    }
    if (k == '/')
    {
        if (b != 0) {
            result = a / b;
            printf("%d / %d = %d\n", a, b, result);
        } else
            printf("0으로 나누면 안됩니다.\n");
    }


    if (k == '%') {
        if (b != 0) {
            result = a % b;
            printf("%d %% %d= %d\n", a, b, result); 
        } else
            printf("0으로 나누면 나머지 값이 안됩니다.\n");
        }
