#include "function_pointers.h"

/**
* print_name - entry point
*
* @name: input
* @f: input
*
* Return: always 0
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
