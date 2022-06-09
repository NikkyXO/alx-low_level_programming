#include "lists.h"
/**
 * add_dnodeint_end - Adds a node to the end of the list
 * @head: the head of the list
 * @n: The integer number of the new node
 * Return: if the function succeeds -The address
 * of the new node, otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new_node = NULL;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new_node->prev = temp;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
