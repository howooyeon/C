#include <stdio.h>
main()
{ 
	int a;
	int b; 
	int num1 = 0, num2 = 0, num3 = 0;
    
	scanf("%d", &a);
	scanf("%d", &b);
    
	num1 = b / 100;
	num2 = (b % 100) / 10;
	num3 = b % 10;
    
    printf("%d\n", a * num3);
	printf("%d\n", a * num2); 
	printf("%d\n", a * num1); 
	printf("%d", a * b); 
    
    return 0;
}

//너무 어려웠다. 하나하나 곱셈해서 더할까 도전했는데 안된다.,.ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ