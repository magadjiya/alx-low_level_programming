#include "main.h"

/**
 * prime - checks the actual prime no
 * @n: the number
 * @i: the other numbers we divide by to ensure its a prime
 * Return: 1 if prime, 0 if not
 */
int prime(int n, int i)
{
	if (i == 1) /* if it reaches 1 then its a prime */
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i - 1));
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: the number
 * Return: 1 if yes, 0 if no
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n / 2)); /* start at half(n) to optimize */
}
