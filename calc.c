#include <stdio.h>
//#include "calFunc.h"


int main()
{
	int a; 
	int b;
	int res;
	char c[1];

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%c", &c);

	printf("%c\n", c[0]);

	if(c[0] == '+'){
		res = a + b;
		printf("Результат: %d\n", res);
	}else if(c[0] == '-'){
		res = a - b;
		printf("Результат: %d\n", res);
	}else if(c[0] == '*'){
		res = a * b;
		printf("Результат: %d\n", res);
	}else if(c[0] == '/'){
		res = a / b;
		printf("Результат: %d\n", res);
	}
	

	return 0;
}