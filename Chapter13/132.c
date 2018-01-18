#include <stdio.h>
#include <stdlib.h>

void copyFiles(FILE * input, FILE * destination);

int main(int argc, char * argv[]){
	if(argc != 3){
		puts("arg1 must specify the orignal file and arg2 the destination file!");
		exit(EXIT_FAILURE);
	}	
	FILE * fpInput;	
	if((fpInput = fopen(argv[1], "rb")) == NULL){
		puts("Can't open original file");
		exit(EXIT_FAILURE);
	} 
	FILE * fpOutput;	
	if((fpOutput = fopen(argv[2], "wb")) == NULL){
		puts("Can't open destination file");
		exit(EXIT_FAILURE);
	}
	copyFiles(fpInput, fpOutput);
	return 0;
}


void copyFiles(FILE * input, FILE * destination){
	char ch;	
	while((ch = getc(input)) != EOF){
		putc(ch, destination);
	}
}
