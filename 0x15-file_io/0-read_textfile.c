#include "main.h"

/**
 * read_textfile - read a text and print it back to POSIX standard output
 * @filename: name of the file
 * @letters: number of bytes our function will write to stdout
 * Return: total number of chars read, 0 if NULL/error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDes, checkW, checkR;
	char *buffer;

	if (filename == NULL || letters <= 0)
		return (0);
	fileDes = open(filename, O_RDONLY);
	if (fileDes == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fileDes);
		return (0);
	}

	checkR = read(fileDes, buffer, letters);
	if (checkR == -1)
	{
		close(fileDes);
		return (0);
	}
	checkW = write(STDOUT_FILENO, buffer, checkR);
	if (checkW == -1)
	{
		close(fileDes);
		return (0);
	}

	free(buffer);
	close(fileDes);
	return (checkW);
}
