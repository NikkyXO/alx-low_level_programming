#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: a pointer to head of a double linked list.
 * Return : Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{

	size_t len = 0;

	while (h)
	{
		len++;
		printf("-> %d elements\n", h->n);
		h = h->next;
	}
	return (len);
}
