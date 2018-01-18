#include <stdio.h>
#include <string.h>

float calculation(float num1, float num2);

int main(){
	printf("Please enter two floating-point numbers: ");
	float num1, num2;	
	while((scanf("%f %f", &num1, &num2)) == 2){
		printf("(%.3f - %.3f)/(%.3f * %.3f) = %.3f\n", num1, num2, num1, num2,
			calculation(num1,num2));
		printf("Please enter two floating-point numbers: ");		
	}
}

float calculation(float num1, float num2){
	return (num1 - num2)/(num1 * num2);
}
