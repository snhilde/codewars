#include <stdio.h>
#include <stdlib.h>

/* TITLE: Is n divisible by x and y?
 * AUTHOR: naaz
 * KYU: 8
 * URL: https://www.codewars.com/kata/is-n-divisible-by-x-and-y
 * 
 * Create a function isDivisible(n, x, y) that checks if a number n is
 * divisible by two numbers x AND y. All inputs are positive, non-zero digits.
 * 
 * Example:
 * 		isDivisible(3, 1, 3) -> true because 3 is divisible by 1 and 3
 * 		isDivisible(12, 2, 6) -> true because 12 is divisible by 2 and 6
 * 		isDivisible(100, 5, 3) -> false because 100 is not divisible by 3
 * 		isDivisible(12, 7, 5) -> false because 12 is neither divisible by 7 nor 5 */

static void
isDivisible(int n, int x, int y)
{
	printf("---\n");
	printf("n: %i\nx: %i\ny: %i\n", n, x, y);
	printf("%s\n", (!(n % x) && !(n % y)) ? "true" : "false");
}

int
main(int argc, char *argv[])
{
	isDivisible(3, 1, 3);
	isDivisible(12, 2, 6);
	isDivisible(100, 5, 3);
	isDivisible(12, 7, 5);
		
	return 0;
}
