#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, p, j = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	p = write(i, text_content, j);

	if (i == -1 || p == -1)
		return (-1);

	close(i);

	return (1);
}
