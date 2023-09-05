#include "main.h"
#include <stdlib.h>

/**
* create_array - array of chars
*
* @size: size of array
* @c: char
*
* Return: always 0
*/

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(*x));

	if (x == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		x[y] = c;
	return (x);
}
