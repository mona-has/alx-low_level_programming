#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet letters
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char lett = 'a';

	while (lett <= 'z')
	{
		putchar(lett);
		lett = (lett + 1);
	}

		putchar('\n');
	return (0);
}
