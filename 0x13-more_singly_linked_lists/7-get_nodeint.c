#include "lists.h"

/**
 * get_nodeint_at_index - get node at given index
 * @head: pointer to the node
 * @index: the index we're looking for
 * Return: the node if found, NULL if nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;

	while (ptr)
	{
		/* loop from 0th node till the index given */
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}

	return (NULL);
}
