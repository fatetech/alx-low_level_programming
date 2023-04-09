#include "main.h"
/**
 * flip_bits - Print The number of bits needed to be change
 * from one number to another
 * @n: first number
 * @m: second number which is the number to flip n to.
 * Return: the number of bit change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fate = n ^ m;
	int b = 0;

	while (fate > 0)
	{
		b += (fate & 1);
		fate >>= 1;
	}
	return (b);
}
