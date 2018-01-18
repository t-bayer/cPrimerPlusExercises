#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

int main(int argc, char * argv[]){
	if(argc != 3){
		printf("Please provide a string and a filename as arguments\n");
		exit(EXIT_FAILURE);
	}
	FILE * fp;
	if ((fp = fopen(argv[2], "r")) == NULL){
		printf("Can't open the file\n");
		exit(EXIT_FAILURE);
	}
	char line[SIZE];
	while(fgets(line, SIZE, fp) != NULL){
		if(strstr(line, argv[1]) != NULL){
			fputs(line, stdout);
		}
	}
	fclose(fp);
	return 0;
}
	
