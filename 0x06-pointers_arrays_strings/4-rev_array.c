#include "main.h"
 /**
   * reverse_array - reverses the content of an array of integers
   * @a: integer array
   * @n: number of elements in the array
   * Return: void
   */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
