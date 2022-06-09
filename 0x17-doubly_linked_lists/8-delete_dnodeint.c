#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t list
 *      at  a given index.
 * @head: pointer to head of the list.
 * @index: index of the node to delete.
 *
 * Return: Upon Success -  1, otherwise - -1
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!head || !(*head))
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
