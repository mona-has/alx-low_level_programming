#include "main.h"

/**
 * _puts -  a string, followed by a new line
 *
 * @str: stdin
 *
 * Return: always 0
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str + 0);
	_putchar('\n');
}
