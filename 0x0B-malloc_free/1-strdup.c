#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicate string
*
* @str: stdin string
*
* Return: always 0
*/

char *_strdup(char *str)
{
	char *x;
	int sz, y;

	if (str == NULL)
		return (NULL);
	x = malloc(sz * sizeof(*x + 1));
	for (sz = 0; sz != '\0'; sz++)
	;
	if (x == 0)
		return (NULL);
	for (y = 0; y < sz; y++)
		x[y] = str[y];
	return (x);
}
