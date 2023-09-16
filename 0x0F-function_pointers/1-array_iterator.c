#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - entry point
*
* @array: input
* @size: array size
* @action: pointer
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && action != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
