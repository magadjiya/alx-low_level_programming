#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, length, middle;
	char tempo;

	length = 0;
	while (s[length] != '\0')
		length++;

	/*swap their positions from the middle*/
	middle = length / 2;
	for (i = 0; i < middle; i++)
	{
		/*use a temporary place holder for it*/
		tempo = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tempo;
	}
}
