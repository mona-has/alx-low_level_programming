#include "main.h"

/**
 * print_rev -  a string, in reverse
 *
 * @s: stdin
*/

void print_rev(char *s)
{
	int len;
	int x;

	for (len = 0; *s != '\0'; len++)
	x = len;
	while (x > 0) 
		x--;
	_putchar(*s);
	_putchar('\n');
}
