#include <stdio.h>


int main(int argc, char const *argv[])
{
	int len_list = 0;
	int list;
	int total = 0;
	scanf("%d", &len_list);

	for(int i = 0; i < len_list; i++){
		scanf("%d", &list);
		if(list == 0){
			total += 1;
		}
	}
	printf("%d\n", total);
	return 0;
}