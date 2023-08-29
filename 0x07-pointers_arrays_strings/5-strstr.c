#include "main.h"

/**
* _strstr - entry point
*
* @haystack: string stdin
* @needle: stdin substring
*
* Return: ptr
*/

char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a] < needle[b])
			{
				ptr = &needle[b];
				return (ptr);
			}
		}
	}
	return ('\0');
}
