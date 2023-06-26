#include "main.h"

/**
 * swap_int - swap values of integers
 *
 * return - void
 *
 * @n: An int value swap
 */

int swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
