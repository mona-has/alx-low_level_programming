#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input
 * @s2: input
 *
 * Return: comp
*/

int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			comp = (*s1 - *s2);
			break;
		}
		s1++;
		s2++;
	}
	return (comp);

}
