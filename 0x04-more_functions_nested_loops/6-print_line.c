#include "main.h"

/**
 * print_line - Print a straight line on the terminal.
 *
 * Return: Return nothing.
 */
void print_line(int n)
{
	int t = 0;

	while (t < n)
	{
		if (n > 0)
			_putchar('_');
		n++;
	}
	_putchar('\n');
}
