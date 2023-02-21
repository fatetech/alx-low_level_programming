#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
