#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet: print alphabet by _putchar function
 *
 * Return: Always 0.
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
