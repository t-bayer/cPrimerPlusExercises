#include <stdio.h>
#include <ctype.h>

#define STOP '#'
int main(){
	printf("Please enter some kind of integers (0 quits):");
	char input;
	int subs = 0;
	while((input = getchar()) != STOP){	
		switch(input){
			case '%':
				subs++;
				putchar('!');
				continue;
			case '!':
				subs++;
				putchar('!');
				putchar('!');								
				break;
			default:
				putchar(input);
		}
	}
	printf("Subs made: %d", subs);
	return 0;
}
