#include "main.h"

/**
 * _islower - print lowercaseof alphabet
 *
 * @c: check input of function
 *
 * Return: 1 if c is lowercase
 *         0 otherwise
*/

int _islower(int c)
{
	if (c <= 97 && c <= 122)
		return (1);
	return (0);
}
