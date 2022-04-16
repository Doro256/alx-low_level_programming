#include "main.h"

/**
  * print_array - print an array
  * @a: array to be printed
  * @n: length of the array
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
