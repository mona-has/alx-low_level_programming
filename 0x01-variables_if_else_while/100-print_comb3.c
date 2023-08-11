#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combinations of two digits
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int d1 = '0', d2;

	while (d1 <= '9')
	{
		d2 = '0';
		while (d2 <= '9')
		{
			if (d1 != d2 && d1 < d2)
			{
				putchar(d1);
				putchar(d2);
				if (d1 != '8' || d2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
