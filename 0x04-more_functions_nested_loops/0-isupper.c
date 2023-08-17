#include "main.h"
#include <stdio>

/**
 * _isupper - Find if an <F11>argument letter is uppercase
 * @c: the given letter
 *
 * Return: Return 1 if c is uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
