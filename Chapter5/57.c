#include <stdio.h>

void cube(double number);

int main(void){
	printf("Please enter a number to be cubed: ");
	double number;
	scanf("%lf",&number);	
	cube(number);
	return 0;
}

void cube(double number){
	printf("cube = %.2lf\n", number * number * number);
}
