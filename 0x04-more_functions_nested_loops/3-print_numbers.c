#include"main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
