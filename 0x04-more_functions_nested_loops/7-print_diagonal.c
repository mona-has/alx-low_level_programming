#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times
*/

void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (x = 1; x < i; x++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
