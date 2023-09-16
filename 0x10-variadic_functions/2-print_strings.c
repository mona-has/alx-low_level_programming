#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - entry point
*
* @separator: input
* @n: input
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *ptr;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);
		for (x = 0; x < n; x++)
		{
			ptr = va_arg(list, char *);
			if (ptr == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", ptr);
			if (x != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(list);
	}
	printf("\n");
}
