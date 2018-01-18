#include <stdio.h>

void copy_arr(double *target, double *source, int arr_len);
void copy_ptr(double *target, double *source, int arr_len);
void copy_ptrs(double *target, double *source, double * source_end);

int main(void){
	double source[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source+5);

	for(int i = 0; i < sizeof(source) / sizeof(double); i++){
		printf("S: %lf, T1: %lf, T2: %lf, T3: %lf\n", source[i], target1[i], target2[i], target3[i]);   
	}
}

void copy_arr(double *target, double *source, int arr_len){
	for(int i = 0; i < arr_len; i++){
		target[i] = source[i];
	}
}

void copy_ptr(double *target, double *source, int arr_len){
	for(int i = 0; i < arr_len; i++){
		*(target + i) = *(source + i);
	}
}

void copy_ptrs(double *target, double *source, double * source_end){
	for(double *ptr = source; ptr < source_end; ptr++, target++){
		*target = *ptr;
	}
}
