#include "main.h"
#include <stdio.h>

/**
  * print_diagsums -  prints sum of two diagonals
  * of square matrix of integers
  * @a: is a pointer type char
  * @size: is a variable type size
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + ((size * i) + i));
		sum2 += *(a + ((size * i) - i));
	}

	printf("%i, %i\n", sum1, sum2);
}
