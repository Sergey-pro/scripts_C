// Программа для перевода буквы в верхний регистр

#include <stdio.h>
#include <string.h>

struct Word
{
	char letter[100];
	char bigLetter[100];
	char letterRu[100];
	char bigLetterRu[100];
};

int main()
{
	struct Word letter = {
		"qwertyuiopasdfghjklzxcvbnm", 
		"QWERTYUIOPASDFGHJKLZXCVBNM", 
		"йцукенгшщзхъфывапролджэячсмитьбю",
		"ЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮ"
	};

	char wrd[1];
	scanf("%c", &wrd);

	for(int i = 0; i < 30;i++){
		if(letter.letter[i] == wrd[0]){
			printf("%c\n", letter.bigLetter[i]);
			break;
		}

		if(letter.letterRu[i] == wrd[0]){
			printf("%c\n", letter.bigLetterRu[i]);
			break;
		}
	}

	return 0;
}