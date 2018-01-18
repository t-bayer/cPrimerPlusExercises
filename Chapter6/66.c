#include <stdio.h>

int main(){
	printf("Please enter a lower limit: ");
	int lower;
	scanf("%d", &lower);
	printf("Please enter an upper limit: ");
	int upper;
	scanf("%d", &upper);

	for(int i=lower; i <= upper; i++){
		printf("%5d %5d %5d\n", i, i*i, i*i*i); 
	}
}
