#include "main.h"

/**
 * print_sign - if n greater than 0 0r equll to 0
 *       or lessthan 0
 *
 * @n: take intger type input for function
 *
 *Return: 1  if n is greater than zero
 *        0  if n is zero
 *        -1 if n is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
