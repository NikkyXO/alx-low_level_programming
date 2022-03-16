#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - A function that prints all natural number
 * from n to 98, followed by a new line
 *
 *@n: n is integer
 * Description: Prints all natural numbers from n to 98
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n < 98)

	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);

		}
	}

	else if (n > 98)

		for (; n > 98; n--)
		{
			printf("%d, ", n);

		}

	printf("98\n");


}

