#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int cp);
/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file buffer is storing chars for
 *Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: cant write to %s/n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close a file descriptors.
 * @cp: the file to be closed
 */
void close_file(int cp)
{
	int c;

	c = close(cp);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp);
		exit(100);
	}
}

/**
 * main - copies the content of a file into another file
 * @argc: number of arguments supplied to the program.
 * @argv: is an array of pointers to the arguments.
 * Return: 0 on success.
 * Description:If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int fate, bo, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fate = open(argv[1], O_RDONLY);
	r = read(fate, buffer, 1024);
	bo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fate == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(bo, buffer, r);
		if (bo == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s/n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(fate, buffer, 1024);
		bo = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(fate);
	close_file(bo);
	return (0);
}
