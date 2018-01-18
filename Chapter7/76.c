#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '#'
int main(){
	printf("Please enter some kind of integers (# quits):");
	char input;
	int counter = 0;
	bool e;	
	while((input = getchar()) != STOP){	
		if(input == 'e'){
			e = true;		
		}else if(input == 'i' && e){
			e = false;
			counter++;
		}
	}
	printf("Counter: %d", counter);
	return 0;
}
