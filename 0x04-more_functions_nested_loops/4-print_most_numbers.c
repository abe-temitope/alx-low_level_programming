#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 - 9, except 2 & 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
			_putchar(n);
		n++;
	}
	_putchar('\n');
}
