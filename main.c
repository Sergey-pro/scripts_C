#include <stdio.h>


int main()
{
	int y = 5, x = 10, res;
	res = y + x;

	printf("Variebles: %d + %d = %d\n", x, y, res);

	float y1 = 23.56456f, x1 = 5.36546f, res1;
	res1 = y1 / x1;

	printf("Result: %f\n", res1);
	printf("Result: %.2f\n", res1);

	char s = 's';

	printf("%c\n", s);

	float y2, x2, res2;
	scanf("%f", &y2);
	scanf("%f", &x2);

	res2 = y2 * x2;

	printf("%f\n", res2);

	return 0;
}