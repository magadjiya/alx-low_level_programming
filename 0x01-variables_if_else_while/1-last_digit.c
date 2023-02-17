#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit of n against some conditions
 * Return: 0
 */
int main(void)
{
	int n, last_no;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_no = n % 10;
	printf("Last digit of %d is ", n);
	if (last_no == 0)
		printf("%d and is 0\n", last_no);
	else if (last_no > 5)
		printf("%d and is greater than 5\n", last_no);
	else if (last_no < 6 && last_no != 0)
		printf("%d and is less than 6 and not 0\n", last_no);
	return (0);
}
