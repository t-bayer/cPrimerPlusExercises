#include <stdio.h>

void copy_arr(double *target, double *source, int arr_len);
void printArr(double * arr, int arr_len);

int main(void){
	double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[3];
		
	copy_arr(target, source + 2, 3);   
	printArr(target, 3);
}

void copy_arr(double *target, double *source, int arr_len){
	for(int i = 0; i < arr_len; i++){
		target[i] = source[i];
	}
}

void printArr(double * arr, int arr_len){
	for(int i = 0; i < arr_len; i++){
		printf("%lf ", arr[i]);
	}	
	printf("\n");
}

