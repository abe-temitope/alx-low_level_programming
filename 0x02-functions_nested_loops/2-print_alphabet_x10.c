#include "main.h"

/**
 * print_alphabet_x10 - Print all alphabets 10 times
 *
 * Return: 0;
 */
void print_alphabet_x10(void)
{
	int n = 0;
	int l = 'a';

	while (n < 10)
	{
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		n++;
	}
}
