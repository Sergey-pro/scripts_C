#include <stdio.h>


int main(int argc, char const *argv[])
{
	printf("Реальный uid: %d\n", getuid());
	printf("Эфективный uid: %d\n", geteuid());
	return 0;
}