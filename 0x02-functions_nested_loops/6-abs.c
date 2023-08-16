#include "main.h"

/**
 * _abs - print absolute value of an integer
 *
 * @n: take integer type for function
 *
 * Return: always 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
