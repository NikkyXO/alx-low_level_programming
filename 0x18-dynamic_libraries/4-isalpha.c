#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - A function that checks for lowercase character
 * @c : c is an ascii character
 * Return: 1 if lowercase
 */
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: c is an ascii character
 * Return: Always 0 Success
 */
int _isalpha(int c)
{

        if (c >= 'a' && c <= 'z')
                return (1);

        else if (c >= 'A' && c <= 'Z')
                return (1);

        else
                return (0);
}
