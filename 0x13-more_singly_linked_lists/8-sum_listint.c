#include "lists.h"
/**
 * sum_listint - calculates the all  a listint_t list
 * @head: first node
 *
 * Return: resulting i
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp = head;

	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}

	return (i);
}
