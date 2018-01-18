#include <stdio.h>

int main(){
	unsigned int secondsPerYear = 31560000;
	printf("Please enter your age: ");
	int age;
	scanf("%u", &age);
	printf("Your age in seconds: %u\n", age * secondsPerYear);
	return 0;
}
