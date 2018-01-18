#include <stdio.h>

double findDiff(double *arr, int arr_len);

int main(void){
	double numbers[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	printf("%lf\n", findDiff(numbers, sizeof(numbers) / sizeof(double)));
}

double findDiff(double *arr, int arr_len){
	double largest = arr[0];
	double smallest = arr[0];
	for(int i = 0; i < arr_len; i++){
		if(arr[i] > largest){
			largest = arr[i];
		}
		if(arr[i] < smallest){
			smallest = arr[i];
		}
	}
	return largest - smallest;
}

