#include "main.h"

/**
  * _strncat - concatenates two strings.
  *@dest: an input string
  *@src: an input string
  *@n: an input integer
  * Return: a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' &&  j < n)
	{
		dest[i] = src[j];
		i++;
		j++;

	}

	dest[i] = '\0';
	return (dest);

}
