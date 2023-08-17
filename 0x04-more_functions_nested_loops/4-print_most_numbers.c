#include "main.h"

/**
 * print_most_numbers - Do not print 2 and 4
*/

void print_most_numbers(void)
{
	int a = '0';

	if (a <= '9' && (a != '2' && a != '4'))
	{
		_putchar(a);
	}
	_putchar('\n');
}
