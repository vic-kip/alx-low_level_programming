#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, x, p = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (p = 0; text_content[p];)
			p++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	x = write(i, text_content, p);

	if (i == -1 || x == -1)
		return (-1);

	close(i);

	return (1);
}
