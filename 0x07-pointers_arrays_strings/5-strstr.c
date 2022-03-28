#include "main.h"
#include <stdio.h>

/**
  *_strstr - A function that locates a substring
  *@haystack: an input string to search in
  *@needle: an input string to locate into string haystack
  *Return: a pointer to the beginning of the located substring,
  *or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;
	int nlen = 0;

	i = 0;
	j = 0;
	start = 0;

	while (needle[nlen] != '\0')
	{
		nlen++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < nlen && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
			{
				start = i;
			}
			if (j == nlen - 1)
			{
				return (haystack + start);
			}
		}
	}
	return (0);
}
