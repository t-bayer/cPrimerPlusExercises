#include <stdio.h>
#include <ctype.h>

int main(){
	printf("Please enter some input: ");
	int counterLower = 0;
	int counterUpper = 0;
	int counterOther = 0;	
	char input;		
	while((input = getchar()) != EOF){
		if(isupper(input)){
			counterUpper++;
		}else if(islower(input)){
			counterLower++;				
		}else{
			counterOther++;
		}
	}
	printf("Upper: %d Lower: %d Other: %d", counterLower, counterUpper, counterOther);
	return 0;
}
