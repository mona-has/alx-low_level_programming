#include <unistd.h>
#include "main.h"

/**
* _putchar - write the charcter to stdout
*
* @c: the character to print
*
* Return: On success 1
*	On error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
