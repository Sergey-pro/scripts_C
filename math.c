#include <stdio.h>


int main()
{
	int a, b, f;

	scanf("a = %d", &a);
	scanf("b = %d", &b);
	scanf("f = %d", &f);

	printf("Вычисляем по формуле: x=(a + b - f / a) + f * a * a - (a + b)\n");

	//float x = (a + b - f / a) + f * a * a - (a + b);
	float x = a / b / f;
	printf("x = %f\n", x);

	return 0;
}