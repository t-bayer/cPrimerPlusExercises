#include <stdio.h>
#include <stdlib.h>

#define SIZE 40

void get(char * string, int n);

int main(int argc, char * argv[]){
	printf("Please enter a filename:");
	char input[SIZE];
	get(input, SIZE);
	FILE * fp;
	if ((fp = fopen(input, "r")) == NULL){
		printf("Can't open the file\n");
		exit(EXIT_FAILURE);
	} 
	printf("Please enter a position:");
	long position;	
	while(scanf("%ld", &position) == 1){
		if(position < 0){
			break;
		}
		fseek(fp, position, SEEK_SET);
		char ch;		
		while((ch = getc(fp)) != EOF && ch != '\n'){
			putchar(ch);
		}
		putchar('\n');
		puts("Please enter a position");
	}
	fclose(fp);	
	return 0;
}

void get(char * string, int n){
	fgets(string, n, stdin);
	while (*string != '\0'){
		if (*string == '\n'){
			*string = '\0';
			break;
		}
		string++;
	}
}
