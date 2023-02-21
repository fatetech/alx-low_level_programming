#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations
 *  of single-digit numbers with commas.
 *  Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
