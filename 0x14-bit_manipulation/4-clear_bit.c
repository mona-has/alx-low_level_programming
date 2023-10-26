#include "main.h"

/**
* clear_bit - entry point
*
* @n: input
* @index: input
*
* Return: 1 on success
*	-1 0n failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	q = ~(1 << index);
	*n = *n & q;
	return (1);
}
