#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet by
 *        _putchar function
*/

void print_alphabet_x10(void)
{
	int t = 1, x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		for (t = 1; t <= 10; t++)
			_putchar(x);
	}
	_putchar('\n');
}
