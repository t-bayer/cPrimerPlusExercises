#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define PAY_RATE 10.0
#define OVERTIME_ADD 1.5
#define OVERTIME_THRESHOLD 40
#define TAX_RATE 0.15
#define TAX_BRACKET_1 300.0
#define TAX_RATE_2 0.20
#define TAX_BRACKET_2 450.0
#define TAX_RATE_3 0.25

float calulate_taxes(float gross_pay);
float calculate_gross_pay(float hours);

int main(){
	printf("Please enter hours worked in a week:");
	float hours;
	if(scanf("%f", &hours) == 1){
		float gross_pay, taxes;		
		gross_pay = calculate_gross_pay(hours);
		taxes = calculate_taxes(gross_pay);
		printf("For %.1f hours of work you make $%.2f and pay $%.2f in taxes.\n",
			hours, gross_pay, taxes);
	}else{
		printf("Invalid input..");
	}
	return 0;
}

float calculate_gross_pay(float hours){
	if (hours > OVERTIME_THRESHOLD)
		return OVERTIME_THRESHOLD * PAY_RATE + (hours - OVERTIME_THRESHOLD) * PAY_RATE * OVERTIME_ADD;
	else
		return hours * PAY_RATE;
}

float calulate_taxes(float gross_pay){
	if (gross_pay > TAX_BRACKET_2)
		return TAX_RATE_3 * (gross_pay - TAX_BRACKET_2) + TAX_RATE_2 * (TAX_BRACKET_2 - TAX_BRACKET_1) + TAX_RATE * TAX_BRACKET_1;
	else if (gross_pay > TAX_BRACKET_1)
		return TAX_RATE_2 * (gross_pay - TAX_BRACKET_1) + TAX_RATE * TAX_BRACKET_1;
	else
		return TAX_RATE * gross_pay;
}
