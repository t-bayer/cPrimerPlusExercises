#include <stdio.h>

int onbits(int n);

int main(void){
	int n, bits;
	printf("Enter an integer: ");
	while (scanf("%d", &n) == 1){
		while (getchar() != '\n') continue;
		bits = onbits(n);
		printf("There are %d 1 bits in %d\n", bits, n);
		printf("Enter an integer: ");
	}
	return 0;
}

int onbits(int n){
	int count = 0;
	while (n != 0){
		if (n & 1)
			count++;
		n >>= 1;
	}
	return count;
}
