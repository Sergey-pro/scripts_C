#include <stdio.h>


int main()
{
	int arr[] = {23, 34, 5, 56, 78};
	arr[0] = 55;

	printf("%d\n", arr[0]);

	char word[] = {'S', 'o', 'm', 'e'};
	char words[] = "Hello World!";

	printf("%s\n", words);
	printf("%c\n", words[3]);

	int array[3][4] = {
		{12, 343, 45, 35},
		{23, 545, 65, 7867},
		{234, 467, 3, 9}
	};

	printf("%d\n", array[0][2]);
	
	return 0;
}