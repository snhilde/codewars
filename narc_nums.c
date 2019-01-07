#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>

/* TITLE: Narcissistic Numbers
 * AUTHOR: Staples
 * KYU: 7
 * 
 * A Narcissistic Number is a number of length n in which the sum of its digits
 * to the power of n is equal to the original number. If this seems confusing,
 * refer to the example below.
 * 
 * Ex. 153, where n=3 (number of digits in 153)
 * 
 * 1^3 + 5^3 + 3^3 = 153
 * 
 * Write a method is_narcissistic(i) which returns whether or not i is a
 * Narcissistic Number.
*/

static bool
is_narcissistic(int num)
{
	int number, digits, i, total;
	
	number = num;
	digits = log10(num) + 1;
	
	for (i = digits, total = 0; i; i--) {
		total += pow(number % 10, digits);
		number /= 10;
	}
	
	return total == num ? true : false;
}

int
main(int argc, char *argv[])
{
	printf("%i\n", is_narcissistic(153));
	printf("%i\n", is_narcissistic(1000));
	
	int max = 100000, i;
	
	for (i = 1; i < max; i++) {
		if (is_narcissistic(i))
			printf("%i: true\n", i);
	}
	
	return 0;
}
