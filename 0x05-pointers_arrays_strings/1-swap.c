#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the values of two integers
 *@a: pointer 1
 *@b: pointer 2
 */
void swap_int(int *a, int *b)
{	int x = *a;

	*a = *b;
	*b = x;
}
