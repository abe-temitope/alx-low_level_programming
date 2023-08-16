#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet ten times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int letter, num;

	int num = 0;
	while (num < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		num++;
	}
}
