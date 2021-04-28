#include <stdio.h>

#define LINE "___________________________"
#define TITLE "C Programming in easy steps"
#define AUTHOR "White Hat"

#ifndef _WIN32
#define SYSTEM "Windows"
#endif

#ifndef linux
#define SYSTEM "Linux"
#endif


int main()
{
	printf("\n\t%s\n\t%s\n", LINE, TITLE);
    printf("\tby %s\n", AUTHOR);
    printf("\t%s\n", LINE);
    printf("\nOperating System: %s\n", SYSTEM);

    return 0;
}