#include "main.h"

/**
 * print_number - Print any number one character at a time
 * @n: Number to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int num = n;

		if (n < 0)
		{
			_putchar('-');
			num = -num;
		}
		if ((num / 10) > 0)
			print_number(num / 10);
		_putchar((num % 10) + '0');

}
