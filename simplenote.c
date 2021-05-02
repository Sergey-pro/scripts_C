#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>


void usage(char *prog_name, char *filname){
	printf("Usage: %s <data to add to %s>\n", prog_name, filname);
	exit(0);
}

void fatal(char *message);
void *ec_malloc(unsigned int size);

int main(int argc, char const *argv[])
{
	int fd;
	char *buffer, *datafile;

	buffer = (char *)ec_malloc(100);
	datafile = (char *)ec_malloc(20);
	strcpy(datafile, "/tmp/notes");

	if(argc < 2)
		usage(argv[0], datafile);

	strcpy(buffer, argv[1]);

	printf("[DEBUG] buffer @ %p: \'%s\'\n", buffer, buffer);
	printf("[DEBUG] datafile @ %p: \'%s\'\n", datafile, datafile);

	strncat(buffer, "\n", 1);

	fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);

	if(fd == -1)
		fatal("в функции main() при открытии файла");
	printf("[DEBUG] дескриптор файла %d\n", fd);

	if(write(fd, buffer, strlen(buffer)) == -1)
		fatal("в функции main() при записи буфера в файл");

	if(close(fd) == -1)
		fatal("в функции main() при закрытия файла");

	printf("Заметка сохранена.\n");
	free(buffer);
	free(datafile);

	return 0;
}

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