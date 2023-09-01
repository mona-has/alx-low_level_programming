#include <stdio.h>

/**
* main - entry point
*
* @argc: count
* @argv: string
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; argc++; x++)
		printf("%s\n", argv[x]);
	return (0);
}
