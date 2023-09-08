#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - entry point
*
* @s1: stdin str
* @s2: stdin sstr
* @n: input
*
* Return: always 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int len1, len2, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; len1 != '\0'; len1++)
	;
	for (len2 = 0; len2 != '\0'; len2++)
	;
	if (n >= len2)
	{
		x = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		x = malloc(sizeof(char) * (len1 + n + 1));
	if (x == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		x[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		x[a] = s2[b];
		a++;
	}
	x[a] = '\0';
	return (x);
}
