#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using
 * the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index the value is located, otherwise -1 if value not
 * present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	size_t i = 0;

	if (!value)
		return (-1);
	if (array == NULL)
		return (-1);


	while (low <= high)
	{
		mid = (low + high) / 2;
		i = low;
		printf("Searching in array: ");

		for (; i <= high; i++)
		{
			if (i != low)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (value < array[mid])
		{
			high = mid - 1;
		}
		else if (value > array[mid])
		{
			low =  mid + 1;
		}
		else if (value == array[mid])
		{
			return (mid);
		}
	}
	return (-1);
}
