#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a list at a given position
 * @h: a pointer to head of the list
 * @n: An integer
 * Return: if failure -NULL otherwise - The address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
