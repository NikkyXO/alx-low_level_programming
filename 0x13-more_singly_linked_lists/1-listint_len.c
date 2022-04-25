#include "lists.h"

/**
 * listint_len - returns the number of elements in the list.
 * @h: head of a linked list.
 * Return: numberof nodes
 */

size_t listint_len(const listint_t *h)
{
	listint_t *temp = h;
	size_t size = 0;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;

	}
	return (size);
}
