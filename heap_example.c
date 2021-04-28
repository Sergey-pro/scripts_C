#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	char *char_ptr; 
	int *int_ptr; 
	int mem_size; 

	if(argc < 2) 
		mem_size = 50;
	else
		mem_size = atoi(argv[1]);

	printf("\t[+] выделяется %d байтов в куче для переменной char_ptr\n", mem_size);
	char_ptr = (char *)malloc(mem_size); 

	if(char_ptr == NULL){ 
		fprintf(stderr, "Ошибка: невозможно выделить память в куче.\n");
		exit(-1);
	}
	strcpy(char_ptr, "Эта память находится в куче.");
	printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

	printf("\t[+] выделяется 12 байтов для переменной int_ptr\n");
	int_ptr = (int *)malloc(12); 

	if(int_ptr == NULL){ 
		fprintf(stderr, "Ошибка: невозможно выделить память в куче.\n");
		exit(-1);
	}

	*int_ptr = 31337; 
	printf("int_ptr (%p) --> '%d'\n", int_ptr, int_ptr);

	printf("\t[-] освобождается память, занятая char_ptr...\n");
	free(char_ptr);

	printf("\t[+] выделяется ещё 15 байтов для переменной char_ptr\n");
	char_ptr = (char *)malloc(15); 

	if(char_ptr == NULL){ 
		fprintf(stderr, "Ошибка: невозможно выделить память в куче.\n");
		exit(-1);
	}

	strcpy(char_ptr, "Новая память");
	printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

	printf("\t[-] освобождается память, занятая int_ptr...\n");
	free(int_ptr);
	printf("\t[-] освобождается память, занятая char_ptr...\n");
	free(char_ptr);

	return 0;
}