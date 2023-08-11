#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: print numbers followed by , and space
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
		putchar('\n');
	return (0);
}
