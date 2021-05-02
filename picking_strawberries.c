#include <stdio.h>


int main(int argc, char const *argv[])
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	int sum = x + y;

	if(z < sum){
		
		printf("Res: %d\n", sum - z);
	}else{
		printf("Impossible\n");
	}

	return 0;
}