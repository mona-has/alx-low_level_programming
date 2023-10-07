#include "main.h"

/**
* create_file - entry point
*
* @filename: name of the file to create
* @text_content: string to write to the file
*
* Return: 1 on sucsses
*	-1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int x, fi;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (x = 0; text_content[x] != '\0'; x++)
		;
	fi = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fi == -1)
		return (-1);
	write(fi, text_content, x);
	return (1);
}
