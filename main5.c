#include <stdio.h>
#include <stdbool.h>


int main()
{
	//for(int i = 0; i < 10; i++){
	//	printf("%d\n", i);
	//}
	bool isHasCar = true;
	int x;
	while(isHasCar){
		scanf("%d", &x);
		if(x == 5){
			isHasCar = false;
		}
	}

	printf("*" * 2);
	return 0;
}