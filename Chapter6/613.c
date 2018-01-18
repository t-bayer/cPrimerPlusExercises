#include <stdio.h>

int main(void){
	int elements[8];
	int power = 1;	
	for(int i=0; i<8; i++){
		power *= 2;
		elements[i] = power;
	}
	int i = 0;
	do{
		printf("%d ", elements[i]);
		i++; 
	}while(i < 8);
	printf("\n");
	return 0;
}
