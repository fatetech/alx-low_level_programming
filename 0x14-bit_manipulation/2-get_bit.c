#include "main.h"
/**
 * get_bit - This returns the value of the bit at index in a decimal number
 * @n: is the number to be search
 * @index: is the index of the given bit
 * Return: the value of the given bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (0);
	}
	return (1);
}
