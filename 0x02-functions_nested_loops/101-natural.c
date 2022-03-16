#include <stdio.h>
#include <stdlib.h>
/**
 * main - Computes Sum of multiple
 * Description- A program that computes and prints the
 * sum of all the multiples of 5
 * Return: Always 0 Success
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int n;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0)
		{
			sum3 = sum3 + n;
		} else if ((n % 5) == 0);

		{

			sum5 = sum5 + n;
		}

	}


	sum = sum3 + sum 5;
	printf("%lu\n", sum);
	return (0);
}

