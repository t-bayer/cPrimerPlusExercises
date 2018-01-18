#include <stdio.h>

void temperatures(double temp);

int main(void){
	printf("Enter a fahrenheit temperature: ");
	double fahrenheit;				
	while(scanf("%lf",&fahrenheit) == 1){	
		temperatures(fahrenheit);
		printf("Enter a fahrenheit temperature: ");
	}
	printf("bye\n");
	return 0;
}

void temperatures(double temp){
	const double FAHR_TO_CEL_SCALE = 5.0 / 9.0;
	const double FAHR_TO_CEL_OFFSET = 32.0;
	const double CEL_TO_KEL_OFFSET = 273.16;
	printf("Fahrenheit: %.2f\n", temp);
	double celsius = FAHR_TO_CEL_SCALE * (temp - FAHR_TO_CEL_OFFSET);
	printf("Celsius: %.2f\n", celsius);
	double kelvin = celsius + CEL_TO_KEL_OFFSET;
	printf("Kelvin: %.2f\n", kelvin);
}

