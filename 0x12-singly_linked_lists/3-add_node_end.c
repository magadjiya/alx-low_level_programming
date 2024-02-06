#include "lists.h"

/**
 * add_node_end - adds node at the end of a list
 * @head: ptr to the head of node
 * @str: the string to add
 * Return: ptr to head with new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL, *end;
	unsigned int len = _strlen(str);

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	if (end->str == NULL)
		str = "(nil)";
	end->len = len;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = end;

	return (*head);
}

/**
 * _strlen - length of a string
 * @s: the string
 * Return: its length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
