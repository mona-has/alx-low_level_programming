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
	size_t x;

	for (x = 0; x < size; x++)
		action(array[x]);
}
