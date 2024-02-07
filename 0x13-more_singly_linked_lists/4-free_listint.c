#include "lists.h"

/**
 * free_listint - frees the nodes of a struct
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head; /* traverse the list */
		head = head->next; /* update head to the next address */
		free(ptr); /* free as you traverse */
	}
}
