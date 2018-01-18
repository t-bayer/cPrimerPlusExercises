#include <stdio.h>

int bstoNum(char * pbin);

int main(void){
	char * pbin = "01001001";
	printf("%s in decimal: %d\n", pbin, bstoNum(pbin));
}

int bstoNum(char * pbin){
	int val = 0;	
	while(*pbin != '\0'){
		val <<= 1;
		if(*pbin == '1')
			val |= 1;
		pbin++;
	}
	return val;
}
