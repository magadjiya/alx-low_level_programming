#include <stdio.h>

/**
 * main - print sizes of data types in c
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long));
	printf("Size of a long long int: %i byte(s)\n", sizeof(double));
	printf("Size of a float: %i byte(s)\n", sizeof(float));

	return (0);
}
