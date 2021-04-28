#include <stdio.h>

int main()
{
	printf("Длина типа 'int' равна\t\t %d байт\n", sizeof(int));
	printf("Длина типа 'unsigned int' равна\t %d байт\n", sizeof(unsigned int));
	printf("Длина типа 'short int' равна\t %d байт\n", sizeof(short int));
	printf("Длина типа 'long int' равна\t %d байт\n", sizeof(long int));
	printf("Длина типа 'long long int' равна %d байт\n", sizeof(long long int));
	printf("Длина типа 'float' равна\t %d байт\n", sizeof(float));
	printf("Длина типа 'char' равна\t\t %d байт\n", sizeof(char));
}