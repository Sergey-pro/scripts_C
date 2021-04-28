#include <stdio.h>
#include <stdbool.h>


int main()
{
	int x = 123;
	if(x == 6){
		printf("Yes\n");
	}else if(x > 100){
		printf("X is greated 100\n");
	}else{
		printf("No\n");
	}

	bool isHasCar = true;

	if(isHasCar == true){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}