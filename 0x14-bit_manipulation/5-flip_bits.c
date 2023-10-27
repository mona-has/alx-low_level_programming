#include "main.h"

/**
* flip_bits - entry point
*
* @n: input
* @m: input
*
* Return: number of bits you would need to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int q;
	unsigned long int u = 0;

	q = n ^ m;
	while (q > 0)
	{
		u += q & 1;
		q >>= 1;
	}
	return (u);
}
