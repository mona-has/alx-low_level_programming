#include "main.h"

/**
* _strchr - locates a char in string
*
* @s: string
* @c: character
*
* Return: pointer
*/

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
