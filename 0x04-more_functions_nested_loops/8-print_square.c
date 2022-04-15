#include "main.h"
/**
  * print_square - prints a square, followed by a new line
  * Return:void
  */

void print_square(int size)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
