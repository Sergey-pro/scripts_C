#include <stdio.h>
#include <string.h>


int main()
{
	int nums[5];

	printf("Введите числа: \n");
	scanf("%d\n", &nums[0]);
	scanf("%d\n", &nums[1]);
	scanf("%d\n", &nums[2]);
	scanf("%d\n", &nums[3]);
	scanf("%d\n", &nums[4]);

	//int len = strlen((unsigned char*)nums) / sizeof(int);
	for(int i = 5; i >= 0; --i){
		printf("Вывод: %d\n", nums[i]);
	}
}