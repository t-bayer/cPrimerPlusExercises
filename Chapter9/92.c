#include <stdio.h>

void chline(char ch, int i, int j);

int main(){
	printf("Please enter a char and two ints: ");
	int i, j;
	char ch;	
	while(scanf("%c %d %d", &ch, &i, &j) == 3){
		chline(ch, i,j);
		printf("\n");
	}
	return 0;
}


void chline(char ch, int i, int j){
	int col;	
	for(col = 1; col < i; col++){
		putchar(' ');
	}

	for(; col <= j; col++){
		putchar(ch);
	}	
}
