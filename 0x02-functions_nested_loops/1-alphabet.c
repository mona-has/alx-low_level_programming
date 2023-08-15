#include "main.h"

/**
 * print_alphabet - print alphabet by _putchar function
 *
*/

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
