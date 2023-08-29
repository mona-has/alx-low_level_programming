#include "main.h"

/**
* _strpbrk - search string
*
* @s: stdin str
* @accept: stdin str
*
* Return: s
*/

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *ptr;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				ptr = &s[x];
				return (ptr);
			}
		}
	}
	return ('\0');
}
