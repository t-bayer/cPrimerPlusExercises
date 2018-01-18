#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 10

void fetchWord(char * input);

int main(){
	char arr[N];
	fetchWord(arr);
	puts(arr);
}

void fetchWord(char * input){
	char ch;	
	bool inWord = false;
	while((ch = getchar()) != EOF){
		if(isspace(ch)){
			if(inWord){
				break;
			}else{
				continue;
			}
		}
		if(!inWord){
			inWord = true;
		}
		*input = ch;
		input++;
	} 
	if(ch != '\n'){
		while((ch = getchar()) != '\n'){
			continue;
		}
	}
}
