#include <stdio.h>
#include "func.h"


int main(int argc, char const *argv[])
{
	info();
	printf("Sum a + b\n");
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	sum(a, b);

	char str[1000];
	scanf("%s", &str);

	string(str);

	float result = mult(345.546, 564.543);

	printf("%f\n", result);  

	return 0;
}

