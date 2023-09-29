#include "main.h"
#include <math.h>

/**
* print_binary - entry point
*
* @n: input
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
		return;
	else if (n == 1)
	}
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	_puutchar('0' + (n & 1));
}

