#include <stdio.h>


struct Abstract
{
	int height, weight;
};

void cals(struct Abstract *obj);

int main()
{
	struct Abstract square = {5, 7};
	cals(&square);
	//int num    = 0;
	//int * pNum = &num;

	//printf("%p\n", pNum);
	//printf("%d\n", *pNum);

	return 0;
}

void cals(struct Abstract *obj){
	int res = obj->weight * obj->height;
	printf("%d\n", res);
}