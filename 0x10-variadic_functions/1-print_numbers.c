#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - entry point
*
* @separator: input string
* @n: input
*
* Return: always 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ptr;

	va_start(ptr, n);
	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(ptr, int));
		if (separator == 0 && x == 0)
			printf("%d", va_arg(ptr, int));
		else
			printf("%s%d", separator, va_arg(ptr, int));
	}

	va_end(ptr);
	printf("\n");
}
