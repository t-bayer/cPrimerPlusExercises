#include "161.h"
#include <stdio.h>

#define INV(x) (1 / (x))
#define HARMONIC(x,y) (1 / ((INV(x) + INV(y)) / 2))

int main(void){
	float x = 5;
	float y = 7;
	printf("%f\n ", HARMONIC(x,y));
}
