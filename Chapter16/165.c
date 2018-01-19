#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printRandom(int * arr, int size, int picks);

int main(void){
  	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	printRandom(arr, 10, 5);
}

void printRandom(int * arr, int size, int picks){
	srand(time(NULL));	
	for(int i = 0; i < picks; i++){
		int index = rand() % size;		
		printf("Choosen element: %d\n", arr[index]); 
	}
	return;
}
