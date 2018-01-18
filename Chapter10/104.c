#include <stdio.h>

double findLargest(double *arr, int arr_len);

int main(void){
	double numbers[] = {1.1, 2.2, 3.3, 9.9, 5.5};
	printf("%lf\n", findLargest(numbers, sizeof(numbers) / sizeof(double)));
}

double findLargest(double *arr, int arr_len){
	double largest = arr[0];
	for(int i = 0; i < arr_len; i++){
		if(arr[i] > largest){
			largest = arr[i];
		}
	}
	return largest;
}

