#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file we append to
 * @text_content: the string we append
 * Return: 1, On Siccess, -1 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDes, checkW, text_len;

	if (filename == NULL)
		return (-1);
	fileDes = open(filename, O_WRONLY | O_APPEND);
	if (fileDes == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fileDes);
		return (1);
	}
	text_len = strlen(text_content);

	checkW = write(fileDes, text_content, text_len);
	if (checkW == -1)
	{
		close(fileDes);
		return (-1);
	}

	close(fileDes);
	return (1);
}
