#include "main.h"

/**
 * main - Entry point
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;

	}
	_putchar('\n');
	return (0);

}

