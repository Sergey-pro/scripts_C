#include <stdio.h>


int main(int argc, char const *argv[])
{
	int all;
	int nums[all];
	scanf("%d", &all);

	for(int i = 0; i < all; i++){
		scanf("%d", &nums[i]);
	}

	printf("Res:\n");

	for(int i = all - 1;i >= 0; i--){
		printf("%d\n", nums[i]);
	}
	//printf("%d", nums[1]);

	return 0;
}