#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 10

void fetchWord(char * input, int n);

int main(){
	char arr[N];
	fetchWord(arr, N);
	puts(arr);
}

void fetchWord(char * input, int n){
	char ch;	
	bool inWord = false;
	int counter = 0; 
	while((ch = getchar()) != EOF && counter < n){
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
		counter++;
	} 
	if(ch != '\n'){
		while((ch = getchar()) != '\n'){
			continue;
		}
	}
}
