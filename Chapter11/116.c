#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 50

int is_within(char ch, char const * input);

int main(){
	char input[SIZE];
	printf("Please enter a string to search: \n");
	fgets(input, SIZE, stdin);
	printf("Please enter a char: \n");
	char ch;	
	ch = getchar();
	if(ch != '\n'){
		while(getchar() != '\n'){
			continue;
		}
	}
	if(!is_within(ch, input)){
		puts("Character not found in string");
	} else {
		puts("Character occurces in string");
	}
}

int is_within(char ch, char const * input){
	while(*input != '\0'){
		if(*input == ch){
			return 1;
		}	
		input++;
	}
	return 0;
}
