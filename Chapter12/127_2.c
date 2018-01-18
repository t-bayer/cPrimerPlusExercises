#include "127.h"
#include <stdio.h>
#include <stdlib.h>

static int rolldie(int sides){
	return rand() % sides + 1;
}

int rolldice(int dice, int sides){
	int total = 0;
	for (int i = 0; i < dice; i++)
		total += rolldie(sides);
	return total;
}

void dicerolls(int sets, int dice, int sides){
	printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
	for (int i = 0; i < sets; i++)
		printf("%2d ", rolldice(dice, sides));
	putchar('\n');
}
