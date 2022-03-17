#include "main.c"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 t0
 * 14, to followed by a new line,
 *
 *
 * Return: Always 0
 *
 */

void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{

		for (m = 0; n <= 14; m++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');


		}

		_putchar('\n');

	}

}

