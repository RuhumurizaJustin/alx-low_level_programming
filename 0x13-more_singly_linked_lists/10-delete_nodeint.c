#include <stdlib.h>
#include "lists.h"

/**
 * _listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list type listint_t
 * Return: the number of nodes
 */
size_t _listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
