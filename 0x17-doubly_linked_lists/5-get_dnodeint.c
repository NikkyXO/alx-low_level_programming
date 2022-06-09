#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in the dlistint_t list
 * @head: the head of the list
 * @index: the index to locate
 * Return: if the node does not exist - NULL.
 * otherwise - th address of the located node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
