
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* _elf - entry point
*
* @ptr: pointer
*
* Return: void
*/

void _elf(unsigned char *ptr)
{
	int s;

	for (s = 0; s < 4; s++)
	{
		if (*ptr != 127 && *ptr != 'E' && *ptr != 'L' &&
		*ptr != 'F')
		{
			dprintf(STDERR_FILENO, "Error\n");
			exit(98);
		}
	}
}
