#include <stdio.h>
#include <string.h>

int main(){
	printf("Please enter your first name: ");
	char first[30];
	scanf("%s", first);
	int length = strlen(first);
	printf("Your first name is \"%s\"\n", first);
	printf("Your first name is \"%20s\"\n", first);
	printf("Your first name is \"%-20s\"\n", first);
	printf("Your first name is \"%*s\"\n", length + 3, first);		
	return 0;
}
