#include "main.h"
/**
 * print_diagonal - Print diagonal line on the tarminal.
 *
 * @n: Number of '\'s to print
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int c = 0;

	if (n > 0)
	{
		while (c < n)
		{
			int s = 0;

			while (s < c)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\\');
			_putchar('\n');
			c++;
		}
	} else
		_putchar('\n');
}
