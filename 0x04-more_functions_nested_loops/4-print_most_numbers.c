#include "main.h"

/**
 * print_most_numbers - Do not print 2 and 4
*/

void print_most_numbers(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		if (a != '2' || a != '4')
		_putchar(a);
	}
	_putchar('\n');
}
