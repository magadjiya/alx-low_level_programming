#include "lists.h"

/**
 * free_listint2 - free a linked list, set head to NULL
 * @head: pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
