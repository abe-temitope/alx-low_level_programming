#include "main.h"

/**
 * _islower- Check for lowercase.
 * @c: Letter to check case of
 *
 * Return: 0;
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
