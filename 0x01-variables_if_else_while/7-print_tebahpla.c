#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: lowercase alphabet in reverse
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char d = 'z';

	while (d >= 'a')
	{
		putchar(d);
		d--;
	}
		putchar('\n');
	return (0);
}
