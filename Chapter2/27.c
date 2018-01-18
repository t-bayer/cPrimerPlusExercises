#include <stdio.h>

void smile();

int main(void){
	smile(3);
	printf("\n");
	smile(2);
	printf("\n");
	smile(1);
	printf("\n");
}

void smile(int times){
	for(int i = 0; i<times; i++){
		printf("Smile!");
	}	
}


