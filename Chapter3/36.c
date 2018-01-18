#include <stdio.h>

int main(){
	float moleculeMass = 3.0e-23;
	float gramsPerQuart = 950;
	float quarts;
	printf("Please enter an amount of water: ");
	scanf("%f", &quarts);
	printf("Number of water molecules in that amount: %f\n", quarts * gramsPerQuart / moleculeMass);
	return 0;
}
