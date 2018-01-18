#include <stdio.h>

void printArr(int * arr, int arr_len);
void sumArrs(int * source1, int * source2, int * target, int arr_len);

#define SIZE 4

int main(void){
	int arr1[SIZE] = {2,4,5,8};
	int arr2[SIZE] = {1,0,4,6};
	int arr3[SIZE];

	sumArrs(arr1, arr2, arr3, SIZE);
	printArr(arr3, SIZE);
}


void sumArrs(int * source1, int * source2, int * target, int arr_len){
	for(int i = 0; i < arr_len; i++){
		target[i] = source1[i] + source2[i];	
	}	
}

void printArr(int * arr, int arr_len){
	for(int i = 0; i < arr_len; i++){
		printf("%d ", arr[i]);
	}	
	printf("\n");
}

