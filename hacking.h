void fatal(char *message){
	char error_message[100];

	strcpy(error_message, "[!!]Критическая ошибка");
	strncat(error_message, message, 83);
	perror(error_message);
	exit(-1);
}

void *ec_malloc(unsigned int size){
	void *ptr;
	ptr = malloc(size);
	if(ptr == NULL){
		fatal("В функции ec_malloc() при выделении памяти\n");
	}
	return ptr;
}