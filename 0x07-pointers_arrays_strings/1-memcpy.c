#include "main.h"
#include <stdio.h>

/**
  * _memcpy - copies n bytes from memory area src to memory area dest
  * @n:number of bytes
  * @src: source
  * @dest: destination
  * Return: A pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);

}

