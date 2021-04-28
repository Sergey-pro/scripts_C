#include <stdio.h>


int main(int argc, char const *argv[])
{
	int num;
	scanf("%d", &num);
	if(num % 2 == 0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}