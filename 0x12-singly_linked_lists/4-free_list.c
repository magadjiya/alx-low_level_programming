#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: ptr to the list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;

		if (ptr->str != NULL)
			free(ptr->str);
		free(ptr);
	}
}
