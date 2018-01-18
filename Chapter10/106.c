#include <stdio.h>

void reverse(double *arr, int arr_len);
void printArr(double * arr, int arr_len);

#define SIZE 5
int main(void){
	double numbers[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	printf("Original: \n");
	printArr(numbers, SIZE);
	reverse(numbers, SIZE);
	printf("Reversed: \n");
	printArr(numbers, SIZE);

}

void reverse(double *arr, int arr_len){
	double tmp;	
	for(int i = 0; i < arr_len / 2; i++){
		tmp = arr[arr_len - 1 - i];
		arr[arr_len -1 -i] = arr[i];
		arr[i] = tmp;
	}
}

void printArr(double * arr, int arr_len){
	for(int i = 0; i < arr_len; i++){
		printf("%lf ", arr[i]);
	}	
	printf("\n");
}

