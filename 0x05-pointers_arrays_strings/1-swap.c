#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers
 *
 * @a: First argument to be swapped
 *
 * *b: Second argument to be swapped
 *
 * return: void.
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
