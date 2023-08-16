#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet ten times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int num = 0;

	while (letter <= 'z')
	{
		while (num <= 10 - 1)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
