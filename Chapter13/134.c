#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	if(argc < 2){
		puts("Please provide some filenames as arguments");
		exit(EXIT_FAILURE);
	}
	for(int i = 1; i <= argc; i++){
		FILE * fp;
		if((fp = fopen(argv[i], "r")) == NULL){
			continue;
		}	
		char ch;
		while((ch = getc(fp)) != EOF){
			putc(ch, stdout);
		}
	} 	
	return 0;
}

