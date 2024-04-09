#include <math.h>
#include"search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present or head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size); /* Calculate jump step */
	listint_t *current = list;
	listint_t *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n < value)
	{
		prev = current;
		for (size_t i = 0; i < jump && current->next != NULL; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, current->index);
	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}

/**
 * create_list - Function to create a linked list from an array
 *
 * @array: input array
 * @size: size of the array
 * Return: return the list
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *head = NULL;
	listint_t *temp = NULL;
	listint_t *current = NULL;

	for (size_t i = 0; i < size; i++)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
		{
			free_list(head);
			return (NULL);
		}
		temp->n = array[i];
		temp->index = i;
		temp->next = NULL;

		if (head == NULL)
		{
			head = temp;
			current = head;
		}
		else
		{
			current->next = temp;
			current = current->next;
		}
	}

	return (head);
}

/**
 * print_list - prints the list
 *
 * @head: head of the array
 */
void print_list(listint_t *head)
{
	while (head != NULL)
	{
		printf("%d", head->n);
		if (head->next != NULL)
			printf(" -> ");
		head = head->next;
	}
	printf("\n");
}

/**
 * free_list -frees memory allocated for the list
 *
 * @head: head of the array
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
