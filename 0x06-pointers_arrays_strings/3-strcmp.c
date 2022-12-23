#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if theyre equal
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, comp;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			comp = 0;
		}
		else if (s1[i] >= s2[i])
		{
			comp = (int)s2[i] - (int)s1[i];
		}
		else if (s1[i] <= s2[i])
		{
			comp = (int)s1[i] - (int)s2[i];
		}
		i++;
	}
	_putchar('\n');
	return (comp);
}
