#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){
	printf("Please enter some input: ");
	float letters = 0;
	int words = 0;
	char input;
	bool inword = false;		
	while((input = getchar()) != EOF){
		if(isalpha(input)){
			letters++;
			if(!inword){
				inword = true;
				words++;
			}			
		}else{
			inword = false;
		}
	}
	printf("Average letters %.2f in %d words", letters / words, words);
	return 0;
}
