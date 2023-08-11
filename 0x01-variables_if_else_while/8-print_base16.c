#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Hexadecimal
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int d = '0';

	while (d <= 'f')
	{
		putchar(d);
		if (d == '9')
			d += 39;
		d++;
	}
		putchar('\n');
	return (0);
}
