#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - A function that conctaenates two strings
  * @s1: An input pointer of first string
  * @s2: An input pointer of the second string
  * @n: An input integer of number of strings to concatenate
  * Return: A pointer to concatenate strings ,else NULL if str is NULL


  char *string_nconcat(char *s1, char *s2, unsigned int n)
  {
  	char *str;
	unsigned int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[len2])
		len2++;
	
	if (n >= len2)
		n = len2;

	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (; i < (len1 + n); i++)
	{
		if (i < len1)
			str[i] = *si, s1++;
		else
			str[i] = *s2, s2++;

	}
	str[i] = '\0';
	return(str);
}
