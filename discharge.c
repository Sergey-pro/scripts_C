#include <stdio.h>


int main()
{
	int num;

	scanf("%d", &num);
	if(num > 9999){
		printf("%d\n", num / 10000 % 10);
		printf("%d\n", num / 1000 % 10);
		printf("%d\n", num / 100 % 10);
		printf("%d\n", num / 10 % 10);
		printf("%d\n", num / 1 % 10);
	}

	

	return 0;
}