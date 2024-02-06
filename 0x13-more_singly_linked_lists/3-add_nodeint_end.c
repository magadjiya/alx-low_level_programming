#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: the pointer to the first node
 * @n: the new value for the new node
 * Return: the updated structure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *traverse;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
		traverse = *head;

	while (traverse->next != NULL)
		traverse = traverse->next;
	traverse->next = newNode;

	return (*head);
}
