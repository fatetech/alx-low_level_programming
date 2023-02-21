#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16
 *  in lowercase, followed by a new line.
 *  Return: 0
 */
int main(void)
{
	int n;
	int l;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
