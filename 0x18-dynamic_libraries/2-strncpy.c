#include "main.h"
/**
 * _strncpy - copies a string to a specified destinatiom
 * @dest: destination
 * @src: source
 * @n: specified length
 * Return: Destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
