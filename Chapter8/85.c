#include <stdio.h>

int main(void){
	int guess = 50;
	int upperLimit = 100;
	int lowerLimit = 0;
	printf("Pick an integer from 1 to 100. I will try to guess it.\n ");
	printf("Respond with a l for lower, h for higher or c for correct\n");

	printf("Uh...is your number %d?\n", guess);

	char input;
	while ((input = getchar()) != 'c'){

		while(getchar() !='\n')
			continue;
		
		switch(input){
			case 'l':
				upperLimit = guess;				
				break;
			case 'h':
				lowerLimit = guess;
				break;
			default:
				printf("Unknown command\n");
				continue;
		}
		guess = (upperLimit + lowerLimit) / 2;
		printf("Well, then, is it %d?\n", guess);
			
	}
	printf("I knew I could do it!\n");

	return 0;
}
