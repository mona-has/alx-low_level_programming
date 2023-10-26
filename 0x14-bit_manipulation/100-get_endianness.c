#include "main.h"

/**
* get_endianness - entry point
*
* Return: 0 big endian
*	1 little endian
*/

int get_endianness(void)
{
	int x;
	char *ed;

	x = 1;
	ed = (char *)&x;
	if (*ed == 1)
		return (1);
	return (0);
}
