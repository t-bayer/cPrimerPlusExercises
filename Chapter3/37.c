#include <stdio.h>

int main(){
	printf("Please enter a height in inches: ");
	float inches;
	scanf("%f", &inches);
	printf("Your input in cm: %0.2f\n", inches * 2.54);
	return 0; 
}
