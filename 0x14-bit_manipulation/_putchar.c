#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes the c character to STDOUT
 * @c: the character to be printed
 * Return: Success 1
 * -1 when there is error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
