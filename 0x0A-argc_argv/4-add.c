#include <stdio.h>
#include <stdlib.h>

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
	int x = 0;
	char *ptr;

	while (--argc)
	{
		for (ptr = argv[argc]; *ptr; ptr++)
			if (*ptr < '0' || *ptr > '9')
			{
				printf("Error\n");
				return (1);
			}
		x = x + atoi(argv[argc]);
	}
	printf("%d\n", x);

	return (0);
}
