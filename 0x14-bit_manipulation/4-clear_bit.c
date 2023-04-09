#include "main.h"
/**
 * clear_bit - returns the value of a bit to Zero
 * @n: pointer to the num to be change
 * @index: the index of the given bit to be cleard
 *
 * Return: success = 1 and failure = 2
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
