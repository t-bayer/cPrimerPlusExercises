#include <stdio.h>

int main(){
	printf("Please enter a floating-point number: ");
	float number;
	scanf("%f", &number);
	printf("Your number is %0.1f or %0.1e \n", number, number);
	printf("Your number is %+0.3f or %0.3e \n", number, number);
	return 0;
}
