#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* AUTHOR: user2514386
 * You were camping with your friends far away from home, but when it's time
 * to go back, you realize that your fuel is running out and the nearest pump is
 * 50 miles away! You know that, on average, your car runs on about 25 miles
 * per gallon. There are 2 gallons left. Considering these factors, write a
 * function that tells you if it is possible to get to the pump or not. Function
 * should return true if it is possible and false if not. */

static bool
make_it(int distance, int mpg, int gallons)
{
	return distance <= mpg * gallons ? true : false;
}

int
main(int argc, char *argv[])
{
	printf("%i\n", make_it(50, 25, 2));
	printf("%i\n", make_it(100, 25, 2));
	printf("%i\n", make_it(50, 20, 2));
		
	return 0;
}
