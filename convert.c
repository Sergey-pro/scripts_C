#include <stdio.h>
#include <stdlib.h>

void usage(char *program_name){
	printf("Usage: %s <message> <# of times to repeat>\n", program_name);
	exit(1);
}

int main(int argc, char const *argv[])
{
	int i, count;

	count = atoi(argv[2]);
	printf("Повтряем %d  раза...\n", count);

	for(i = 0; i < count; i++){
		printf("%3d - %s\n", i, argv[1]);
	}
}