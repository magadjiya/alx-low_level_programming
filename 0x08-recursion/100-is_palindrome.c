
#include "main.h"

/**
 * is_palindrome - calls a function that checks if string is a palindrome
 * @s: the string
 * Return: 1 if yes, 0 if no
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (recursivePalindrome(s, 0, n - 1));
}

/**
 * recursivePalindrome - recursively checks if palindrome string
 * @str: the string
 * @b: the beginning character
 * @e: the laat character/end
 * Return: 1 if yes, 0 if no
 */
int recursivePalindrome(char *str, int b, int e)
{
	/* One character check */
	if (b == e)
		return (1);
	if (str[b] != str[e])
		return (0);

	/* */
	if (b < e - 1)
		return (recursivePalindrome(str, b + 1, e - 1));
	return (1);
}

/**
 * _strlen_recursion - length of string using recursion
 * @s: the string
 * Return: length of string in a number
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
