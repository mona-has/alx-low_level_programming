#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - entry point
*
* @b: stdin
*
* Return: always 0
*/

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
