#include "main.h"

/**
 * create_file - creates a file
 * @filename: param
 * @text_content: param
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int of, nletters, rwr;

	if (!filename)
		return (-1);

	of = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (of == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(of, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(of);

	return (1);
}
