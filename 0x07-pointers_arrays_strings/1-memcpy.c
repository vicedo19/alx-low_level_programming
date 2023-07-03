#include <string.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied from
 * @n: number of bytes to be copied
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int d = n;

	for (; s < d; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
