#include "lists.h"

/**
 * find_listint_loop - finds the loop 
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (low && fast && fast->next)
	{
		fast = fast->next->next;
		low = low->next;
		if (fast == low)
		{
			low = head;
			while (low != fast)
			{
				low = low->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

