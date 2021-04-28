#include <stdio.h>


int main(int argc, char const *argv[])
{
	int nums[6];
	for(int i = 0; i <= 5; i++){
		scanf("%d", &nums[i]);
	}
	
	//printf("%d\n", nums[2]);

	if(nums[0] + nums[1] + nums[2] == nums[3] + nums[4] + nums[5]){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	return 0;
}