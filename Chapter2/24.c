#include <stdio.h>

void jolly(void);
void deny(void);

int main(void){
	for(int i = 0; i<3; i++){
		printf("For he's a ");
		jolly();
		printf("good fellow!\n");
	}
	deny();
}

void jolly(void){
	printf("jolly good");
}

void deny(void){
	printf("Which nobody can deny!\n");
}


