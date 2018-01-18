#include <stdio.h>

int findLargest(int *arr, int arr_len);

int main(void){
	int numbers[] = {1, 2, 3, 4, 5};
	printf("%d\n", findLargest(numbers, sizeof(numbers) / sizeof(int)));
}

int findLargest(int *arr, int arr_len){
	int largest = arr[0];
	for(int i = 0; i < arr_len; i++){
		if(arr[i] > largest){
			largest = arr[i];
		}
	}
	return largest;
}

