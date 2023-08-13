#include <stdio.h>

/**
 * main - Print alphabet exclude 2 letters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		if (z != 'q' && z != 'e')
		{
			putchar(z);
		}
		z++;
	}
	putchar('\n')
	return (0);
