#include "main.h"
/**
 * set_bit -  sets a bit at a given index to 1
 * @n: the number of change
 * @index: index of the bit to be set to 1
 * Return: 1 if successful & -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
