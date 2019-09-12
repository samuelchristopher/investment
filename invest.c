/**
 * CS1010 AY2017/8 Semester 1 Lab1 Ex1
 * invest.c
 * This program calculates the final amount given principal amount,
 * interest rate, and number of years, based on compound interest.
 * Samuel Paul Christopher
 * C08
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	int principal, numYears;
	float money, numerator, denominator, rate;
	double ratePower;

	printf("Enter principal amount: ");
	scanf("%d", &principal);

	printf("Enter interest rate   : ");
	scanf("%f", &rate);

	printf("Enter number of years : ");
	scanf("%d", &numYears);

	ratePower =  pow(rate/100, numYears+1);
	numerator = principal * (1-ratePower);
	denominator = 1 - (rate/100);

	money = (numerator) / (denominator);

	printf("Amount = $%0.2f\n", money);

	return 0;
}
