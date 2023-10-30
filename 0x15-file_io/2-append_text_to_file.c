#include "main.h"

/**
* append_text_to_file - entry point
*
* @filename: name of the file
* @text_content: tring to add at the end of the file
*
* Return: 1 On Success
*	-1 On Failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int x, fi;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (x = 0; text_content[x] != '\0'; x++)
		;
	fi = open(filename, O_WRONLY | O_APPEND);
	if (fi == -1)
		return (-1);

	write(fi, text_content, x);
	return (1);
}
