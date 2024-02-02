#include "lists.h"

/**
 * list_len - returns the number of elements in list_t
 * @h: ptr to singly linked list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
