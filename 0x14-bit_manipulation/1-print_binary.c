#include "main.h"
/**
 * print_binary - it prints out the binary equivalent of a decimal number
 * @n: is the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int b;

	for (b = sizeof(unsigned long int) * 8 - 1; b >= 0; b--)
	{
		if ((n >> b) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
