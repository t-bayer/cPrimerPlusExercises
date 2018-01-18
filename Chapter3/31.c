#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	int MAX_INTEGER = INT_MAX;
	int int_overflow = MAX_INTEGER + 1;	
	printf("Largest int is %d\n", INT_MAX);
	printf("Interger Overflow by adding 1 to INT_MAX: %d\n", int_overflow);

	float MAX_FLOAT = FLT_MAX;
	float float_overflow = MAX_FLOAT * 2;	
	printf("Largest float is %f\n", MAX_FLOAT);
	printf("Float Overflow by adding 1 to FLT_MAX: %f\n", float_overflow);

	float MIN_FLOAT = FLT_MIN;
	float float_underflow = MIN_FLOAT / 2;	
	printf("Smalest float is %f\n", MAX_FLOAT);
	printf("Float Overflow by adding 1 to FLT_MAX: %f\n", float_overflow);
}
