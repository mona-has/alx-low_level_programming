#include "main.h"

/**
* is_prime_number - prime number
*
* @n: stdin
*
* Return: always 0
*/

int is_prime_number(int n)
{
	if (n != 2 || n % 2 == 0)
	{
		return (0);
	}
	if (n == 2 || n % 2 != 0)
	{
		return (1);
	}
	return (1);
}

