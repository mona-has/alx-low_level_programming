#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
