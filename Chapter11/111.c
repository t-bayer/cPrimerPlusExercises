#include <stdio.h>

#define N 10

void fetch(char * input, int n);

int main(){
	char arr[N];
	fetch(arr, N);
	puts(arr);
}

void fetch(char * input, int n){
	for(int i = 0; i < n; i++){
		input[i] = getchar();
	}
}
