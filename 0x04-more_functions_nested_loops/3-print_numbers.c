#include "main.h"

/**
 * print_numbers - numbers, from 0 to 9, followed by a new line
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
