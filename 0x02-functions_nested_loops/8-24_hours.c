#include "main.h"

/**
 * jack_bauer - print every minute of the day using for loop
 *
 * Description: jack_bauer day using for loop
 *
 * Return: always 0
*/

void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(':');
			_putchar((mins / 10) + 48);
			_putchar((mins % 10) + 48);
		}
	}
}
