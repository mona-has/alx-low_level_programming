#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: don't print e and q letters
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
			l++;
		putchar(l);
		l++;
	}
		putchar('\n');
	return (0);
}
