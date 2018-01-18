#include <stdio.h>

double harmonic(double i, double j);

int main(){
	printf("Please enter two ints: ");
	int i, j;
	while(scanf("%d %d", &i, &j) == 2){
		double result = harmonic(i,j);
		printf("Harmonic: %lf", result); 
	}
	return 0;
}

double harmonic(double i, double j){	
	double iInv = 1 / i;
	double jInv = 1 / j;
	double avg = (iInv + jInv) / 2;
	return 1 / avg;

}
