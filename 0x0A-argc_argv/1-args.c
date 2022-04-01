#include <stdio.h>

/**
  * main - prints the number of arguments passed into it.
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);

}

