#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int parsebinarystring(const char * string);
char * tobinarystring(int n, char * string, int strlen);

int main(int argc, char * argv[]){
	if(argc != 3){
		printf("Please provide two binary strings\n");
		exit(EXIT_FAILURE);
	}
	int first = parsebinarystring(argv[1]);
	int second = parsebinarystring(argv[2]);
	int strlen = sizeof(int) * CHAR_BIT + 1;
	char binstring[strlen];
	printf("~%s = %s\n", argv[1], tobinarystring(~first, binstring, strlen));
	printf("~%s = %s\n", argv[2], tobinarystring(~second, binstring, strlen));
	printf("%s & %s = %s\n", argv[1], argv[2], tobinarystring(first & second, binstring, strlen));
	printf("%s | %s = %s\n", argv[1], argv[2], tobinarystring(first | second, binstring, strlen));
	printf("%s ^ %s = %s\n", argv[1], argv[2], tobinarystring(first ^ second, binstring, strlen));
	return 0;
}

int parsebinarystring(const char * string){
	int val = 0;
	while (*string != '\0'){
		val <<= 1;
		if (*string != '0' && *string != '1'){
			printf("Input is not binary\n");
			return 0;
		}
		if (*string == '1')
			val |= 1;
		string++;
	}
	return val;
}

char * tobinarystring(int n, char * string, int strlen){
	char * start = string;
	string += (strlen - 1);
	*string = '\0';
	string--;
	if (n == 0){
		*string = '0';
		return string;
	}
	while (n != 0 && string >= start){
		*string = (n & 1) + '0';
		n = n >> 1;
		string--;
	}
	return ++string;
}
