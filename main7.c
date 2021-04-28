#include <stdio.h>
#include <string.h>


struct Car{
	int speed;
	char name[59];
	float weight;
};

int main()
{
	struct Car bmw;
	bmw.speed  = 250;
	bmw.weight = 2500.00f;
	strcpy(bmw.name, "BMW");

	struct Car audi = {300, "Audi A8", 2700.00f};

	printf("%s speed: %d\n", bmw.name, bmw.speed);
	printf("%s speed: %d\n", audi.name, audi.speed);

	return 0;
}