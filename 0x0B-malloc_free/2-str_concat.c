#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates 2 strings
* @s1: first string
* @s2: second string
* Return: ptr
*/

char *str_concat(char *s1, char *s2)
{
	char *x;
	int sz1, sz2, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (sz1 = 0; s1[sz1] != '\0'; sz1++)
	;
	for (sz2 = 0; s2[sz2] != '\0'; sz2++)
	;
	x = malloc(sz1 * sizeof(*s1) + sz2 * sizeof(*s2) + 1);
	if (x == 0)
		return (NULL);
	for (y = 0; y < sz1 + sz2; y++)
	{
		if (y < sz1)
			x[y] = s1[y];
		else
			x[y] = s2[y - sz1];
	}
	return (x);
}
