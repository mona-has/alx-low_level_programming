#include "main.h"

/**
* _sqrt_recursion - square root
*
* @n: stdin
*
* Return: always 0
*/

int _sqrt_recursion(int n)
{
	if (n * n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt_recursion(n * n + 1));
}
