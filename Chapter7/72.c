#include <stdio.h>
#include <ctype.h>

#define STOP '#'
int main(){
	printf("Please enter some kind of input (# quits):");
	char input;
	int chars = 0;
	while((input = getchar()) != STOP){
		if(chars % 8 == 0){
			printf("\n");
		}
		switch (input){
			case ' ' :
					printf("' ': %3d ", input);
					break;
			case '\t' :
					printf("'\\t': %3d ", input);
					break;
			case '\n' :
					printf("'\\n': %3d ", input);
					break;
			case '\b' :
					printf("'\\b': %3d ", input);
					break;
			default:
					printf(" %c : %3d ", input, input);
		}	
		chars++;
	}
	return 0;
}
