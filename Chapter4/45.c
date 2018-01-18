#include <stdio.h>

int main(){
	printf("Please enter your download speed in mb/s: ");
	float speed;
	scanf("%f", &speed);
	printf("Please enter the size of a file in MB: ");
	float size;
	scanf("%f", &size);	
	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds\n", 			speed, size, size * 8 / speed);
	return 0;
}
