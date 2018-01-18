#include <stdio.h>

int main(){
	printf("Please enter some input: ");
	int counter = 0;	
	char input;		
	while((input = getchar()) != EOF){
		
		if(input >= ' '){
			printf("Char: \'%c\' - ASCII: %d", input, input);
		}else if(input == '\n'){
			printf("Char: \'\\n\' - ASCII: %d\n", input);				
		}else if(input == '\t'){
			printf("Char: \'\\t\' - ASCII: %d", input);				
		}else{
			printf("Char: \'^%c\' - ASCII: %d", input + 64, input);
		}
		counter++;
		if(counter % 10 == 0){
			printf("\n");
		}else{
			printf(" ");
		}
	}
	return 0;
}
