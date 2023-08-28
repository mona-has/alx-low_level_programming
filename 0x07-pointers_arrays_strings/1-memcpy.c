#include "main.h"

/**
* _memcpy - copies memory area
*
* @dest: memory area
* @src: memory area
* @n: size
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		dest[x] = src[x];
	}
	return (dest);
}
