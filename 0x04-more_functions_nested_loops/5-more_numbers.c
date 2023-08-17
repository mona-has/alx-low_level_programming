#include "main.h"

/**
 * more_numbers - 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if
				(y <= 9)
			{
				_putchar(y + '0');
			}
			else
				if (y == 10 && y == 11
				 && y == 12 && y == 13 && y == 14)
			{
				_putchar(1 + (y % 10));
			}
		}
		_putchar("\n");
	}
}
