#include <stdio.h>

void copy_arr(double *target, double *source, int arr_len);

int main(void){
	double source[2][2] = {{1.1, 2.2}, {3.3, 4.4}};
	double target[2][2];
		
	for(int i = 0; i < 2; i++){
		copy_arr(target[i], source[i], 2);   
	}

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%d - S: %lf, T1: %lf\n", i, source[i][j], target[i][j]);   
		}		
	}
}

void copy_arr(double *target, double *source, int arr_len){
	for(int i = 0; i < arr_len; i++){
		target[i] = source[i];
	}
}

