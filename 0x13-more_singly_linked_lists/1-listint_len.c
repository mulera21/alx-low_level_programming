#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head node of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t ln = 0;

	while (h != NULL)
	{
		ln++;
		h = h->next;
	}
	return (ln);
}
