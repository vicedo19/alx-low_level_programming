#include "main.h"

/**
 * swap_int - swap values of integers
 *
 * @a: First integer swap
 *
 * *b: Second integer swap
 *
 * return: void
 */

int swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
