#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *@head: head of the list
 *@idx: index of the node
 *@n: integer
 * Return: address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *prev, *new_node;

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	prev = *head;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		if (i == idx)
		{
			temp = new_node->next;
			prev->next = new_node;
			return (new_node);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (idx == i)
	{
		prev->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
