#include "function_pointer.h"
#include <stdlib.h>

/**
  * array_iterator - calls a function given a parameter on each elemen  *t of array
  *@array: integer array
  *@action: function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
