#include "main.h"
/**
  * print_triangle - prints a triangle, followed by a new line
  * @size: Height of the triangle
  * Return: void
  */
void print_triangle(int size)
{
	int i, j;

	do {
		_putchar('\n');
	} while (size > 0);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) < (size - 1))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
