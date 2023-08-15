#include "main.h"

/**
 * main - check the code
 *
 * Description: function print_alphabet
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
