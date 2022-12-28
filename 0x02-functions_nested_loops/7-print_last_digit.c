#include "main.h"

/**
 * print_last_digit - function that returns the last digit of a set of integers
 * @n: number(s) inputted
 * Return: last
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10; /* modulo divided by 10 gives the last no */
	return (last);
}
