#include <stdio.h>

void printer(char ch, int i, int j);

int main(){
	printf("Please enter a char and two ints: ");
	int i, j;
	char ch;	
	while(scanf("%c %d %d", &ch, &i, &j) == 3){
		printer(ch, i,j);
	}
	return 0;
}


void printer(char ch, int i, int j){	
	for(int lineCounter = 0; lineCounter < j; lineCounter++){
		for(int counter = 0; counter < i; counter++){
			putchar(ch);
		}
		putchar('\n');
	}
}
