#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	int l_digit = n % 10;

	if (l_digit < 0)
	{
		l_digit = l_digit * -1;
	}
	_putchar(l_digit + '0');
	return (l_digit);
}
