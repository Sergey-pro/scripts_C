#include <stdio.h>



int bubbleSort(int a[], long size){
  	int i, j;
  	int x;
  	for(i=0; i < size; i++){            // i - номер прохода
   		for(j = size-1; j > i; j--){     // внутренний цикл прохода
    		if (a[j-1] > a[j]) {
    			x=a[j-1]; 
    			a[j-1]=a[j]; 
    			a[j]=x;
   			}
 		}
	}
	return a;
}

int main(int argc, char const *argv[])
{
	int nums[3];
	scanf("%d", &nums[0]);
	scanf("%d", &nums[1]);
	scanf("%d", &nums[2]);
	int res[] = bubbleSort(nums);
	for(int i = 0; i < 3; i++){
		printf("%d\n", nums[i]);
	}
	
	return 0;
}