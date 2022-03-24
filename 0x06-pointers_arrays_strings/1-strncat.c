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
	*temp = dest;
	int i;

	while (i < n && src[i] != '\0')
	{

		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}

	return (temp);

}
