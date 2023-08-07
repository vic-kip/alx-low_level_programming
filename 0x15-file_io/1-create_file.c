#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename:  name of the file to create
 * @text_content: a terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, f, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f = write(x, text_content, i);

	if (x == -1 || f == -1)
		return (-1);

	close(x);

	return (1);
}
