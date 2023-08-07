#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it stdout
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t p;
	ssize_t i;
	ssize_t a;

	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	a = read(p, x, letters);
	i = write(STDOUT_FILENO, x, a);

	free(x);
	close(p);
	return (i);
}
