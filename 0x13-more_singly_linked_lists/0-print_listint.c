#include "lists.h"

/**
 * print_listint - print the elements of a linked list
 * @h: pointer to the list structure
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (num);
	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		num++;
	}

	return (num);
}
