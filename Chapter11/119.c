#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 50

void reverse_string(char *string);
char * get(char *string, int n);

int main(){
	char string[SIZE];
	printf("Enter a string to reverse: ");
	get(string, SIZE);
	while (string[0] != '\0')
	{
		reverse_string(string);
		printf("Your string reversed: %s\n", string);

		printf("Enter a string to reverse (empty line to quit): ");
		get(string, SIZE);
	}

	puts("Bye");
return 0;
}

void reverse_string(char *string){
	char *end = string;
	char tmp;
	while (*(end + 1) != '\0')
		end++;
	while (string < end){
		tmp = *string;
		*start = *end;
		*end = tmp;
		string++;
		end--;
	}	
}

char * get(char *string, int n){
	char *return_value = fgets(string, n, stdin);
	while (*string != '\0')	{
		if (*string == '\n'){
			*string = '\0';
			break;
		}
		string++;
	}
	return return_value;
}
