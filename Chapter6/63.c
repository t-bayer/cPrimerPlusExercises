#include <stdio.h>

int main(){
	for(int i=1; i < 7; i++){
		for(char c='F'; 'F' - c < i; c--){
			printf("%c", c);
		}
	printf("\n");
	}
	return 0;
}
