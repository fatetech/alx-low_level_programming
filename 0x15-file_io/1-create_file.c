#include "main.h"
/**
 * create_file - creates a file
 * @filename: Pointer file to create
 * @text_content: Pointer to a string that write to the file created.
 * Return: -1 if the function fails
 * otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, kyc = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (kyc = 0; text_content[kyc];)
			kyc++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, kyc);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
