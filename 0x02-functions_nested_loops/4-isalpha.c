#include "main.h"
/**
 * _isalpha - checks for alphabetica char
 * @c: the char to be checked
 * Return: 1 if c is a letter, otherwise 0.
 */
int _isalpha(int c)
{
	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
