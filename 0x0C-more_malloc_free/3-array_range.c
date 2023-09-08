#include "main.h"
#include <stdlib.h>

/**
* array_range - entry point
*
* @min: stdin
* @max: stdin
*
* Return: always 0
*/

int *array_range(int min, int max)
{
	int *x;
	int y;

	if (min > max)
		return (NULL);

	x = malloc(sizeof(int) * (max - min + 1));
	if (x == NULL)
		return (NULL);
	for (y = 0; min <= max; y++)
		x[y] = min++;
	return (x);
}
