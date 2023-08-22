#include "main.h"

/**
 * *_strcpy - Copy the given string
 * @dest: Location to copy string to
 * @src: String to copy to given location
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
