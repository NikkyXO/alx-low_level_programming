#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - A function that checks for lowercase character
 * @c : c is an ascii character
 * Return: 1 if lowercase
 */

int _islower(int c)
{

        if (c >= 97 && c <= 122)
        {

                return (1);
        }

        else
        {
                return (0);
        }
}
