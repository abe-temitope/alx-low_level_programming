#include <stdio.h>

/**
 * main - Print all digit of base ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
