#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - 2D array
*
* @width: width of array
* @height: height of array
*
* Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(*ptr));
	if (ptr == 0)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(**ptr));
		if (ptr[x] == NULL)
		{
			while (x--)
				free(ptr[x]);
			free(ptr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}
	return (ptr);
}
