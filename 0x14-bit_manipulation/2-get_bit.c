#include "main.h"

/**
* get_bit - entry point
*
* @n: input
* @index: input
*
* Return: value of the bit at index
*	-1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) ||
	n == 0)
		return (-1);
	n = n >> index;
	return (n & 1);
}
