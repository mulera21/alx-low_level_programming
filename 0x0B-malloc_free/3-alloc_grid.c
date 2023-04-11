#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **v;
	int x, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	v = malloc(sizeof(int *) * height);

	if (v == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		v[x] = malloc(sizeof(int) * width);
		if (v[x] == NULL)
		{
			for (; x >= 0; x--)
				free(v[x]);
			free(v);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (h = 0; h < width; h++)
			v[x][h] = 0;
	}
	return (v);
}
