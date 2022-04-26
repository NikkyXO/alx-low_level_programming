#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @index: index of nth node
 * @head: pointer to head of list
 * Return: the index of the node , or NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
