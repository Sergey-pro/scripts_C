#include <stdio.h>

void info(){
	printf("Hello, World!\n");
}

void sum(int a, int b){
	int res = a + b;
	printf("Res: %d\n", res);
}

void string(char arr[]){
	printf("%s\n", arr);
}

float mult(float a, float b){
	float res = a * b;
	printf("%f\n", res);
	return res;
}