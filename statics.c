#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	int num_loop;
	printf("Сколько чисел вводить?\n");
	scanf("%d", &num_loop);
	int nums[num_loop];
	int nums_div[num_loop];
	int nums_not_div[num_loop];
	int *nums_div_y;
	
	

	printf("Введите числа дней\n");

	for(int i = 0; i <= num_loop-1; i++){
			scanf("%d", &nums[i]);
	}

	nums_div_y = nums_div;

	for(int i = 0; i <= num_loop-1; i++){
		for(int j = 0; j < 2; j++){
			if(nums[i] % 2 == 0){
				nums_div[j] = nums[i];
				//printf("Ответ д: %d\n", nums[i]);
			}else{
				//printf("Ответ: %d\n", nums[i]);
			}
		}
		
	}

	int len = sizeof(nums_div_y) / sizeof(int);

	printf("F%d\n", len);

	for(int i = 0; i < len; i++){
		if(nums_div[i] == ' '){
			printf("No\n");
			//continue;
		}else{
			printf("Ответ д %d\n", nums_div_y[i]);
		}
		
	}
	

	return 0;
}