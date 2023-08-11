#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		printf("%i", d);
		d++;
	}
	printf("\n,");
	return (0);
}
