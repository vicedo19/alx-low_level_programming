#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int n;

	while (i <= 9)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		i++;
	}
}
