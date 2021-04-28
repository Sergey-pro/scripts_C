#include <stdio.h>


int main()
{
	char line[255];
	FILE *file = fopen("test.txt", "r");

	//fprintf(file, "Hello, World!" );
	for(int i = 0; i < 2; i++){
		fgets(line, 255, file);
		printf("%s", line);
	}
	

	fclose(file);

	return 0;
}