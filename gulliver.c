#include <stdio.h>


int main(int argc, char const *argv[])
{
	int coefficient, quantity;
	scanf("%d %d", &coefficient, &quantity);

	int res = coefficient * quantity * coefficient;

	printf("Res: %d\n", res);

	return 0;
}