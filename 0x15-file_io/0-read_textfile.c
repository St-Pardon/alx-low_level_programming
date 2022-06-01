#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: param
 * @letters: param size of printed letters
 * Return: size of numbers of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int of; /*open file*/
	ssize_t rf, wf;
	char *buf;

	if (!filename)
		return (0);

	of = open(filename, O_RDONLY);

	if (of == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rf = read(of, buf, letters);
	wf = write(STDOUT_FILENO, buf, rf);

	close(of);

	free(buf);

	return (wf);
}
