#include "lists.h"

/**
 * sum_listint - add all the integer values of the node
 * @head: pointer to the first node
 * Return: sum of all the values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *traverse;

	if (head == NULL)
		return (sum);

	traverse = head;
	while (traverse)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}

	return (sum);
}
