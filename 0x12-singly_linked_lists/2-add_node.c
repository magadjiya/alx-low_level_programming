#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 * @head: the ptr to the first node
 * @str: the string data to add
 * Return: the new node as the first elememt
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int len = _strlen(str);

	if (new	!= NULL)
	{
		/* Make a copy of the new string */
		new->str = strdup(str);
		new->len = len;
		new->next = NULL;

		new->next = *head;
		*head = new;
	}
	else
		return (NULL);

	return (*head);
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
