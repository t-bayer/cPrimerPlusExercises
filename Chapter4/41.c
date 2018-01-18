#include <stdio.h>

int main(){
	printf("Please enter your first and last name: ");
	char first[30];
	char last[30];
	scanf("%s %s", first, last);
	printf("Your name is: %s %s\n", first, last);
	return 0;
}
