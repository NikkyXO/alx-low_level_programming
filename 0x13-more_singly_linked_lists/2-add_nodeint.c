#include "lists.h"

/**
 *add_nodeint - add a node to the beginning of a list.
 *@n: integer
 *@head: pointer to head of a linked list
 *Return:address of new node or otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;


	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
