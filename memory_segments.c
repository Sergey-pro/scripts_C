#include <stdio.h>
#include <stdlib.h>

int global_var;
int global_initialized_var = 5;

void functions(){ // Демонстрационная функция
	int stack_var; // в main() есть такая-же переменная

	printf("stack_var функции по адресу 0x%08x\n", &stack_var);
}

int main(){
	int stack_var; // такое-же имя есть в functions()
	static int static_initialized_var = 5;
	static int static_var;
	int *heap_var_ptr;

	heap_var_ptr = (int *) malloc(4);
	// Переменные в сегменте инициализированных данных
	printf("global_initialized_var по адресу 0x%08x\n", &global_initialized_var);
	printf("static_initialized_var по адресу 0x%08x\n\n", &static_initialized_var);
	// Переменные в сегменте неинициализированных данных
	printf("static_var по адресу 0x%08x\n", &static_var);
	printf("global_var по адресу 0x%08x\n\n", &global_var);
	// Переменная в куче
	printf("heap_var_ptr по адресу 0x%08x\n\n", &heap_var_ptr);
	// Переменная в стеке
	printf("stack_var по адресу 0x%08x\n", &stack_var);
	functions();
}