#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98
 *
 * @n: input
*/

void reset_to_98(int *n)
{
	int **pt = &n;
	**pt = 98;
}
