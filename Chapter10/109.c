#include <stdio.h>

void copy_arr_2dim(int rows, int columns, double source[rows][columns], double target[rows][columns]);
void printArr_2dim(int rows, int columns, double arr[rows][columns]);

#define ROWS 3
#define COLUMNS 5

int main(void){
	double source[ROWS][COLUMNS] = {{1.1, 2.2, 3.3, 4.4, 5.5},
			       {1.1, 2.2, 3.3, 4.4, 5.5},
			       {1.1, 2.2, 3.3, 4.4, 5.5}};
	double target[ROWS][COLUMNS];
		
	copy_arr_2dim(ROWS, COLUMNS, source, target);

	printf("Array 1:\n");
	printArr_2dim(ROWS, COLUMNS, source);
	putchar('\n');
	printf("Array2:\n");
	printArr_2dim(ROWS, COLUMNS, target);
}

void copy_arr_2dim(int rows, int columns, double source[rows][columns], double target[rows][columns]){
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLUMNS; j++){
			target[i][j] = source[i][j];	
		}				
	}
}

void printArr_2dim(int rows, int columns, double arr[rows][columns]){
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLUMNS; j++){
			printf("%10.3f ", arr[i][j]);	
		}
		printf("\n");				
	}	
}

