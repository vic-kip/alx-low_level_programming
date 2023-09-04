#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *i);
void close_file(int m);

/**
 * create_buffer - Allocating a buffer 1024 bytes
 * @i: The file's name
 * Return:new buffert
 */
char *create_buffer(char *i)
{
	char *j;

	j = malloc(sizeof(char) * 1024);

	if (j == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", i);
		exit(99);
	}

	return (j);
}

/**
 * close_file - Closes a file
 * @m: file to be closed
 */
void close_file(int m)
{
	int x;

	x = close(m);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", m);
		exit(100);
	}
}

/**
 * main - Copies file
 * @argc: Total number of arguments
 * @argv: total number of pointers
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, s, g, v;
	char *j;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	j = create_buffer(argv[2]);
	a = open(argv[1], O_RDONLY);
	g = read(a, j, 1024);
	s = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || g == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(j);
			exit(98);
		}

		v = write(s, j, g);
		if (s == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(j);
			exit(99);
		}

		g = read(a, j, 1024);
		s = open(argv[2], O_WRONLY | O_APPEND);

	} while (g > 0);

	free(j);
	close_file(a);
	close_file(s);

	return (0);
}
