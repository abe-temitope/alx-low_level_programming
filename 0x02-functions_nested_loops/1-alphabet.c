#include "main.h"

/**
 * main - Print alphabets in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');	
}
