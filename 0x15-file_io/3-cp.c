#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void close_file(int z);
char *create_buffer(char *file);

/**
 * create_buffer - assigning 1024 bytes
 * @file: name of the file
 * Return: allocated bytes buffer
 */
char *create_buffer(char *file)
{
	char *m;

	m = malloc(sizeof(char) * 1024);

	if (m == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (m);
}

/**
 * close_file -  descriptors files are closed
 * @z: file to be closed
 */
void close_file(int z)
{
	int i;

	i = close(z);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", z);
		exit(100);
	}
}

/**
 * main -  copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int x, a, b, f;
	char *m;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	m = create_buffer(argv[2]);
	x = open(argv[1], O_RDONLY);
	b = read(x, m, 1024);
	a = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (x == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(m);
			exit(98);
		}

		f = write(a, m, b);
		if (a == -1 || f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(m);
			exit(99);
		}

		b = read(x, m, 1024);
		a = open(argv[2], O_WRONLY | O_APPEND);

	} while (b > 0);

	free(m);
	close_file(x);
	close_file(a);

	return (0);
}
