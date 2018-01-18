#include <stdio.h>

int main(){
	const float CM_PER_IN = 2.54;
	const int IN_PER_FT = 12;
	float cm = 1;
	while(cm > 0){		
		printf("Enter a heigth in centimeters: ");
		scanf("%f", &cm);
		float heightInches = cm / CM_PER_IN;
		int feet = (int) heightInches / IN_PER_FT;
		float inches = heightInches - feet * IN_PER_FT; 		
		printf("%.2f cm = %d feet, %.1f inches\n", 
			cm,  feet , inches);
	}
	printf("bye\n");
	return 0;
}
