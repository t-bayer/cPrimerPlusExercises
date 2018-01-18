#include <stdio.h>

#define ROWS 3
#define COLS 5

void doubleArr(int (*source)[COLS], int rows);
void printArr(int (*arr)[COLS], int rows);


int main(void){
	int arr1[ROWS][COLS] = {{1,2,3,4,5},
				{1,2,3,4,5},
				{1,2,3,4,5}};
	printArr(arr1, ROWS);
	doubleArr(arr1, ROWS);
	printArr(arr1, ROWS);
	return 0;
}


void doubleArr(int (*source)[COLS], int rows){
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < COLS; j++){
			source[i][j] = source[i][j] * 2;		
		}
	}
}

void printArr(int (*arr)[COLS], int rows){
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < COLS; j++){
			printf("%d ", arr[i][j]);		
		}
		putchar('\n');	
	}
}

