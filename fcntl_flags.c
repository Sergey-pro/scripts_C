#include <stdio.h>
#include <fcntl.h>


void dispaly_flags(char *label, unsigned int value);
void binary_print(unsigned int value);


int main(int argc, char const *argv[])
{
	dispaly_flags("O_RDONLY\t\t", O_RDONLY);
	dispaly_flags("O_WRONLY\t\t", O_WRONLY);
	dispaly_flags("O_RDWR\t\t\t", O_RDWR);
	printf("\n");
	dispaly_flags("O_APPEND\t\t", O_APPEND);
	dispaly_flags("O_TRUNC\t\t\t", O_TRUNC);
	dispaly_flags("O_CREAT\t\t\t", O_CREAT);
	printf("\n");
	dispaly_flags("O_WRONLY|O_APPEND|O_CREAT", O_WRONLY|O_APPEND|O_CREAT);
	return 0;
}

void dispaly_flags(char *label, unsigned int value){
	printf("%s\t: %d\t", label, value);
	binary_print(value);
	printf("\n");
}

void binary_print(unsigned int value){
	unsigned int mask = 0xff000000; // маска для самого старшего байта
	unsigned int shift = 256*256*256; // смещение для самого старшего байта
	unsigned int byte, byte_iterator, bit_iterator;

	for(byte_iterator = 0; byte_iterator < 4; byte_iterator++){ 
		byte = (value & mask) / shift; // изолируем каждый байт
		printf(" ");
		for(bit_iterator = 0; bit_iterator < 8; bit_iterator++){ // отображаем биты байта
			if(byte & 0x80){ // если самый старший бит в байте не 0
				printf("1"); // отображаем 1
			}else{
				printf("0"); // иначе 0
			}
			byte *= 2; // смещаем все биты в лево на 1
		}
		mask /= 256; // смещаем биты маски вправо на 8
		shift /= 256; //смещаем биты в сдвиге вправо на 8
	}
}