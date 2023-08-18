#include "main.h"

/**
 * more_numbers - 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int x, y, z;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			z = y;
			if
				(y > 9)
			{
				_putchar(1 + '0');
				z = y % 10;
			}
			_putchar(z + '0');
		}
		_putchar('\n');
	}
}
