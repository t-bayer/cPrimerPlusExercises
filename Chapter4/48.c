#include <stdio.h>
#include <float.h>

#define LITERS_PER_GALLON 3.785
#define KM_PER_MILE 1.609


int main(){
	printf("Please enter the number of miles traveld: ");
	float miles;
	scanf("%f", &miles);
	printf("Please enter the number of gallons of gasoline consumed: ");
	float gallons;
	scanf("%f", &gallons);
	float miles_per_gallon = gallons / miles; 
	printf("Miles-per-gallon: %0.1f\n", miles_per_gallon);
	float liters_per_100km = 100 / miles_per_gallon * LITERS_PER_GALLON / KM_PER_MILE; 
	printf("Liters-per-100km: %0.1f\n", liters_per_100km);
	return 0;
}
