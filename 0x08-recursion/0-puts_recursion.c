#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - used to write a string to stdout.
 *
 * @s: the string to be passed.
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
