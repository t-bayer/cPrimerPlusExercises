#include <stdio.h>

int main(){
	printf("Please enter your height (inches) and your name: ");
	const float INCHES_PER_FEET = 12;	
	float height;
	char name[40];
	scanf("%f %s", &height, name);
	printf("%s, you are %.3f feet tall\n", name, height / INCHES_PER_FEET);
	return 0;
}
