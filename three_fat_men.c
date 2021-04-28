#include <stdio.h>


int main(int argc, char const *argv[])
{
	int weight1, weight2, weight3;
	scanf("%d %d %d", &weight1, &weight2, &weight3);

	if(94 > weight1 || weight1 > 727)
		printf("ERROR\n");
	else if(94 > weight2 || weight2 > 727)
		printf("ERROR\n");
	else if(94 > weight3 || weight3 > 727)
		printf("ERROR\n");
	else{
		int max = weight1;
		if(max < weight2)
			max = weight2;
		if(max < weight3)
			max = weight3;
		printf("Res: %d\n", max);
	}

	

	return 0;
}