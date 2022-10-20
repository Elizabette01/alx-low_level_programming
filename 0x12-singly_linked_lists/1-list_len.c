#include "lists.h"
/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: The linked list_t list
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
