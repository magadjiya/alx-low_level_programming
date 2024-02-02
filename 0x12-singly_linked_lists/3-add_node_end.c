#include "lists.h"

/**
 * add_node_end - adds node at the end of a list
 * @head: ptr to the head of node
 * @str: the string to add
 * Return: ptr to head with new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *end;
	unsigned int len = _strlen(str);

	end = malloc(sizeof(list_t));
	end->str = strdup(str);
	end->len = len;
	end->next = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = end;

	return (end);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length - '\0'
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
