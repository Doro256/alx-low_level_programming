#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array
  * @array: array of integers
  * @size: array size
  * @action: function pointer
  * on individual elements
  * Return: void
  */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
