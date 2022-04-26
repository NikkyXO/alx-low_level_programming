#include "lists.h"

/**
 * sum_listint - sum all the data(n) of a linked list
 * @head:pointer to the head of the list
 * Return: the sum of all the data or 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
