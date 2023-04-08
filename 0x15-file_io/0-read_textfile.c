#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read text file print to stdout.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: w- number of bytes read and printed
 * 0 when the function fails or filename is NUll
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *fate;

	if (filename == NULL)
		return (0);
	fate = malloc(sizeof(char) * letters);
	if (fate == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, fate, letters);
	w = write(STDOUT_FILENO, fate, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(fate);
		return (0);
	}
	free(fate);
	close(o);
	return (w);
}
