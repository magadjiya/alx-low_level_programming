#include "lists.h"

/**
 * pop_listint - delete the first node of a list
 * @head: pointer to the pointer to the first node
 * Return: the element n of the deleted node, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int saveN;

	if (*head == NULL)
		return (0);
	/**
	 * set temp to head so that I can delete it
	 * save the value you want to return
	 * update head to the next node, so that becomes the head
	 * finally you free temp and make it NULL
	 */
	temp = *head;
	saveN = temp->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (saveN);
}
