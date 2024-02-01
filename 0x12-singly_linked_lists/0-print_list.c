#include "lists.h"

/**
 * print_list- prints all elements of a self ref provided
 * @h: pointer to the structure list_t
 * Return: total number of nodes in the struct
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}

	return (count);
}
