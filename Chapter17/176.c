#include <stdio.h>
#include "binarySearch.h"

int main(void){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 0; i < 15; i++){
		printf("%d in array? %s\n", i, binarysearch(arr, 10, i) ? "yes" : "no");
	}
}
