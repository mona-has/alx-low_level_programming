#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - entry point
*
* @n: stdin
*
* Return: always 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);
	for (x = 0; x < n; x++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);

	if (n == 0)
		return (0);
}
