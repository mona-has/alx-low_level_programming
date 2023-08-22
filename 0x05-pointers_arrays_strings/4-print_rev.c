#include "main.h"

/**
 * print_rev -  a string, in reverse
 *
 * @s: stdin
*/

void print_rev(char *s)
{
	int x;

	for (x = 0; *s != '\0'; x++)

	while (x--)
		_putchar(*s);
	_putchar('\n');
}
