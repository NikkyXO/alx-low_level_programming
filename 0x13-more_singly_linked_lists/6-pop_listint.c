#include "lists.h"

/**
 * int pop_listint - deletes the head node of a linked list
 * @head: the head node
 * Return: head node data or if empty 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head == NULL)
		return (n);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
