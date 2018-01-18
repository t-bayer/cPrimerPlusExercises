#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void){
	int ch;
	printf("Please enter a line:\n");
	ch = get_first();
	printf("First non-whitespace is:");	
	printf("%c\n", ch);

return 0;
}
char get_first(void){
	int ch;
	do{
		ch = getchar();		
	}while(isspace(ch));
	int remains;
	while ((remains = getchar()) != '\n' && remains != EOF)
		continue;
	return ch;
}


