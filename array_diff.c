#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

/* TITLE: Array.diff
 * AUTHOR: marcinbunsch
 * KYU: 6
 * URL: https://www.codewars.com/kata/array-dot-diff
 * 
 * Your goal in this kata is to implement a difference function, which subtracts
 * one list from another and returns the result.
 * 
 * It should remove all values from list a, which are present in list b.
 * 
 * array_diff([1, 2], [1]) ==> [2]
*/

static void
array_diff(int *arr1, size_t arr1_size, int *arr2, size_t arr2_size)
{
}

int
main(int argc, char *argv[])
{
	int arr1[] = {1, 2};
	int arr2[] = {1};
	
	array_diff(arr1, 2, arr2, 1);
	
	return 0;
}
