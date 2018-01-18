#include <stdio.h>
#include <ctype.h>

int main(){
	printf("Please enter some kind of input (# quits):");
	char input;
	int spaces = 0;
	int newlines = 0;
	int chars = 0;
	while((input = getchar()) != '#'){
		if(input == ' '){
			spaces++;
		}else if(input == '\n'){
			newlines++;
		}else{
			chars++;
		}		
	}
	printf("Number of spaces: %d, number of newlines: %d, number of other chars: %d", 
		spaces, newlines, chars);
	return 0;
}
