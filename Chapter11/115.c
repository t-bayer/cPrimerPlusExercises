#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 50

char * findChar(char * input, char ch);

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
	char * location = findChar(input, ch);
	if(location == NULL){
		puts("Character not found in string");
	} else {
		printf("Character first occurce at location %ld\n", location - input);
	}
}

char * findChar(char * input, char ch){
	while(*input != '\0'){
		if(*input == ch){
			return input;
		}	
		input++;
	}
	return NULL;
}
