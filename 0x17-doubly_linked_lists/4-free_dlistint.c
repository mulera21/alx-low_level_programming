
#include "lists.h" 
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		temp = current;
		free(temp);
	}
}

