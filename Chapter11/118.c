#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 50

char * string_in(char *s1, char *s2);
char * get(char *string, int n);

int main(){
	char s1[SIZE];
	char s2[SIZE];
	char *location;

	printf("Enter a string: ");
	get(s1, SIZE);
	while (s1[0] != '\0'){
		printf("Enter a substring to look for: ");
		get(s2, SIZE);
		location = string_in(s1, s2);
		if (location == NULL)
			printf("%s not in %s\n", s2, s1);
		else
			printf("%s found in %s at index %lu\n", s2, s1, location - s1);
		printf("Enter a string (empty line to quit): ");
		get(s1, SIZE);
	}
	puts("Bye");
	return 0;
}

char * string_in(char *s1, char *s2){
	int i;
	while (*s1 != '\0'){
		i = 0;
		while (*(s1 + i) == *(s2 + i)){
			i++;
			if (*(s2 + i) == '\0')
				return s1;
		}
		s1++;
	}
	return NULL;
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
