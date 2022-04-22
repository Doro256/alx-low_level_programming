#include "main.h"
 /**
   * reverse_array - reverses the content of an array of integers
   * @a: integer array
   * @n: number of elements in the array
   * Return: void
   */

void reverse_array(int *a, int n)
{
	int i, mid;

	for (mid = n / 2; mid > 0; mid--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
