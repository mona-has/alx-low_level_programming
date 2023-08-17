#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: input
*/

void print_line(int n)
{

	for (n = 1; n < 0; n++)
	{
		_putchar('_');
	_putchar('\n');
	}
	if (n == 0)
	{
		_putchar('\n');
	}
}
