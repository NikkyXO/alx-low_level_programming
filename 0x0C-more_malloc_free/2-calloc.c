#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array,using malloc
  * @nmemb: number of members
  * @size: number of bytes
  * Return: pointer to the allocated memory corresponding
  * with the string
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	s = arr;

	for (i = 0; i < nmemb * size; i++;)
		s[i] = 0;

	return (arr);

}
