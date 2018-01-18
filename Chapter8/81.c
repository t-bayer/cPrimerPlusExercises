#include <stdio.h>

int main(){
	printf("Please enter some input: ");
	int counter = 0;	
	while(getchar() != EOF){
		counter++;
	}
	printf("Characters entered: %d\n", counter);
	return 0;
}
