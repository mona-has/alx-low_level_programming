#include "main.h"

/**
* binary_to_uint - entry point
*
* @b: string
*
* Return: the converted number
*	0 chars in the string b that is not 0 or 1
*	b is null
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		s = s * 2 + (*b++ - '0');
	}
	return (s);
}
