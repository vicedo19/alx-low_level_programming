#include "main.h"
/**
 *factorial - factorial of a given number
 *@n: pointer block of memory to fill
 *Return: factorial
 */

int factorial(int n)
{
	/* Base Condition 1 */
	if (n < 0)
	{
		return (-1);
	}
	/* Base Condition 2 */
	if (n == 0)
	{
		return (1);
	}
	/* Recursive call */
	return (n * factorial(n - 1));
}
