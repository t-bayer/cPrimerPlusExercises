#include <stdio.h>

int main(){
	printf("Please enter a floating point number: ");
	float input;
	scanf("%f", &input);
	printf("fixed-point notation: %f\n", input);
	printf("exponential notation: %e\n", input);
	printf("P notation: %a\n", input);
	return 0;
}
