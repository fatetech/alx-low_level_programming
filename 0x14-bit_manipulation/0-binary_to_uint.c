#include "main.h"
#include "stddef.h"
/**
 * binary_to_uint - it converts a binary number to an unsigned int
 * @b: is the string that contains the binary number
 * Return: here it returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		num = 2 * num + (b[f] - '0');
	}
	return (num);
}
