#include "main.h"
#include <stdlib.h>

/**
* _calloc - entry oint
*
* @nmemb: stdin
* @size: size
*
* Return: always 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(sizeof(nmemb) * size);
	if (x == NULL)
		return (NULL);

	for (y = 0; y < nmemb * size)
		x[y] = 0;
	return (x);
}
