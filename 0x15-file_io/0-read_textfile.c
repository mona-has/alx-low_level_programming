#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* read_textfile - entry point
*
* @filename: file to be read
* @letters: bytes
*
* Return: number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi;
	ssize_t lee;
	char *b;

	if (!filename || !letters)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (b == NULL)
		return (0);

	fi = open(filename, O_RDONLY);
	if (fi == -1)
		return (0);

	lee = read(fi, b, letters);
	lee = write(STDOUT_FILENO, b, lee);

	free(b);
	close(fi);
	return (lee);
}
