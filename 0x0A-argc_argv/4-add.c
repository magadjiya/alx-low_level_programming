#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add integer arguments
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if successful, 1 if non int
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
