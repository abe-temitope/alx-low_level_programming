#include "main.h"

/**
 * _strlen - Return the length of a given string
 * @s: Pointer to the string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
