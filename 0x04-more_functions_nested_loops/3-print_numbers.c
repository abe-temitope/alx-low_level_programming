#include "main.h"

/**
 * print_numbers - Print numbers from 0 - 9.
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
