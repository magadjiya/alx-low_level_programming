#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the file we want to create
 * if it doesnt exist, we set permissions to rw- --- ---
 * @text_content: the null terminating string we write to filename
 * Return: 1, On success, -1 On any failure/error
 */
int create_file(const char *filename, char *text_content)
{
	int fileDes, checkW, text_len;

	if (filename == NULL)
		return (-1);
	fileDes = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fileDes == -1)
	{
		close(fileDes);
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";
	text_len  = strlen(text_content);

	checkW = write(fileDes, text_content, text_len);
	if (checkW == -1)
	{
		close(fileDes);
		return (-1);
	}

	close(fileDes);
	return (1);
}
