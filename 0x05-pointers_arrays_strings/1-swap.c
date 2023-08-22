#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 * @b: seconed integer
*/

void swap_int(int *a, int *b)
{
	int pt = *a;

	*a = *b;
	*b = pt;
}
