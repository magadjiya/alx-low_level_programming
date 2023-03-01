#include "main.h"

/**
 * _strcpy - copy a string from a source to a destination
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		/*segmentation fault if inverted*/
		dest[i] = src[i];
	}
	/*copies null character as well*/
	dest[i] = '\0';
	return (dest);
}
