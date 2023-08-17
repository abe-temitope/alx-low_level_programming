#include "main.h"

/**
 * more_numbers - Print number from 0 - 14 ten times.
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		int n = 0;

		while (n <= 14)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}

		_putchar('\n');
		i++;
	}
}
