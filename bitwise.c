#include <stdio.h>


int main(int argc, char const *argv[])
{
	int bit_a, bit_b;
	printf("Поразрядный оператор ИЛИ |\n");
	for(int i = 0; i < 4; i++){
		bit_a = (i & 2) / 2;
		bit_b = (i & 1);
		printf("%d | %d = %d\n", bit_a, bit_b, bit_a|bit_b);
	}
	printf("\nПоразрядный оператор И &\n");
	for(int i = 0; i < 4; i++){
		bit_a = (i & 2) / 2;
		bit_b = (i & 1);
		printf("%d | %d = %d\n", bit_a, bit_b, bit_a & bit_b);
	}
	return 0;
}