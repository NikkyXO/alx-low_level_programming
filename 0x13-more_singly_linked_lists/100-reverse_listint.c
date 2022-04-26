#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: pointer to head of linked list
 * Return: pointer to the first node of returned list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	prev = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
