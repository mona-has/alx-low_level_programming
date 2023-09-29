#include "main.h"

/**
* binary_to_uint - entry point
*
* @b: pointer to string
*
* Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		x = x * 2 + (*b++ - '0');
	}
	return (x);
}
