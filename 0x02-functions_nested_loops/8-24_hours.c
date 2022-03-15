#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day of Jack
 * Bauer, starting from 00:00 to 23:59
 * H: H for Hours
 * M: M for Minutes
 * Return: Nothing
 *
 *
 *
 */

void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 60; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			-putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}

}
