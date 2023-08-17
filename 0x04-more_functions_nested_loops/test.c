#include <stdio.h>

/**
 * main - Print numbers from 0 - 9.
 *
 * Return: Always 0
 */
void main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
