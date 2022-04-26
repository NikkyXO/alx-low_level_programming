#include "lists.h"

/**
 * listint_len - returns the number of elements in the list.
 * @h: pointer to head of a linked list.
 * Return: numberof nodes
 */

size_t listint_len(const listint_t *h)
{

	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;

	}
	return (size);
}
