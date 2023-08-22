#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: input
 *
 * Return: length od string
*/

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; x++)
		s++;
	return (x);
}
