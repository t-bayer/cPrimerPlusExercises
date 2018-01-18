#include <stdio.h>
#include <string.h>

int main(){
	printf("Please enter an Integer: ");
	int numbers[8];	
	for(int i=0; i<8; i++){
		scanf("%d", &numbers[i]);
		printf("Please enter an Integer: ");	
	}
	for(int i=7; i>=0; i--){
		printf("%d ", numbers[i]);
	}
	printf("\n");
	return 0;
}
