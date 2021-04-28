// Возведение в степень

#include <stdio.h>  


int pow(int num1, int num2)
{    
    int num3 = num1;

    for(int i = 0; i < num2 - 1; i++){
    	num1 *= num3;
    }
   
    printf("%d\n", num1);
}