#include <stdio.h>


int main(int argc, char const *argv[])
{
	int salary[3];
	scanf("%d %d %d", &salary[0], &salary[1], &salary[2]);
	int max = salary[0];
	int min = salary[0];

	for(int i = 0; i < 3; i++){
		if(salary[i] > max){
			max = salary[i];
		}else if(salary[i] < min){
			min = salary[i];
		}
	}

	int res = max - min;

	printf("Результат: %d\n",res );

	return 0;
}