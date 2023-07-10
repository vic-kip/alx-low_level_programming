#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creating grid
 * @width: width input which has value of NULL
 * @height: height input which has value of NULL
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **f;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	f = malloc(sizeof(int *) * height);

	if (f == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		f[a] = malloc(sizeof(int) * width);

		if (f[a] == NULL)
		{
			for (; a >= 0; a--)
				free(f[a]);

			free(f);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			f[a][b] = 0;
	}

	return (f);
}
