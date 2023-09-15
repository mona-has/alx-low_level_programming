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
		printf("%d", va_arg(ptr, int));
		if (x < n - 1 && separator)
			printf("%s", separator);
	}

	va_end(ptr);
	printf("\n");
}
