#include <stdio.h>

int main(){
	printf("Please enter a volume in pint: ");
	float pints;
	scanf("%f", &pints);
	printf("Your volume in cups: %f\n", pints * 8);
	printf("Your volume in ounces: %f\n", pints * 8 * 8);
	printf("Your volume in tablespoons: %f\n", pints * 8 * 8 * 2);
	printf("Your volume in teaspoons: %f\n", pints * 8 * 8 * 2 * 3);
	return 0;
}
