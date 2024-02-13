#include "main.h"

/**
 * binary_to_uint - convert a binary number to its unsigned int version
 * @b: string of binary characters
 * Return: the decimal version of b
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, decimalNo = 0;
	int power = _strlen(b) - 1;

	if (b == NULL)
		return (decimalNo);
	/* Check if all chars are in binary */
	for (i = 0; i < _strlen(b); i++)
	{
		if (!(isBinary(b[i])))
			return (decimalNo);
	}

	j = 0;
	while (j < _strlen(b))
	{
		/* Turn each char to an int by - '0' */
		decimalNo += (b[j] - '0') * _pow(2, power);
		j++;
		power--;
	}

	return (decimalNo);
}

/**
 * _strlen - gives length of a string w/o terminating null end
 * @s: the string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * isBinary - checks if a character is in binary
 * @c: the character
 * Return: 1 if True, 0 if False
 */
int isBinary(char c)
{
	if (c == '1' || c == '0')
		return (1);
	return (0);
}

/**
 * _pow - raise an integer x to  the power of another integer y
 * @x: the number
 * @y: the power
 * Return: the result of x ^ y
 */
int _pow(int x, int y)
{
	int i, result = 1;

	for (i = 0; i < y; i++)
		result *= x;
	return (result);
}
