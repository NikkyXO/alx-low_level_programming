#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -create a new new_dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *bingo;
	int i, j, k;
	char *n, *o;

	bingo = malloc(sizeof(struct dog));
	if (bingo == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(bingo);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(bingo);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	bingo->name = n;
	bingo->age = age;
	bingo->owner = o;

	return (bingo);
}
