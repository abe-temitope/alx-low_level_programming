#include <stdio.h>

/**
 * main - Print Hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
