#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 *@head: the head of the list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
