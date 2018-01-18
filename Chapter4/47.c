#include <stdio.h>
#include <float.h>

int main(){
	double one = 1.0/3.0;
	float two = 1.0/3.0;
	printf("One: %.4f or %.12f or %.16f\n", one, one, one);
	printf("One: %.4f or %.12f or %.16f\n", two, two, two);
	printf("FLT_DIG: %d and DBL_DIG: %d\n", FLT_DIG, DBL_DIG);
	return 0;
}
