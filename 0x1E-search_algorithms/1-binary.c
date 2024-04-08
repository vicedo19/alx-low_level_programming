#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to array
 * @size: Size of the array
 * @value: Value to be searched
 * Return: Index where the value is loacted, -1 if array is NULL or value noF
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lb, ub, mid;

	lb = 0;
	ub = size - 1;

	if (array == NULL)
		return (-1);
	print_array(array, lb, ub);
	while (lb <= ub)
	{
		mid = (lb + ub) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			ub = mid - 1;
			print_array(array, lb, ub);
		}
		else
		{
			lb = mid + 1;
			print_array(array, lb, ub);
		}
	}
	return (-1);
}

/**
 * print_array - Prints an array
 * @array: Pointer to array
 * @lb: Lower bound
 * @ub: Upper bound
 * Return: Nothing
 */

void print_array(int *array, size_t lb, size_t ub)
{
	size_t i;

	if (lb <= ub)
		printf("Searching in array: ");
	for (i = lb; i <= ub; i++)
	{
		if (i == ub)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
