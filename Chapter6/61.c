#include <stdio.h>

int main(){
	char letters[26];
	int i;
	char c;
	for(i=0, c = 'a'; c <= 'z'; c++, i++){
		letters[i] = c;
	}

	for(i=0; i < 26; i++){
		printf("%c ", letters[i]);
	}
	printf("\n");
	return 0;
}
