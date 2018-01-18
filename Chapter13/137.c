#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

FILE * openFile(char * name);
void getLine(char * st, int n, FILE * fp);

int main(int argc, char * argv[]){
	if(argc != 3){
		puts("Please provide two filenames as arguments");
		exit(EXIT_FAILURE);
	}
	FILE * f1 = openFile(argv[1]);
	FILE * f2 = openFile(argv[2]);
	while(!(feof(f1) && feof(f2))){
		char line[SIZE];
		getLine(line, SIZE, f1);				
		if(!(feof(f1))){
			printf("F1: %s\n", line);	
		}
		getLine(line, SIZE, f2);				
		if(!(feof(f2))){
			printf("F2: %s\n", line);	
		}		
	}
	return 0;
}

FILE * openFile(char * name){
	FILE * fp;	
	if((fp = fopen(name, "r")) == NULL){
		puts("Could not open file");
		exit(EXIT_FAILURE);
	}
	return fp;
}

void getLine(char * st, int n, FILE * fp){
	fgets(st, n, fp);
	while (*st != '\0'){
		if (*st == '\n'){
			*st = '\0';
			break;
		}
		st++;
	}
}
