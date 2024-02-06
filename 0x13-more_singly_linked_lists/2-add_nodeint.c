#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of the list
 * @head: pointer to the first node
 * @n: the value for the new node
 * Return: pointer to the new node at the beginning
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (*head);
}
