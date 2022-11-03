#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to look into
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of the value found, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t jump = sqrt(size);
	size_t i;

	if (!value)
		return (-1);
	if (array == NULL)
		return (-1);


	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[i] == value)
		        return (i);
		if (array[i] < value)
			low = i;
		else
			break;
	}
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

