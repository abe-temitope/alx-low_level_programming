#include "main.h"

/**
 * _isdigit - Check if input is a number
 * @c: Given input to check
 *
 * Return: 1 if c is a  number, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
