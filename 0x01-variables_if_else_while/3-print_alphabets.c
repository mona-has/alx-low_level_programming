#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercases and uppercases
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char l = 'a';
	char L = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l = (l + 1);
	}
	while (L <= 'Z')
	{
		putchar(L);
		L = (L + 1);
	}
		putchar('\n');
	return (0);
}
