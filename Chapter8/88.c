#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


char getFirst(void);
void printMenue(void);
float getNumber(void);
void flushInputBuffer(void);

int main(void){
	int input;
	printMenue();
	while ((input = getFirst()) != 'q'){
		float first;
		printf("Please enter first number: ");
		first = getNumber();	
		float second;
		printf("Please enter second number: ");
		second = getNumber();
		switch (input){
			case ('a') : 	
				printf("%f + %f = %f\n", first, second, first + second);
				break;
			case ('b') : 					
				printf("%f - %f = %f\n", first, second, first - second);
				break;
			case ('c') :
				printf("%f * %f = %f\n", first, second, first * second);
				break;
			case ('d') :
				while(second == 0){
					printf("Dividing by 0 is forbidden. Please enter a new number:");
					second = getNumber();
				}
				printf("%f / %f = %f\n", first, second, first / second);
				break;
			default : // invalid input
				flushInputBuffer();
				printf("Please enter an valid operation.\n");
				continue;
		}
	}
	return 0;
}

void printMenue(void){
	printf("*****************************************************************\n");
	printf("Enter an operation:\n");
	printf("a) addition 				b) substraction\n");
	printf("c) multiplication 			d) division\n");
	printf("q) quit \n");
	printf("*****************************************************************\n");
}

void flushInputBuffer(void){
	while (getchar() != '\n')
		;
}

char getFirst(void){
	int ch;
	do{
		ch = getchar();		
	}while(isspace(ch));
	int remains;
	while ((remains = getchar()) != '\n' && remains != EOF)
		continue;
	return ch;
}


float getNumber(void){
	int ch;
	float num;

	while (scanf("%f", &num) != 1){
		while ((ch = getchar()) != '\n') 
			putchar(ch);
		printf(" is not a number.\n");
		printf("Please enter a number: ");
	}
	return num;
}


