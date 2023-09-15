#include "function_pointers.h"

/**
* int_index - entry point
*
* @array: input
* @size: input
* @cmp: input
*
* Return: always 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
