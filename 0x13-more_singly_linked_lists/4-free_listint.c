#include "lists.h"

/**
 * free_listint - function that frees the list
 * @head: pointer to the head of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
