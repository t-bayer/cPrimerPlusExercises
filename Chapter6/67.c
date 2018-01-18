#include <stdio.h>
#include <string.h>

int main(){
	printf("Please enter a word: ");
	char word[40];
	scanf("%s", word);
	for(int i=strlen(word); i >= 0; i--){
		printf("%c", word[i]); 
	}
	printf("\n");
}
