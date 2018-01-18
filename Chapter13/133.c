#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFiles(FILE * input, FILE * destination);
void getFilename(char * string, int n);

#define SIZE 40

int main(int argc, char * argv[]){
	char inputName[SIZE];
	char outputName[SIZE];
	puts("Please enter a filename serving as input file");
	getFilename(inputName, SIZE);
	puts("Please enter a filename serving as destination file");
	getFilename(outputName, SIZE);		
	FILE * fpInput;	
	if((fpInput = fopen(inputName, "r")) == NULL){
		puts("Can't open original file");
		exit(EXIT_FAILURE);
	} 
	FILE * fpOutput;	
	if((fpOutput = fopen(outputName, "w")) == NULL){
		puts("Can't open destination file");
		exit(EXIT_FAILURE);
	}
	copyFiles(fpInput, fpOutput);
	return 0;
}


void copyFiles(FILE * input, FILE * destination){
	char ch;	
	while((ch = getc(input)) != EOF){
		putc(toupper(ch), destination);
	}
}

void getFilename(char * string, int n){
	fgets(string, n, stdin);
	while (*string != '\0'){
		if (*string == '\n'){
			*string = '\0';
			break;
		}
		string++;
	}
}
