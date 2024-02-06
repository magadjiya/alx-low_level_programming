#include "lists.h"

/**
 * listint_len - return the no of elements in a linked list
 * @h: pointer to the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (count);

	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
