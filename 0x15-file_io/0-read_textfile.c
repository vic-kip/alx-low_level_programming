#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and prints it
 * @filename: file
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t p;
	ssize_t i;
	ssize_t j;

	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	j = read(p, x, letters);
	i = write(STDOUT_FILENO, x, j);

	free(x);
	close(p);
	return (i);
}
