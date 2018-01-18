#include <stdio.h>
#include <ctype.h>

int letter_location(char ch);

int main(void){
	char ch;
	while ((ch = getchar()) != EOF){
		int location;			
		if ((location = letter_location(ch)) == -1)
			printf("%c is not a letter\n", ch);
		else
			printf("%c is a letter: location = %d\n", ch, location);
	} 
	return 0;
}

int letter_location(char ch){
	while(getchar() != '\n');
	if (isalpha(ch)){
		ch = tolower(ch);
		return (ch - 'a' + 1);
	}
	else
		return -1;
}
