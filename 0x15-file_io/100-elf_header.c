
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
*
* @argc: argument numbers
* @argv: string
*
* Return: always 0
*/

int main(int argc, char **argv)
{
	int x;
	(void)argc;

	for (x = 0; x < argc; x++)
		printf("Error\n %s", argv[x]);
	return (0);
}
