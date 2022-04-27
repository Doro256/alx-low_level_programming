#include "main.h"

/**
  * print_diagsums -  prints sum of two diagonals
  * of square matrix of integers
  * @a: is a pointer type char
  * @size: is a variable type size
  * Return: Nothing
  */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][size - 1];

	printf("%d, %d\n", sum1, sum2);
}
