#include <stdio.h>


int main()
{
	char arr[14] = {'*'};

	for(int i = 1; i < 15; i++){
		printf("%s\n", arr);
		arr[i] = '*';
	}

	return 0;
}