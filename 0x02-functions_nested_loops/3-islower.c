#includede "main.h"
/**
 *  _islower -> fuction that check lowercase characters
 * @c: is the character to be checked
 * Return: 1 if character is lower, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
		return (0);
}
