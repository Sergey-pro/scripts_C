#include <stdio.h>


int main(int argc, char const *argv[])
{
	int a;
	scanf("%d", &a);
	int b = 0;

	for(int i = 0; i <= a; i++){
		b += i;
	}

	printf("Результат: %d\n", b);
	
	return 0;
}